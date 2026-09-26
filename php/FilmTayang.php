<?php

// Memanggil parent class
require_once "Film.php";

// Membuat class FilmTayang
class FilmTayang extends Film{
    // Atribut tambahan
    private $namaBioskop;
    private $lokasi;
    private $ratingUsia;

    // Constructor FilmTayang
    public function __construct($poster_film, $id, $judul, $genre, $durasi, $namaBioskop, $lokasi, $ratingUsia){
        // Memanggil constructor parent Film
        parent::__construct($poster_film, $id, $judul, $genre, $durasi);

        // Mengisi atribut tambahan
        $this->namaBioskop = $namaBioskop;
        $this->lokasi = $lokasi;
        $this->ratingUsia = $ratingUsia;
    }

    // Getter nama bioskop
    public function getNamaBioskop(){
        return $this->namaBioskop;
    }
    // Setter nama bioskop
    public function setNamaBioskop($namaBioskop){
        $this->namaBioskop = $namaBioskop;
    }

    // Getter lokasi
    public function getLokasi(){
        return $this->lokasi;
    }
    // Setter lokasi
    public function setLokasi($lokasi){
        $this->lokasi = $lokasi;
    }

    // Getter rating usia
    public function getRatingUsia(){
        return $this->ratingUsia;
    }
    // Setter rating usia
    public function setRatingUsia($ratingUsia){
        $this->ratingUsia = $ratingUsia;
    }
}
?>
