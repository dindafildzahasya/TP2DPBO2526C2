# Mengimport class Film
from Film import Film
# FilmTayang mewarisi class Film
class FilmTayang(Film):
    # Constructor FilmTayang
    def __init__(self, id_film, judul, genre, durasi, nama_bioskop, lokasi, rating_usia):
        # Memanggil constructor dari parent class Film
        super().__init__(id_film, judul, genre, durasi)
        # Menyimpan nama bioskop
        self._nama_bioskop = nama_bioskop
        # Menyimpan lokasi bioskop
        self._lokasi = lokasi
        # Menyimpan rating usia film
        self._rating_usia = rating_usia

    # Mengambil nama bioskop
    def getNamaBioskop(self):
        return self._nama_bioskop
    # Mengubah nama bioskop
    def setNamaBioskop(self, nama_bioskop):
        self._nama_bioskop = nama_bioskop

    # Mengambil lokasi bioskop
    def getLokasi(self):
        return self._lokasi
    # Mengubah lokasi bioskop
    def setLokasi(self, lokasi):
        self._lokasi = lokasi

    # Mengambil rating usia
    def getRatingUsia(self):
        return self._rating_usia
    # Mengubah rating usia
    def setRatingUsia(self, rating_usia):
        self._rating_usia = rating_usia

    # Method menampilkan informasi film tayang
    def tampilkan_info(self):
        # Memanggil method dari parent class Film
        super().tampilkan_info()
        # Menampilkan data tambahan FilmTayang
        print("Bioskop     :", self._nama_bioskop)
        print("Lokasi      :", self._lokasi)
        print("Rating Usia :", self._rating_usia)
