#include <iostream>
#include <string>
#include <iomanip>

#include "JadwalTayang.cpp"

using namespace std;

    // ====================================================
    // MENAMPILKAN DATA DALAM BENTUK TABEL
    // ====================================================

void tampilkanData(JadwalTayang daftarFilm[], int jumlahData){

    cout << "\n================ DATA BIOSKOP ================\n\n";
    // Garis atas tabel
    cout << "+--------+-------------------------+---------------+----------+-------------------------+---------------+----------+----------+------------+---------------+" << endl;

    // Header
    cout 
    << "| "
    << left << setw(6) << "ID"
    << " | "
    << setw(23) << "Judul"
    << " | "
    << setw(13) << "Genre"
    << " | "
    << setw(8) << "Durasi"
    << " | "
    << setw(23) << "Bioskop"
    << " | "
    << setw(13) << "Lokasi"
    << " | "
    << setw(8) << "Rating"
    << " | "
    << setw(8) << "Studio"
    << " | "
    << setw(10) << "Jam"
    << " | "
    << setw(13) << "Harga"
    << " |"
    << endl;

    // Garis pemisah header
    cout << "+--------+-------------------------+---------------+----------+-------------------------+---------------+----------+----------+------------+---------------+" << endl;

    // Data
    for(int i = 0; i < jumlahData; i++){
        cout
        << "| "
        << left << setw(6) << daftarFilm[i].getId()
        << " | "
        << setw(23) << daftarFilm[i].getJudul()
        << " | "
        << setw(13) << daftarFilm[i].getGenre()
        << " | "
        << setw(8) << daftarFilm[i].getDurasi()
        << " | "
        << setw(23) << daftarFilm[i].getNamaBioskop()
        << " | "
        << setw(13) << daftarFilm[i].getLokasi()
        << " | "
        << setw(8) << daftarFilm[i].getRatingUsia()
        << " | "
        << setw(8) << daftarFilm[i].getNomorStudio()
        << " | "
        << setw(10) << daftarFilm[i].getJamTayang()
        << " | "
        << setw(13) << daftarFilm[i].getHargaTiket()
        << " |"
        << endl;

        // Garis setiap baris
        cout << "+--------+-------------------------+---------------+----------+-------------------------+---------------+----------+----------+------------+---------------+" << endl;
    }
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