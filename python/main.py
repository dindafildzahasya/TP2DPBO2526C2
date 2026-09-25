# Mengimport class JadwalTayang
# Karena JadwalTayang merupakan class terakhir dalam inheritance
from JadwalTayang import JadwalTayang

# ====================================================
# FUNCTION MENAMPILKAN DATA DALAM BENTUK TABEL
# ====================================================
def tampilkan_data(daftarFilm, jumlahData):
    # Judul tabel
    print("\n================ DATA BIOSKOP ================\n")
    # Membuat garis tabel bagian atas
    garis = ("+--------+-------------------------+---------------+----------+-------------------------+---------------+----------+----------+------------+---------------+")
    print(garis)

    # Header tabel
    print(
        "| {:<6} | {:<23} | {:<13} | {:<8} | {:<23} | {:<13} | {:<8} | {:<8} | {:<10} | {:<13} |"
        .format(
            "ID",
            "Judul",
            "Genre",
            "Durasi",
            "Bioskop",
            "Lokasi",
            "Rating",
            "Studio",
            "Jam",
            "Harga"
        )
    )
    # Garis pemisah header
    print(garis)

    # Menampilkan seluruh data film
    for i in range(jumlahData):
        film = daftarFilm[i]
        print(
            "| {:<6} | {:<23} | {:<13} | {:<8} | {:<23} | {:<13} | {:<8} | {:<8} | {:<10} | {:<13} |"
            .format(
                film.getId(),
                film.getJudul(),
                film.getGenre(),
                film.getDurasi(),
                film.getNamaBioskop(),
                film.getLokasi(),
                film.getRatingUsia(),
                film.getNomorStudio(),
                film.getJamTayang(),
                film.getHargaTiket()
            )
        )
        # Garis setiap baris
        print(garis)

# Membuat list kosong untuk menyimpan semua objek film
daftar_film = []

# Objek film pertama
film1 = JadwalTayang("F001","Avatar 3", "Sci-Fi", 180, "CGV PVJ", "Bandung", "13+", 1, "19:00", 50000)
# Objek film kedua
film2 = JadwalTayang("F002", "Avengers Secret Wars", "Action", 160, "XXI Trans Studio", "Bandung", "13+", 2, "20:00", 75000)
# Objek film ketiga
film3 = JadwalTayang("F003", "Oppenheimer", "Drama", 180, "XXI Plaza Indonesia", "Jakarta", "17+", 3, "18:30", 60000)
# Objek film keempat
film4 = JadwalTayang("F004", "Inside Out 2", "Animation", 100, "Cinepolis", "Jakarta", "SU", 4, "15:00", 45000)
# Objek film kelima
film5 = JadwalTayang("F005", "Godzilla X Kong", "Action", 120, "CGV Grand Indonesia", "Jakarta", "13+", 5, "21:00", 80000)

# Memasukkan 5 objek awal ke dalam list
daftar_film.append(film1)
daftar_film.append(film2)
daftar_film.append(film3)
daftar_film.append(film4)
daftar_film.append(film5)

# Jumlah data awal
jumlahData = 5
# Variabel menu
menu = 0

# ====================================================
# MENU PROGRAM
# ====================================================
while menu != 3:
    print("\n================ SISTEM BIOSKOP ================")
    print("1. Tambah Data Film")
    print("2. Tampilkan Data Film")
    print("3. Keluar")
    menu = int(input("Pilih Menu : "))

    # ====================================================
    # MENU TAMBAH DATA
    # ====================================================
    if menu == 1:
        # Maksimal data 10 film
        if jumlahData >= 10:
            print("\nData film sudah penuh!")

        else:
            print("\n========== TAMBAH DATA FILM ==========")
            # Input ID film
            id_film = (input("ID Film          : "))
            # Input judul film
            judul = input("Judul Film       : ")
            # Input genre film
            genre = input("Genre            : ")
            # Input durasi film
            durasi = int(input("Durasi (menit)   : "))
            # Input nama bioskop
            nama_bioskop = input("Nama Bioskop     : ")
            # Input lokasi bioskop
            lokasi = input("Lokasi           : ")
            # Input rating usia
            rating = input("Rating Usia      : ")
            # Input nomor studio
            nomor_studio = int(input("Nomor Studio     : "))
            # Input jam tayang
            jam_tayang = input("Jam Tayang       : ")
            # Input harga tiket
            harga_tiket = int(input("Harga Tiket      : "))

            # Membuat objek baru berdasarkan input user
            film_baru = JadwalTayang(id_film, judul, genre, durasi, nama_bioskop, lokasi, rating, nomor_studio, jam_tayang, harga_tiket)

            # Menambahkan objek baru ke list
            daftar_film.append(film_baru)
            jumlahData += 1
            print("\nData berhasil ditambahkan!")
    # ====================================================
    # MENU TAMPIL DATA
    # ====================================================
    elif menu == 2:
        tampilkan_data(daftar_film, jumlahData)
    # ====================================================
    # MENU KELUAR
    # ====================================================
    elif menu == 3:
        print("\nProgram selesai...")
    # ====================================================
    # INPUT MENU SALAH
    # ====================================================
    else:
        print("\nMenu tidak tersedia!")