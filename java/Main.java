import java.util.Scanner;

public class Main {
    // ====================================================
    // FUNCTION MENAMPILKAN DATA DALAM TABEL
    // ====================================================
    public static void tampilkanData(JadwalTayang[] daftarFilm, int jumlahData){

    // ====================================================
    // MENYIMPAN HEADER TABEL
    // ====================================================
    String[] header = {"ID","Judul", "Genre", "Durasi", "Bioskop", "Lokasi", "Rating", "Studio", "Jam", "Harga"
    };

    // ====================================================
    // MENGAMBIL DATA KE DALAM ARRAY STRING
    // ====================================================
    String[][] data = new String[jumlahData][10];
    for(int i = 0; i < jumlahData; i++){
        data[i][0] = daftarFilm[i].getId();
        data[i][1] = daftarFilm[i].getJudul();
        data[i][2] = daftarFilm[i].getGenre();
        data[i][3] = String.valueOf(daftarFilm[i].getDurasi());
        data[i][4] = daftarFilm[i].getNamaBioskop();
        data[i][5] = daftarFilm[i].getLokasi();
        data[i][6] = daftarFilm[i].getRatingUsia();
        data[i][7] = String.valueOf(daftarFilm[i].getNomorStudio());
        data[i][8] = daftarFilm[i].getJamTayang();
        data[i][9] = String.valueOf(daftarFilm[i].getHargaTiket());
    }

    // ====================================================
    // MENCARI PANJANG MAKSIMAL SETIAP KOLOM
    // ====================================================
    int[] panjangKolom = new int[10];
    // Panjang minimal berdasarkan header
    for(int i = 0; i < header.length; i++){
        panjangKolom[i] = header[i].length();
    }

    // Membandingkan dengan isi data
    for(int i = 0; i < jumlahData; i++){
        for(int j = 0; j < 10; j++){
            if(data[i][j].length() > panjangKolom[j]){
                panjangKolom[j] = data[i][j].length();
            }
        }
    }

    // ====================================================
    // MEMBUAT GARIS TABEL DINAMIS
    // ====================================================
    String garis = "+";
    for(int i = 0; i < 10; i++){
        garis += "-".repeat(panjangKolom[i] + 2);
        garis += "+";
    }

    System.out.println("\n================ DATA BIOSKOP ================\n");
    System.out.println(garis);

    // ====================================================
    // HEADER TABEL
    // ====================================================
    System.out.print("|");
    for(int i = 0; i < 10; i++){
        System.out.printf(" %-" + panjangKolom[i] + "s |", header[i]);
    }

    System.out.println();
    System.out.println(garis);

    // ====================================================
    // DATA TABEL
    // ====================================================
    for(int i = 0; i < jumlahData; i++){
        System.out.print("|");
        for(int j = 0; j < 10; j++){
            System.out.printf(" %-" + panjangKolom[j] + "s |", data[i][j]);
        }
        System.out.println();
    }

    // Garis bawah tabel
    System.out.println(garis);
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
