<?php

require_once "FilmTayang.php";

// Membuat class JadwalTayang
class JadwalTayang extends FilmTayang{
    // Atribut tambahan
    private $nomorStudio;
    private $jamTayang;
    private $hargaTiket;

    // Constructor JadwalTayang
    public function __construct($id, $judul, $genre, $durasi, $namaBioskop, $lokasi, $ratingUsia, $nomorStudio, $jamTayang, $hargaTiket){
        // Memanggil constructor FilmTayang
        parent::__construct($id, $judul, $genre, $durasi, $namaBioskop, $lokasi, $ratingUsia);
        // Mengisi atribut tambahan
        $this->nomorStudio = $nomorStudio;
        $this->jamTayang = $jamTayang;
        $this->hargaTiket = $hargaTiket;
    }

    // Getter nomor studio
    public function getNomorStudio(){
        return $this->nomorStudio;
    }
    // Setter nomor studio
    public function setNomorStudio($nomorStudio){
        $this->nomorStudio = $nomorStudio;
    }

    // Getter jam tayang
    public function getJamTayang(){
        return $this->jamTayang;
    }
    // Setter jam tayang
    public function setJamTayang($jamTayang){
        $this->jamTayang = $jamTayang;
    }

    // Getter harga tiket
    public function getHargaTiket(){
        return $this->hargaTiket;
    }
    // Setter harga tiket
    public function setHargaTiket($hargaTiket){
        $this->hargaTiket = $hargaTiket;
    }
}
?>