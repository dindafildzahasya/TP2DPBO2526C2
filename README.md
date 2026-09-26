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

Saya Adinda Fildzah Hasya dengan NIM 2501218 mengerjakan Tugas Praktikum 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

---

# 3. Deskripsi Program

Program **Sistem Bioskop** digunakan untuk menyimpan dan menampilkan informasi film yang sedang tayang di bioskop.

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
| `poster_film` | String (khusus PHP) | Nama file poster film |
| `id` | String | ID unik film, contoh `F001` |
| `judul` | String | Judul film |
| `genre` | String | Genre film |
| `durasi` | Integer | Durasi film dalam menit |

> `poster_film` hanya digunakan pada implementasi PHP sesuai instruksi tugas yang diharuskan menambahkan foto produk. 

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

# 9. Struktur Directory

```text
TP2/
│
├── CPP/
│   ├── Film.cpp
│   ├── FilmTayang.cpp
│   ├── JadwalTayang.cpp
│   ├── main.cpp
│   └── file.txt
│
├── JAVA/
│   ├── Film.java
│   ├── FilmTayang.java
│   ├── JadwalTayang.java
│   ├── Main.java
│   └── file.txt
│
├── PYTHON/
│   ├── Film.py
│   ├── FilmTayang.py
│   ├── JadwalTayang.py
│   ├── main.py
│   └── file.txt
│
├── PHP/
│   ├── Film.php
│   ├── FilmTayang.php
│   ├── JadwalTayang.php
│   ├── main.php
│   ├── style.css
│   ├── file.txt
│   └── images/
│       ├── Avatar.jpg
│       ├── Avengers.jpg
│       ├── Dilan.jpg
│       ├── Oppenheimer.jpg
│       ├── Inside.jpg
│       └── Godzilla.jpg
│
├── Diagram Desaign.jpg
│
└── README.md
```


---

# 10. Test Case

Setiap bahasa memiliki `file.txt` pada directory masing-masing yang berisi testcase setiap bahasa.

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

# 11. Dokumentasi Program

#### Python
- Proses tambah data.

  <img width="602" height="453" alt="Tambah_data" src="https://github.com/user-attachments/assets/8fdb7728-b1c1-49df-9745-20ae68196c83" />

- Tabel setelah data ditambahkan.
  <img width="1430" height="620" alt="Hasil" src="https://github.com/user-attachments/assets/9a2551f1-0a4c-4589-a132-68279b9e5872" />

- Tampilan awal tabel.
  <img width="1462" height="458" alt="Tampilan Awal" src="https://github.com/user-attachments/assets/3cf05603-7236-4ae7-ab11-39d68c558841" />

#### Java
- Proses tambah data.
  <img width="603" height="463" alt="Tambah_data" src="https://github.com/user-attachments/assets/dc1ae533-9b58-4f2c-aac2-018ad1f1e9ec" />
  
- Tabel setelah data ditambahkan.
  <img width="1367" height="447" alt="Hasil" src="https://github.com/user-attachments/assets/549f2144-651b-43a4-a53b-1dab271501b3" />
  
- Tampilan awal tabel.
  <img width="1367" height="512" alt="Tampilan Awal" src="https://github.com/user-attachments/assets/5824b1a8-1322-4c52-a77d-576646282dc2" />

#### C++
- Proses tambah data.
  <img width="696" height="530" alt="Tambah_data" src="https://github.com/user-attachments/assets/3fb735b6-3cee-4378-8ece-ecbdbbb6a9f6" />

- Tabel setelah data ditambahkan.
  <img width="1496" height="460" alt="Hasil" src="https://github.com/user-attachments/assets/60677c8e-abed-40c7-98e6-f3c86bc90e0b" />

- Tampilan awal tabel.
  <img width="1491" height="518" alt="Tampilan awal" src="https://github.com/user-attachments/assets/dd38ae30-af4d-4ff6-9492-ef2478f07e2b" />

#### PHP
- Tampilan website.
  <img width="1917" height="441" alt="Tampilan menu" src="https://github.com/user-attachments/assets/871dfd00-0a4f-4b75-be1a-d29aee9fff87" />

- Form tambah data.
  <img width="1920" height="1080" alt="Tambah Data" src="https://github.com/user-attachments/assets/f5f5f57d-7bc2-4613-9f52-a4b8202a88f3" />

- Tampilan awal tabel.
  <img width="1920" height="1080" alt="Tampilkan Film" src="https://github.com/user-attachments/assets/cd6eec57-db8a-4164-8e2c-e6e48f1cd296" />

- Tabel setelah penambahan film baru.
  <img width="1920" height="1080" alt="Hasil" src="https://github.com/user-attachments/assets/4f62035e-6488-432c-8958-f79b38cc709b" />

---
