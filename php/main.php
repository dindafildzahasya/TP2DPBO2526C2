<?php

// Menghubungkan class JadwalTayang
require_once "JadwalTayang.php";

// menyimpan daftar film agar data tidak hilang
session_start();

function tampilkanData($daftarFilm, $jumlahData){
    echo "<h2>================ DATA BIOSKOP ================</h2>";
    echo "
    <table>
    <tr>
        <th>ID</th>
        <th>Judul</th>
        <th>Genre</th>
        <th>Durasi</th>
        <th>Bioskop</th>
        <th>Lokasi</th>
        <th>Rating</th>
        <th>Studio</th>
        <th>Jam</th>
        <th>Harga</th>
    </tr>";

    // Menampilkan data film
    for($i = 0; $i < $jumlahData; $i++){
        $film = $daftarFilm[$i];
        echo "
        <tr>
            <td>".$film->getId()."</td>
            <td>".$film->getJudul()."</td>
            <td>".$film->getGenre()."</td>
            <td>".$film->getDurasi()."</td>
            <td>".$film->getNamaBioskop()."</td>
            <td>".$film->getLokasi()."</td>
            <td>".$film->getRatingUsia()."</td>
            <td>".$film->getNomorStudio()."</td>
            <td>".$film->getJamTayang()."</td>
            <td>Rp ".$film->getHargaTiket()."</td>
        </tr>";
    }
    echo "</table>
    <br> 
    <form method = 'post'>
        <button name = 'menu' value = '0'>
        Kembali ke menu
        </button>
    </form>";
}

if(!isset($_SESSION['daftarFilm'])){
    $_SESSION['daftarFilm'] = [];

    // Objek film pertama
    $_SESSION['daftarFilm'][] = new JadwalTayang(
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

    // Objek film kedua
    $_SESSION['daftarFilm'][] = new JadwalTayang(
        "F002",
        "Avengers Secret Wars",
        "Action",
        160,
        "XXI Trans Studio",
        "Bandung",
        "13+",
        2,
        "20:00",
        75000
    );

    // Objek film ketiga
    $_SESSION['daftarFilm'][] = new JadwalTayang(
        "F003",
        "Oppenheimer",
        "Drama",
        180,
        "XXI Plaza Indonesia",
        "Jakarta",
        "17+",
        3,
        "18:30",
        60000
    );

    // Objek film keempat
    $_SESSION['daftarFilm'][] = new JadwalTayang(
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

    // Objek film kelima
    $_SESSION['daftarFilm'][] = new JadwalTayang(
        "F005",
        "Godzilla X Kong",
        "Action",
        120,
        "CGV Grand Indonesia",
        "Jakarta",
        "13+",
        5,
        "21:00",
        80000
    );
}
// Mengambil data dari session
$daftarFilm = $_SESSION['daftarFilm'];
// Menghitung jumlah data
$jumlahData = count($daftarFilm);

// ====================================================
// PROSES TAMBAH DATA
// ====================================================
if(isset($_POST['simpan'])){
    $filmBaru = new JadwalTayang(
        $_POST['id'],
        $_POST['judul'],
        $_POST['genre'],
        $_POST['durasi'],
        $_POST['bioskop'],
        $_POST['lokasi'],
        $_POST['rating'],
        $_POST['studio'],
        $_POST['jam'],
        $_POST['harga']
    );
    // Menambahkan objek baru ke session
    $_SESSION['daftarFilm'][] = $filmBaru;

    // Memperbarui data setelah penambahan
    $daftarFilm = $_SESSION['daftarFilm'];
    $jumlahData = count($daftarFilm);
    echo "
    <script>
    alert('Data berhasil ditambahkan!');
    window.location = 'main.php';
    </script>";
}

// ====================================================
// PROSES MENU
// ====================================================
$menu = 0;
if(isset($_POST['menu'])){
    $menu = $_POST['menu'];
}

?>
<!DOCTYPE html>
<html>
    <head>
        <link rel="stylesheet" href="style.css">
        <title>Bioskop Premium</title>
    </head>
<body>

<h2>SISTEM BIOSKOP PREMIUM</h2>
<form method = "post">
    <button name="menu" value="1">
        Tambah Data Film
    </button>

    <button name="menu" value="2">
        Tampilkan Data Film
    </button>

    <button name="menu" value="3">
        Keluar
    </button>
</form>
<?php

// ====================================================
// MENU PROGRAM
// ====================================================
if(isset($_POST['menu'])){
    $menu = $_POST['menu'];
    // ====================================================
    // TAMBAH DATA
    // ====================================================
    if($menu == 1){
        echo "
        <h3>========== TAMBAH DATA FILM ==========</h3>
        <form method='post'>
        
        ID Film : <input type='text' name='id'><br>
        Judul : <input type='text' name='judul'><br>
        Genre : <input type='text' name='genre'><br>
        Durasi : <input type='number' name='durasi'><br>
        Bioskop : <input type='text' name='bioskop'><br>
        Lokasi : <input type='text' name='lokasi'><br>
        Rating : <input type='text' name='rating'><br>
        Studio : <input type='number' name='studio'><br>
        Jam : <input type='text' name='jam'><br>
        Harga : <input type='number' name='harga'><br>
        
        <button name = 'simpan' value = '1'>
        Simpan Data
        </button>

        </form>";
    }

    // ====================================================
    // TAMPIL DATA
    // ====================================================
    elseif($menu == 2){
        $daftarFilm = $_SESSION['daftarFilm'];
        $jumlahData = count($daftarFilm);
        tampilkanData($daftarFilm, $jumlahData);
    }
    // ====================================================
    // KELUAR
    // ====================================================
    elseif($menu == 3){
        session_destroy();
        echo "<h3>Program selesai...</h3>";
        exit;
    }
}
?>

</body>
</html>