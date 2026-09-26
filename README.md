# TP2 OOP Multilevel Inheritance – Sistem Bioskop Premium

## 1. Identitas Program

**Tema:** Sistem Bioskop Premium  
**Konsep OOP:** Multilevel Inheritance  
**Bahasa Pemrograman:**
- Python
- Java
- C++
- PHP

### Hierarki Inheritance

```text
Film
  │
  ▼
FilmTayang
  │
  ▼
JadwalTayang
```

`FilmTayang` merupakan turunan dari `Film`, sedangkan `JadwalTayang` merupakan turunan dari `FilmTayang`. Dengan demikian, `JadwalTayang` mewarisi seluruh atribut dan method dari dua level class di atasnya.

---

# 2. Janji

Saya menyatakan bahwa program ini dibuat untuk memenuhi tugas praktikum OOP dan mengimplementasikan konsep **Multilevel Inheritance** pada tema Sistem Bioskop.

Program dikembangkan dengan struktur class yang konsisten pada Python, Java, C++, dan PHP. Setiap bahasa memiliki implementasi program utama, minimal lima objek awal, serta fitur penambahan data sesuai ketentuan tugas.

**Catatan:** Pernyataan ini merupakan format deklarasi untuk tugas dan dapat disesuaikan dengan ketentuan akademik yang berlaku.

---

# 3. Deskripsi Program

Program **Sistem Bioskop Premium** digunakan untuk menyimpan dan menampilkan informasi film yang sedang tayang di bioskop.

Program memiliki tiga class utama:

1. `Film`
2. `FilmTayang`
3. `JadwalTayang`

Informasi dari ketiga class digabungkan dan ditampilkan dalam **satu tabel lengkap**.

Program menyediakan:
- 5 objek awal sebelum input user.
- Input user untuk menambahkan data baru.
- Fitur menampilkan seluruh data.
- Fitur keluar program.
- Tabel yang menyesuaikan ukuran kolom dengan data pada Java, Python, dan C++.
- Tampilan poster film pada versi PHP.
- Encapsulation menggunakan atribut private dan getter/setter.

---

# 4. Design Diagram

## 4.1 Class Diagram

```text
┌─────────────────────────────┐
│            Film             │
├─────────────────────────────┤
│ - id                        │
│ - judul                     │
│ - genre                     │
│ - durasi                    │
│ - foto_produk (PHP)         │
├─────────────────────────────┤
│ + getId()                   │
│ + setId()                   │
│ + getJudul()                │
│ + setJudul()                │
│ + getGenre()                │
│ + setGenre()                │
│ + getDurasi()               │
│ + setDurasi()               │
│ + getFotoProduk() (PHP)     │
│ + setFotoProduk() (PHP)     │
│ + tampilkan_info() /        │
│   tampilkanInfo()           │
└──────────────▲──────────────┘
               │
               │ inheritance
               │
┌──────────────┴──────────────┐
│         FilmTayang          │
├─────────────────────────────┤
│ - namaBioskop                │
│ - lokasi                     │
│ - ratingUsia                 │
├─────────────────────────────┤
│ + getNamaBioskop()           │
│ + setNamaBioskop()           │
│ + getLokasi()                │
│ + setLokasi()                │
│ + getRatingUsia()            │
│ + setRatingUsia()            │
└──────────────▲──────────────┘
               │
               │ inheritance
               │
┌──────────────┴──────────────┐
│        JadwalTayang         │
├─────────────────────────────┤
│ - nomorStudio                │
│ - jamTayang                  │
│ - hargaTiket                 │
├─────────────────────────────┤
│ + getNomorStudio()           │
│ + setNomorStudio()           │
│ + getJamTayang()             │
│ + setJamTayang()             │
│ + getHargaTiket()            │
│ + setHargaTiket()            │
└─────────────────────────────┘
```

## 4.2 Hubungan Antar Class

### Film
Merupakan parent class yang menyimpan informasi dasar sebuah film.

### FilmTayang
Mewarisi class `Film` dan menambahkan informasi tentang bioskop tempat film ditayangkan.

### JadwalTayang
Mewarisi class `FilmTayang` dan menambahkan informasi jadwal pemutaran film.

---

# 5. Penjelasan Atribut

## 5.1 Class Film

| Atribut | Tipe Data | Keterangan |
|---|---|---|
| `id` | String | ID unik film, contoh `F001` |
| `judul` | String | Judul film |
| `genre` | String | Genre film |
| `durasi` | Integer | Durasi film dalam menit |
| `foto_produk` | String (khusus PHP) | Nama file poster film |

> `foto_produk` hanya digunakan pada implementasi PHP sesuai instruksi tugas. Dalam tema bioskop, atribut tersebut direpresentasikan sebagai **poster film**.

## 5.2 Class FilmTayang

| Atribut | Tipe Data | Keterangan |
|---|---|---|
| `namaBioskop` | String | Nama bioskop tempat film ditayangkan |
| `lokasi` | String | Lokasi bioskop |
| `ratingUsia` | String | Kategori usia film, misalnya `SU`, `13+`, `17+` |

## 5.3 Class JadwalTayang

| Atribut | Tipe Data | Keterangan |
|---|---|---|
| `nomorStudio` | Integer | Nomor studio |
| `jamTayang` | String | Waktu penayangan |
| `hargaTiket` | Integer | Harga tiket |

---

# 6. Penjelasan Methods

Karena atribut dibuat private, akses data dilakukan melalui getter dan setter.

## 6.1 Getter

Getter digunakan untuk mengambil nilai atribut.

Contoh:

```text
getId()
getJudul()
getGenre()
getDurasi()
```

Pada `FilmTayang`:

```text
getNamaBioskop()
getLokasi()
getRatingUsia()
```

Pada `JadwalTayang`:

```text
getNomorStudio()
getJamTayang()
getHargaTiket()
```

## 6.2 Setter

Setter digunakan untuk mengubah nilai atribut.

Contoh:

```text
setId()
setJudul()
setGenre()
setDurasi()
```

Pada `FilmTayang`:

```text
setNamaBioskop()
setLokasi()
setRatingUsia()
```

Pada `JadwalTayang`:

```text
setNomorStudio()
setJamTayang()
setHargaTiket()
```

## 6.3 Method Perilaku

Class `Film` memiliki method untuk menampilkan informasi film.

Implementasi nama method mengikuti gaya masing-masing bahasa:
- Python: `tampilkan_info()`
- Java: `tampilkanInfo()`
- C++: method tampilan dapat disesuaikan dengan implementasi.
- PHP: method getter digunakan pada tabel.

---

# 7. Konsep OOP yang Digunakan

## 7.1 Class

Program memiliki tiga class:

```text
Film
FilmTayang
JadwalTayang
```

## 7.2 Object

Sebelum input user, program membuat minimal lima objek:

```text
F001 - Avatar 3
F002 - Avengers Secret Wars / Avengers
F003 - Oppenheimer
F004 - Inside Out 2
F005 - Godzilla X Kong
```

## 7.3 Encapsulation

Atribut dibuat private.

Contoh:

```text
private id
private judul
private genre
private durasi
```

Data diakses melalui getter dan setter.

## 7.4 Multilevel Inheritance

Struktur inheritance:

```text
Film
  ↓
FilmTayang
  ↓
JadwalTayang
```

Contoh konsep Java:

```java
class FilmTayang extends Film
```

dan:

```java
class JadwalTayang extends FilmTayang
```

## 7.5 Constructor

Constructor digunakan untuk memberikan nilai awal pada object ketika object dibuat.

## 7.6 Dynamic Table

Data ditampilkan dalam satu tabel lengkap.

Pada Java, Python, dan C++ lebar kolom dihitung berdasarkan panjang header dan data terpanjang sehingga tabel menyesuaikan isi.

---

# 8. Fitur Program

## 8.1 Menu

Program menyediakan tiga pilihan utama:

```text
1. Tambah Data Film
2. Tampilkan Data Film
3. Keluar
```

## 8.2 Tambah Data

User dapat memasukkan:

```text
ID Film
Judul Film
Genre
Durasi
Nama Bioskop
Lokasi
Rating Usia
Nomor Studio
Jam Tayang
Harga Tiket
```

Khusus PHP ditambah:

```text
Poster Film
```

## 8.3 Tampilkan Data

Seluruh atribut dari tiga class ditampilkan dalam **satu tabel**.

## 8.4 Keluar

Program berhenti setelah user memilih menu keluar.

---

# 9. Lima Data Awal

| ID | Judul | Genre | Durasi | Bioskop | Lokasi | Rating | Studio | Jam | Harga |
|---|---|---|---:|---|---|---|---:|---|---:|
| F001 | Avatar 3 | Sci-Fi | 180 | CGV PVJ | Bandung | 13+ | 1 | 19:00 | Rp50000 |
| F002 | Avengers Secret Wars | Action | 160 | XXI Trans Studio | Bandung | 13+ | 2 | 20:00 | Rp75000 |
| F003 | Oppenheimer | Drama | 180 | XXI Plaza Indonesia | Jakarta | 17+ | 3 | 18:30 | Rp60000 |
| F004 | Inside Out 2 | Animation | 100 | Cinepolis | Jakarta | SU | 4 | 15:00 | Rp45000 |
| F005 | Godzilla X Kong | Action | 120 | CGV Grand Indonesia | Jakarta | 13+ | 5 | 21:00 | Rp80000 |

---

# 10. Struktur Directory

Struktur yang disarankan:

```text
TP2/
│
├── CPP/
│   ├── Film.cpp
│   ├── FilmTayang.cpp
│   ├── JadwalTayang.cpp
│   ├── main.cpp
│   └── testcase.txt
│
├── JAVA/
│   ├── Film.java
│   ├── FilmTayang.java
│   ├── JadwalTayang.java
│   ├── Main.java
│   └── testcase.txt
│
├── PYTHON/
│   ├── Film.py
│   ├── FilmTayang.py
│   ├── JadwalTayang.py
│   ├── main.py
│   └── testcase.txt
│
├── PHP/
│   ├── Film.php
│   ├── FilmTayang.php
│   ├── JadwalTayang.php
│   ├── main.php
│   ├── style.css
│   ├── testcase.txt
│   └── images/
│       ├── Avatar.jpg
│       ├── Avengers.jpg
│       ├── Oppenheimer.jpg
│       ├── Inside.jpg
│       └── Godzilla.jpg
│
├── design diagram/
│   └── diagram.png
│
└── README.md
```

> File object hasil kompilasi seperti `.o` pada C++ dan `.class` pada Java tidak perlu dimasukkan.

---

# 11. Test Case

Setiap bahasa memiliki `testcase.txt` pada directory masing-masing.

Contoh alur testcase:

```text
1
F006
Dilan.jpg / Dilan 1990 poster (PHP)
Dilan 1990
Romance
200
Cinepolis
Jakarta
17+
6
14:00
55000

2

3
```

Makna testcase:

```text
1 = Tambah data
Input seluruh data film
2 = Tampilkan seluruh data
3 = Keluar
```

Untuk PHP, field poster menggunakan nama file gambar yang tersedia di folder `images`.

---

# 12. Dokumentasi Program

Tambahkan screenshot hasil program pada folder dokumentasi agar README dapat menunjukkan proses penggunaan.

Struktur yang disarankan:

```text
docs/
│
├── 01-menu-python.png
├── 02-tambah-python.png
├── 03-tabel-python.png
│
├── 04-menu-java.png
├── 05-tambah-java.png
├── 06-tabel-java.png
│
├── 07-menu-cpp.png
├── 08-tambah-cpp.png
├── 09-tabel-cpp.png
│
├── 10-menu-php.png
├── 11-tambah-php.png
└── 12-tabel-php.png
```

### Dokumentasi yang perlu ditunjukkan

#### Python
- Tampilan menu.
- Proses tambah data.
- Tabel setelah data ditambahkan.
- Bukti tabel menyesuaikan panjang data.

#### Java
- Tampilan menu.
- Proses tambah data.
- Tabel dinamis.
- Bukti lima objek awal dan data tambahan.

#### C++
- Tampilan menu.
- Proses tambah data.
- Tabel dengan kolom dan baris.
- Bukti lima objek awal dan data tambahan.

#### PHP
- Tampilan website.
- Form tambah data.
- Tabel dengan poster film.
- Tabel setelah penambahan film baru.
- Tampilan tema black & gold.

> Screenshot aktual dapat ditambahkan ke folder `docs/` kemudian ditautkan di bagian ini.

---

# 13. Dokumentasi Tampilan PHP

PHP menggunakan tema:

**Black & Gold – Cinema Premium**

Karakteristik tampilan:
- Background gelap.
- Aksen warna emas.
- Tabel dengan border emas.
- Poster film pada kolom `Poster`.
- Tombol dengan gaya premium.
- Form input untuk menambahkan film.

Struktur poster:

```text
images/
├── Avatar.jpg
├── Avengers.jpg
├── Oppenheimer.jpg
├── Inside.jpg
└── Godzilla.jpg
```

Untuk film baru, poster dapat ditambahkan ke folder `images` dan nama file dimasukkan melalui form.

Contoh:

```text
Poster Film : Dilan.jpg
```

Kemudian file:

```text
images/Dilan.jpg
```

akan ditampilkan sebagai poster pada tabel.

---

# 14. Kesimpulan

Program **Sistem Bioskop Premium** menerapkan konsep OOP dengan tiga level class:

```text
Film
  ↓
FilmTayang
  ↓
JadwalTayang
```

Program telah dirancang untuk memenuhi ketentuan tugas:
- Memiliki 3 class.
- Menggunakan Multilevel Inheritance.
- Setiap class memiliki minimal 3 atribut.
- Memiliki minimal 5 object awal pada main.
- Dapat menerima input user untuk menambahkan data pada C++, Java, dan Python.
- PHP menyediakan implementasi interaktif berbasis website.
- Seluruh atribut ditampilkan dalam satu tabel.
- Tabel dibuat dinamis mengikuti panjang data.
- PHP memiliki atribut khusus `foto_produk` yang direpresentasikan sebagai poster film.
- Tersedia file testcase untuk masing-masing bahasa.
- Tersedia design diagram hubungan antar class.
- Dokumentasi program dapat dilengkapi dengan screenshot penggunaan setiap bahasa.
