// extends berarti mewarisi class Film
public class FilmTayang extends Film {
    // Atribut tambahan nama bioskop
    private String namaBioskop;
    // Atribut tambahan lokasi bioskop
    private String lokasi;
    // Atribut tambahan rating usia
    private String ratingUsia;

    // Constructor FilmTayang
    public FilmTayang(String id, String judul, String genre, int durasi, String namaBioskop, String lokasi, String ratingUsia){
        // Memanggil constructor parent class Film
        super(id, judul, genre, durasi);

        // Mengisi atribut tambahan
        this.namaBioskop = namaBioskop;
        this.lokasi = lokasi;
        this.ratingUsia = ratingUsia;
    }

    // Getter Setter Nama Bioskop
    public String getNamaBioskop(){
        return namaBioskop;
    }
    public void setNamaBioskop(String namaBioskop){
        this.namaBioskop = namaBioskop;
    }

    // Getter Setter Lokasi
    public String getLokasi(){
        return lokasi;
    }
    public void setLokasi(String lokasi){
        this.lokasi = lokasi;
    }

    // Getter Setter Rating Usia
    public String getRatingUsia(){
        return ratingUsia;
    }
    public void setRatingUsia(String ratingUsia){
        this.ratingUsia = ratingUsia;
    }
}