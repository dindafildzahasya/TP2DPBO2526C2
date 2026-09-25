#include "FilmTayang.cpp"

class JadwalTayang : public FilmTayang {

private:
    // Nomor studio
    int nomorStudio;
    // Jam tayang
    string jamTayang;
    // Harga tiket
    int hargaTiket;

public:
    // Constructor kosong
    JadwalTayang(): FilmTayang(){
        nomorStudio = 0;
        jamTayang = "";
        hargaTiket = 0;
    }
    
    // Constructor JadwalTayang
    JadwalTayang(string id, string judul, string genre, int durasi, string namaBioskop, string lokasi, string ratingUsia, int nomorStudio, string jamTayang, int hargaTiket):

    // Memanggil constructor FilmTayang
    FilmTayang(id, judul, genre, durasi, namaBioskop, lokasi, ratingUsia){
        // Mengisi nomor studio
        this->nomorStudio = nomorStudio;
        // Mengisi jam tayang
        this->jamTayang = jamTayang;
        // Mengisi harga tiket
        this->hargaTiket = hargaTiket;
    }

    // Getter studio
    int getNomorStudio(){
        return nomorStudio;
    }
    // Setter studio
    void setNomorStudio(int nomorStudio){
        this->nomorStudio = nomorStudio;
    }

    // Getter jam tayang
    string getJamTayang(){
        return jamTayang;
    }
    // Setter jam tayang
    void setJamTayang(string jamTayang){
        this->jamTayang = jamTayang;
    }

    // Getter harga tiket
    int getHargaTiket(){
        return hargaTiket;
    }
    // Setter harga tiket
    void setHargaTiket(int hargaTiket){
        this->hargaTiket = hargaTiket;
    }
};