// Membuat class Film
public class Film {
    // Atribut private untuk menyimpan ID film
    private String id;
    // Atribut private untuk menyimpan judul film
    private String judul;
    // Atribut private untuk menyimpan genre film
    private String genre;
    // Atribut private untuk menyimpan durasi film
    private int durasi;

    // Constructor Film Digunakan untuk membuat objek Film
    public Film(String id, String judul, String genre, int durasi){
        // Mengisi nilai ID film
        this.id = id;
        // Mengisi nilai judul film
        this.judul = judul;
        // Mengisi nilai genre film
        this.genre = genre;
        // Mengisi nilai durasi film
        this.durasi = durasi;
    }

    // Getter untuk mengambil ID film
    public String getId(){
        return id;
    }
    // Setter untuk mengubah ID film
    public void setId(String id){
        this.id = id;
    }

    // Getter dan Setter Judul
    public String getJudul(){
        return judul;
    }
    public void setJudul(String judul){
        this.judul = judul;
    }

    // Getter dan Setter Genre
    public String getGenre(){
        return genre;
    }
    public void setGenre(String genre){
        this.genre = genre;
    }

    // Getter dan Setter Durasi
    public int getDurasi(){
        return durasi;
    }
    public void setDurasi(int durasi){
        this.durasi = durasi;
    }

    // Method menampilkan informasi film
    public void tampilkanInfo(){
        System.out.println("ID Film     : " + id);
        System.out.println("Judul       : " + judul);
        System.out.println("Genre       : " + genre);
        System.out.println("Durasi      : " + durasi + " menit");
    }
}
