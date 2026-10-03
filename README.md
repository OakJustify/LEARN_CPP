# Belajar C++ dari Nol

Repo ini buat belajar C++ dari dasar: satu projek kecil per folder, supaya
tidak cuma "baca teori" tapi benar-benar nge-code.

## Target

Setelah selesai seri ini, aku bisa:
- baca & nulis program C++ tanpa copy-paste
- paham variabel, kondisi, loop, fungsi, array, struct
- bikin program sendiri tanpa perluMtutorial lain

## Struktur

| Folder | Isi | Status |
| --- | --- | --- |
| `01_kalkulator` | Kalkulator sederhana | selesai |

## Cara kerja per projek

1. Baca `README.md` di dalam folder projek — ada penjelasan tiap baris kode
2. Compile & jalankan dulu, biar lihat hasilnya sendiri
3. Buka `kalkulator.cpp`, ketik ulang sendiri (jangan langsung pakai)
4. Kerjakan PR Level 1 -> 2 -> 3 -> 4 di README
5. Commit: `git add . && git commit -m "projek 01: kalkulator + PR level 1"`

## Perintah yang sering dipakai

```bash
# compile
g++ -std=c++17 kalkulator.cpp -o kalkulator

# compile dengan warning (ini yang lebih baik)
g++ -std=c++17 -Wall -Wextra kalkulator.cpp -o kalkulator

# jalankan
./kalkulator
```

Compiler: **g++ (GCC) 16.2.1**. Standar: **C++17**.

## Error yang sering ditemui

| Error | Artinya | Cara fix |
| --- | --- | --- |
| `expected ';' before '}' token` | Kurang titik koma | Cari baris di atas error |
| `'cout' was not declared` | `#include <iostream>` hilang | Tambahkan di baris paling atas |
| `undefined reference to 'main'` | Fungsi `main` tidak ada | Pastikan ada `int main()` |
| `used but undefined` | Variabel belum dideklarasi | Deklarasi dulu sebelum dipakai |
| Program freeze saat input | User ketik non-angka | `cin.clear()` + `cin.ignore()` (PR Level 2) |

## Tips penting

- **Baca error dari baris paling bawah.** Compiler menunjuk satu error pertama
  beserta nomor barisnya — itu yang harus dibenerin dulu, sisanya biasanya ikut hilang.
- **Compile setiap ~10 baris**, bukan setelah menulis 200 baris. Nyesal cari
  error di 200 baris itu mahal.
- **Selalu nyalakan warning** (`-Wall -Wextra`). Warning = "-Wall -Wextra".

## Rencana projek berikutnya

| # | Projek | Konsep baru |
| --- | --- | --- |
| 02 | Game tebak angka | `while`, angka acak |
| 03 | Kasir / daftar belanja | array, `vector`, struct |
| 04 | Manajemen kontak | file I/O, `map` |
| 05 | Projek bebas | struct, class, pemecahan kode sendiri |