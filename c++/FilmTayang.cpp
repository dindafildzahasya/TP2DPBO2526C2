#include "Film.cpp"

class FilmTayang : public Film {

private:
    // Nama bioskop
    string namaBioskop;
    // Lokasi bioskop
    string lokasi;
    // Rating usia
    string ratingUsia;

public:
        // Constructor kosong
    FilmTayang(): Film(){
        namaBioskop = "";
        lokasi = "";
        ratingUsia = "";
    }
    
    // Constructor FilmTayang
    FilmTayang(string id, string judul, string genre, int durasi, string namaBioskop, string lokasi, string ratingUsia):

    // Memanggil constructor Film
    Film(id, judul, genre, durasi){

        // Mengisi nama bioskop
        this->namaBioskop = namaBioskop;
        // Mengisi lokasi
        this->lokasi = lokasi;
        // Mengisi rating
        this->ratingUsia = ratingUsia;
    }

    // Getter nama bioskop
    string getNamaBioskop(){
        return namaBioskop;
    }
    // Setter nama bioskop
    void setNamaBioskop(string namaBioskop){
        this->namaBioskop = namaBioskop;
    }

    // Getter lokasi
    string getLokasi(){
        return lokasi;
    }
    // Setter lokasi
    void setLokasi(string lokasi){
        this->lokasi = lokasi;
    }

    // Getter rating
    string getRatingUsia(){
        return ratingUsia;
    }
    // Setter rating
    void setRatingUsia(string ratingUsia){
        this->ratingUsia = ratingUsia;
    }
};