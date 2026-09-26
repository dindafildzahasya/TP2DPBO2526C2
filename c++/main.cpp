#include <iostream>
#include <string>
#include <iomanip>

#include "JadwalTayang.cpp"

using namespace std;

    // ====================================================
    // MENAMPILKAN DATA DALAM BENTUK TABEL
    // ====================================================

void tampilkanData(JadwalTayang daftarFilm[], int jumlahData){
    // ====================================================
    // MENENTUKAN PANJANG MAKSIMAL SETIAP KOLOM
    // ====================================================

    int id = 2;
    int judul = 5;
    int genre = 5;
    int durasi = 6;
    int bioskop = 7;
    int lokasi = 6;
    int rating = 6;
    int studio = 6;
    int jam = 3;
    int harga = 5;

    for(int i = 0; i < jumlahData; i++){

        if(daftarFilm[i].getId().length() > id)
            id = daftarFilm[i].getId().length();

        if(daftarFilm[i].getJudul().length() > judul)
            judul = daftarFilm[i].getJudul().length();

        if(daftarFilm[i].getGenre().length() > genre)
            genre = daftarFilm[i].getGenre().length();

        if(to_string(daftarFilm[i].getDurasi()).length() > durasi)
            durasi = to_string(daftarFilm[i].getDurasi()).length();

        if(daftarFilm[i].getNamaBioskop().length() > bioskop)
            bioskop = daftarFilm[i].getNamaBioskop().length();

        if(daftarFilm[i].getLokasi().length() > lokasi)
            lokasi = daftarFilm[i].getLokasi().length();

        if(daftarFilm[i].getRatingUsia().length() > rating)
            rating = daftarFilm[i].getRatingUsia().length();

        if(to_string(daftarFilm[i].getNomorStudio()).length() > studio)
            studio = to_string(daftarFilm[i].getNomorStudio()).length();

        if(daftarFilm[i].getJamTayang().length() > jam)
            jam = daftarFilm[i].getJamTayang().length();

        if(to_string(daftarFilm[i].getHargaTiket()).length() > harga)
            harga = to_string(daftarFilm[i].getHargaTiket()).length();
    }

    // ====================================================
    // MEMBUAT GARIS TABEL
    // ====================================================
    string garis = "+";
    garis += string(id+2,'-') + "+";
    garis += string(judul+2,'-') + "+";
    garis += string(genre+2,'-') + "+";
    garis += string(durasi+2,'-') + "+";
    garis += string(bioskop+2,'-') + "+";
    garis += string(lokasi+2,'-') + "+";
    garis += string(rating+2,'-') + "+";
    garis += string(studio+2,'-') + "+";
    garis += string(jam+2,'-') + "+";
    garis += string(harga+2,'-') + "+";

    cout << "\n================ DATA BIOSKOP ================\n";
    cout << garis << endl;

    // HEADER
    cout 
    << "| " << left << setw(id) << "ID"
    << " | " << setw(judul) << "Judul"
    << " | " << setw(genre) << "Genre"
    << " | " << setw(durasi) << "Durasi"
    << " | " << setw(bioskop) << "Bioskop"
    << " | " << setw(lokasi) << "Lokasi"
    << " | " << setw(rating) << "Rating"
    << " | " << setw(studio) << "Studio"
    << " | " << setw(jam) << "Jam"
    << " | " << setw(harga) << "Harga"
    << " |"
    << endl;
    cout << garis << endl;

    // DATA
    for(int i=0;i<jumlahData;i++){
        cout
        << "| " << setw(id) << daftarFilm[i].getId()
        << " | " << setw(judul) << daftarFilm[i].getJudul()
        << " | " << setw(genre) << daftarFilm[i].getGenre()
        << " | " << setw(durasi) << daftarFilm[i].getDurasi()
        << " | " << setw(bioskop) << daftarFilm[i].getNamaBioskop()
        << " | " << setw(lokasi) << daftarFilm[i].getLokasi()
        << " | " << setw(rating) << daftarFilm[i].getRatingUsia()
        << " | " << setw(studio) << daftarFilm[i].getNomorStudio()
        << " | " << setw(jam) << daftarFilm[i].getJamTayang()
        << " | " << setw(harga) << daftarFilm[i].getHargaTiket()
        << " |"
        << endl;
    }
    cout << garis << endl;
}

int main(){
    // Array untuk menyimpan maksimal 10 film
    JadwalTayang daftarFilm[10] = {
        JadwalTayang("F001", "Avatar 3", "Sci-Fi", 180, "CGV PVJ", "Bandung", "13+", 1, "19:00", 50000),
        JadwalTayang("F002", "Avengers", "Action", 160, "XXI Trans Studio", "Bandung", "13+", 2, "20:00", 75000),
        JadwalTayang("F003", "Oppenheimer", "Drama", 180, "XXI Plaza", "Jakarta", "17+", 3, "18:30", 60000),
        JadwalTayang("F004", "Inside Out 2", "Animation", 100, "Cinepolis", "Jakarta", "SU", 4, "15:00", 45000),
        JadwalTayang("F005", "Godzilla X Kong", "Action", 120, "CGV GI", "Jakarta", "13+", 5, "21:00", 80000)
    };

    // Jumlah data awal
    int jumlahData = 5;
    int menu;

    // Perulangan menu
    do{
        cout << "\n================ SISTEM BIOSKOP ================\n";
        cout << "1. Tambah Data Film\n";
        cout << "2. Tampilkan Data Film\n";
        cout << "3. Keluar\n";
        cout << "Pilih Menu : ";
        cin >> menu;
        cin.ignore();

        // ====================================================
        // MENU TAMBAH DATA
        // ====================================================

        if(menu == 1){
            if(jumlahData >= 10){
                cout << "\nData film sudah penuh!\n";
            }else{
                string id;
                string judul;
                string genre;
                int durasi;
                string bioskop;
                string lokasi;
                string rating;
                int studio;
                string jam;
                int harga;

                cout << "\n========== TAMBAH DATA FILM ==========\n";
                cout << "\nID Film : ";
                cin >> id;
                cin.ignore();

                cout << "Judul : ";
                getline(cin, judul);

                cout << "Genre : ";
                getline(cin, genre);

                cout << "Durasi : ";
                cin >> durasi;
                cin.ignore();

                cout << "Bioskop : ";
                getline(cin, bioskop);

                cout << "Lokasi : ";
                getline(cin, lokasi);

                cout << "Rating : ";
                getline(cin, rating);

                cout << "Studio : ";
                cin >> studio;
                cin.ignore();

                cout << "Jam : ";
                getline(cin, jam);

                cout << "Harga : ";
                cin >> harga;

                // Menambahkan data baru
                daftarFilm[jumlahData] = JadwalTayang(id, judul, genre, durasi, bioskop, lokasi, rating, studio, jam, harga);
                jumlahData++;
                cout << "\nData berhasil ditambahkan!\n";
                }
            }
            // ====================================================
            // MENU TAMPIL DATA
            // ====================================================
            else if (menu == 2){
                tampilkanData(daftarFilm, jumlahData);
            }
            // ====================================================
            // MENU KELUAR
            // ====================================================
            else if(menu == 3){
                cout << "\nProgram selesai\n";
            }
            // ====================================================
            // INPUT SALAH
            // ====================================================
            else{
                cout << "\nMenu tidak tersedia!\n";
            }
        }while(menu != 3);

    return 0;
}
