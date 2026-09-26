<?php

// Membuat class Film
class Film{
    // Atribut private untuk poster film
    private $poster_film;
    // Atribut private untuk ID film
    private $id;
    // Atribut private untuk judul film
    private $judul;
    // Atribut private untuk genre film
    private $genre;
    // Atribut private untuk durasi film
    private $durasi;

    // Constructor Film
    public function __construct($poster_film, $id, $judul, $genre, $durasi){
        // Menyimpan poster film
        $this->poster_film = $poster_film;
        // Menyimpan ID film
        $this->id = $id;
        // Menyimpan judul film
        $this->judul = $judul;
        // Menyimpan genre film
        $this->genre = $genre;
        // Menyimpan durasi film
        $this->durasi = $durasi;
    }

    // Getter dan Setter poster film
    public function getPosterFilm(){
        return $this->poster_film;
    }
    public function setPosterFilm($poster_film){
        $this->poster_film = $poster_film;
    }

    // Getter ID film
    public function getId(){
        return $this->id;
    }
    // Setter ID film
    public function setId($id){
        $this->id = $id;
    }

    // Getter dan Setter Judul
    public function getJudul(){
        return $this->judul;
    }
    public function setJudul($judul){
        $this->judul = $judul;
    }

    // Getter dan Setter Genre
    public function getGenre(){
        return $this->genre;
    }
    public function setGenre($genre){
        $this->genre = $genre;
    }

    // Getter dan Setter Durasi
    public function getDurasi(){
        return $this->durasi;
    }
    public function setDurasi($durasi){
        $this->durasi = $durasi;
    }

    // Method menampilkan informasi film
    public function tampilkanInfo(){
        echo "ID Film : ".$this->id."<br>";
        echo "Judul : ".$this->judul."<br>";
        echo "Genre : ".$this->genre."<br>";
        echo "Durasi : ".$this->durasi." menit<br>";
    }
}
?>
