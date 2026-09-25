import java.util.Scanner;

public class Main {
    // ====================================================
    // FUNCTION MENAMPILKAN DATA DALAM TABEL
    // ====================================================
    public static void tampilkanData(JadwalTayang[] daftarFilm, int jumlahData){
        System.out.println("\n================ DATA BIOSKOP ================\n");

        // Garis tabel
        System.out.println("+--------+-------------------------+---------------+----------+-------------------------+---------------+----------+----------+------------+---------------+");

        // Header tabel
        System.out.printf(
            "| %-6s | %-23s | %-13s | %-8s | %-23s | %-13s | %-8s | %-8s | %-10s | %-13s |\n",
            "ID",
            "Judul",
            "Genre",
            "Durasi",
            "Bioskop",
            "Lokasi",
            "Rating",
            "Studio",
            "Jam",
            "Harga"
        );

        // Garis pemisah header
        System.out.println("+--------+-------------------------+---------------+----------+-------------------------+---------------+----------+----------+------------+---------------+");

        // Menampilkan data
        for(int i = 0; i < jumlahData; i++){
            System.out.printf(
                "| %-6s | %-23s | %-13s | %-8d | %-23s | %-13s | %-8s | %-8d | %-10s | %-13d |\n",
                daftarFilm[i].getId(),
                daftarFilm[i].getJudul(),
                daftarFilm[i].getGenre(),
                daftarFilm[i].getDurasi(),
                daftarFilm[i].getNamaBioskop(),
                daftarFilm[i].getLokasi(),
                daftarFilm[i].getRatingUsia(),
                daftarFilm[i].getNomorStudio(),
                daftarFilm[i].getJamTayang(),
                daftarFilm[i].getHargaTiket()
            );

            // Garis setiap baris
            System.out.println("+--------+-------------------------+---------------+----------+-------------------------+---------------+----------+----------+------------+---------------+");
        }
    }
    // ====================================================
    // MAIN PROGRAM
    // ====================================================
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        // Array maksimal 10 film
        JadwalTayang[] daftarFilm = new JadwalTayang[10];

        // ====================================================
        // 5 DATA AWAL
        // ====================================================
        daftarFilm[0] = new JadwalTayang(
            "F001",
            "Avatar 3",
            "Sci-Fi",
            180,
            "CGV PVJ",
            "Bandung",
            "13+",
            1,
            "19:00",
            50000
        );

        daftarFilm[1] = new JadwalTayang(
            "F002",
            "Avengers",
            "Action",
            160,
            "XXI Trans Studio",
            "Bandung",
            "13+",
            2,
            "20:00",
            75000
        );

        daftarFilm[2] = new JadwalTayang(
            "F003",
            "Oppenheimer",
            "Drama",
            180,
            "XXI Plaza",
            "Jakarta",
            "17+",
            3,
            "18:30",
            60000
        );

        daftarFilm[3] = new JadwalTayang(
            "F004",
            "Inside Out 2",
            "Animation",
            100,
            "Cinepolis",
            "Jakarta",
            "SU",
            4,
            "15:00",
            45000
        );

        daftarFilm[4] = new JadwalTayang(
            "F005",
            "Godzilla X Kong",
            "Action",
            120,
            "CGV GI",
            "Jakarta",
            "13+",
            5,
            "21:00",
            80000
        );

        int jumlahData = 5;
        int menu;

        // ====================================================
        // MENU PROGRAM
        // ====================================================
        do{
            System.out.println("\n================ SISTEM BIOSKOP ================");
            System.out.println("1. Tambah Data Film");
            System.out.println("2. Tampilkan Data Film");
            System.out.println("3. Keluar");
            System.out.print("Pilih Menu : ");
            menu = input.nextInt();
            input.nextLine();
            // ====================================================
            // TAMBAH DATA
            // ====================================================
            if(menu == 1){
                if(jumlahData >= 10){
                    System.out.println("Data film sudah penuh!");
                }
                else{
                    String id;
                    String judul;
                    String genre;
                    int durasi;
                    String bioskop;
                    String lokasi;
                    String rating;
                    int studio;
                    String jam;
                    int harga;

                    System.out.println("\n========== TAMBAH DATA FILM ==========");
                    System.out.print("ID Film       : ");
                    id = input.nextLine();

                    System.out.print("Judul Film    : ");
                    judul = input.nextLine();

                    System.out.print("Genre         : ");
                    genre = input.nextLine();

                    System.out.print("Durasi        : ");
                    durasi = input.nextInt();
                    input.nextLine();

                    System.out.print("Bioskop       : ");
                    bioskop = input.nextLine();

                    System.out.print("Lokasi        : ");
                    lokasi = input.nextLine();

                    System.out.print("Rating        : ");
                    rating = input.nextLine();

                    System.out.print("Studio        : ");
                    studio = input.nextInt();
                    input.nextLine();

                    System.out.print("Jam Tayang    : ");
                    jam = input.nextLine();

                    System.out.print("Harga Tiket   : ");
                    harga = input.nextInt();
                    input.nextLine();

                    daftarFilm[jumlahData] = new JadwalTayang(id, judul, genre, durasi, bioskop, lokasi, rating, studio, jam, harga);
                    jumlahData++;
                    System.out.println("\nData berhasil ditambahkan!");
                }
            }
            // ====================================================
            // TAMPIL DATA
            // ====================================================
            else if(menu == 2){
                tampilkanData(daftarFilm, jumlahData);
            }
            // ====================================================
            // KELUAR
            // ====================================================
            else if(menu == 3){
                System.out.println("\nProgram selesai...");
            }
            else{
                System.out.println("\nMenu tidak tersedia!");
            }
        }while(menu != 3);
        input.close();
    }
}