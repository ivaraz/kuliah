from itertools import combinations

# Menghitung jumlah 1 dalam representasi biner sebuah angka.
def count_ones(number):
    return bin(number).count('1')

# Mengembalikan representasi biner dengan jumlah bit tertentu.
def get_binary(num, bits):
    return f"{num:0{bits}b}"

# Menggabungkan dua term jika berbeda pada satu bit.
def combine_terms(term1, term2):
    diff = 0
    combined = []
    for b1, b2 in zip(term1, term2):
        if b1 != b2:
            diff += 1
            combined.append('-')
        else:
            combined.append(b1)
    return ''.join(combined) if diff == 1 else None

# Memeriksa apakah minterm tercakup oleh sebuah term.
def is_covered(term, minterm):
    for t, m in zip(term, minterm):
        if t != '-' and t != m:
            return False
    return True

# Menghasilkan prime implicants menggunakan metode Quine-McCluskey.
def get_prime_implicants(groups, bits):
    all_terms = []
    while groups:
        next_groups = {}
        checked = set()
        for (count1, terms1), (count2, terms2) in combinations(groups.items(), 2):
            if count2 - count1 != 1:
                continue
            for term1 in terms1:
                for term2 in terms2:
                    combined = combine_terms(term1, term2)
                    if combined:
                        next_groups.setdefault(count1, []).append(combined)
                        checked.update([term1, term2])
        all_terms.extend(set(terms) - checked for terms in groups.values())
        groups = {count: list(set(terms)) for count, terms in next_groups.items()}
    return set(term for group in all_terms for term in group)

# Menentukan essential prime implicants.
def essential_prime_implicants(prime_implicants, minterms, bits):
    table = {m: [] for m in minterms}
    for prime in prime_implicants:
        for m in minterms:
            if is_covered(prime, get_binary(m, bits)):
                table[m].append(prime)
    essentials = set()
    for m, primes in table.items():
        if len(primes) == 1:
            essentials.add(primes[0])
    return essentials

# Fungsi utama untuk menyederhanakan ekspresi Boolean.
def quine_mccluskey(minterms, bits):
    groups = {}
    for m in minterms:
        binary = get_binary(m, bits)
        count = count_ones(m)
        groups.setdefault(count, []).append(binary)
    
    prime_implicants = get_prime_implicants(groups, bits)
    essentials = essential_prime_implicants(prime_implicants, minterms, bits)
    return essentials


# Input jumlah variabel dari pengguna
if __name__ == "__main__":
    try:
        num_vars = int(input("Masukkan jumlah variabel : "))
        if num_vars <= 0:
            raise ValueError("Jumlah variabel harus lebih dari 0.")

        # Input daftar minterms dari pengguna
        minterms_input = input("Masukkan daftar minterms (pisahkan dengan spasi): ")
        minterms = list(map(int, minterms_input.split()))
        
        if not minterms:
            raise ValueError("Daftar minterms tidak boleh kosong.")

        # Jalankan Quine-McCluskey
        result = quine_mccluskey(minterms, num_vars)
        
        # Outputkan hasil
        print("\nEssential Prime Implicants:")
        if result:
            for r in result:
                print(f" - {r}")  # Cetak setiap implicant
        else:
            print("Tidak ada implicant yang ditemukan.")
    except ValueError as e:
        print(f"Input tidak valid: {e}")

