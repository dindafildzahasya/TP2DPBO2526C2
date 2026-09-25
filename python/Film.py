class Film:
    # Constructor untuk membuat objek Film
    def __init__(self, id_film, judul, genre, durasi):
        # Atribut private menggunakan underscore
        self._id = id_film
        # Menyimpan judul film
        self._judul = judul
        # Menyimpan genre film
        self._genre = genre
        # Menyimpan durasi film dalam menit
        self._durasi = durasi

    # Getter dan Setter ID Film
    def getId(self):
        return self._id
    def setId(self, id_film):
        self._id = str(id_film)

    # Getter dan Setter Judul
    def getJudul(self):
        return self._judul
    def setJudul(self, judul):
        self._judul = judul

    # Getter dan Setter Genre
    def getGenre(self):
        return self._genre
    def setGenre(self, genre):
        self._genre = genre

    # Getter dan Setter Durasi
    def getDurasi(self):
        return self._durasi
    def setDurasi(self, durasi):
        self._durasi = durasi

    # Method untuk menampilkan informasi film
    def tampilkan_info(self):
        print(f"ID Film     : {self._id}\n" f"Judul       : {self._judul}\n" f"Genre       : {self._genre}\n" f"Durasi      : {self._durasi} menit"
        )
