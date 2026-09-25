#include <iostream>
#include <string>

using namespace std;

// Membuat class Film
class Film {

private:
    // Menyimpan ID film
    string id;
    // Menyimpan judul film
    string judul;
    // Menyimpan genre film
    string genre;
    // Menyimpan durasi film
    int durasi;

public:
    // Constructor kosong
    Film(){
        id = "";
        judul = "";
        genre = "";
        durasi = 0;
    }
    
    // Constructor Film
    Film(string id, string judul, string genre, int durasi){
        // Mengisi ID film
        this->id = id;
        // Mengisi judul film
        this->judul = judul;
        // Mengisi genre film
        this->genre = genre;
        // Mengisi durasi film
        this->durasi = durasi;
    }

    // Getter ID
    string getId(){
        return id;
    }
    // Setter ID
    void setId(string id){
        this->id = id;
    }

    // Getter judul
    string getJudul(){
        return judul;
    }
    // Setter judul
    void setJudul(string judul){
        this->judul = judul;
    }

    // Getter genre
    string getGenre(){
        return genre;
    }
    // Setter genre
    void setGenre(string genre){
        this->genre = genre;
    }

    // Getter durasi
    int getDurasi(){
        return durasi;
    }
    // Setter durasi
    void setDurasi(int durasi){
        this->durasi = durasi;
    }
};
