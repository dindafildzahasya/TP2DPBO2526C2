# Mengimport class FilmTayang
from FilmTayang import FilmTayang
# JadwalTayang mewarisi FilmTayang
class JadwalTayang(FilmTayang):
    # Constructor JadwalTayang
    def __init__(self, id_film, judul, genre, durasi, nama_bioskop, lokasi, rating_usia, nomor_studio, jam_tayang, harga_tiket):
        # Memanggil constructor FilmTayang
        super().__init__(id_film, judul, genre, durasi, nama_bioskop, lokasi, rating_usia)
        # Menyimpan nomor studio
        self._nomor_studio = nomor_studio
        # Menyimpan jam tayang
        self._jam_tayang = jam_tayang
        # Menyimpan harga tiket
        self._harga_tiket = harga_tiket

    # Mengambil nomor studio
    def getNomorStudio(self):
        return self._nomor_studio
    # Mengubah nomor studio
    def setNomorStudio(self, nomor_studio):
        self._nomor_studio = nomor_studio

    # Mengambil jam tayang
    def getJamTayang(self):
        return self._jam_tayang
    # Mengubah jam tayang
    def setJamTayang(self, jam_tayang):
        self._jam_tayang = jam_tayang

    # Mengambil harga tiket
    def getHargaTiket(self):
        return self._harga_tiket
    # Mengubah harga tiket
    def setHargaTiket(self, harga_tiket):
        self._harga_tiket = harga_tiket

    # Method menampilkan seluruh informasi
    def tampilkan_info(self):
        # Memanggil method dari FilmTayang
        super().tampilkan_info()
        # Menampilkan data jadwal
        print("Studio      :", self._nomor_studio)
        print("Jam Tayang  :", self._jam_tayang)
        print("Harga Tiket :", self._harga_tiket)
