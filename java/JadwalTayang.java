// Membuat class JadwalTayang
public class JadwalTayang extends FilmTayang {
    // Nomor studio tempat film diputar
    private int nomorStudio;
    // Jam tayang film
    private String jamTayang;
    // Harga tiket film
    private int hargaTiket;

    // Constructor JadwalTayang
    public JadwalTayang(String id, String judul, String genre, int durasi, String namaBioskop, String lokasi, String ratingUsia, int nomorStudio, String jamTayang, int hargaTiket){
        // Memanggil constructor FilmTayang
        super(id, judul, genre, durasi, namaBioskop, lokasi, ratingUsia);
        // Mengisi atribut tambahan
        this.nomorStudio = nomorStudio;
        this.jamTayang = jamTayang;
        this.hargaTiket = hargaTiket;
    }

    // Getter Setter Nomor Studio
    public int getNomorStudio(){
        return nomorStudio;
    }
    public void setNomorStudio(int nomorStudio){
        this.nomorStudio = nomorStudio;
    }

    // Getter Setter Jam Tayang
    public String getJamTayang(){
        return jamTayang;
    }
    public void setJamTayang(String jamTayang){
        this.jamTayang = jamTayang;
    }

    // Getter Setter Harga Tiket
    public int getHargaTiket(){
        return hargaTiket;
    }
    public void setHargaTiket(int hargaTiket){
        this.hargaTiket = hargaTiket;
    }
}