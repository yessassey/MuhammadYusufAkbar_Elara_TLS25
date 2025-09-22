Tugas Pemrograman 2 - TLS25
Nama: Muhammad Yusuf Akbar
Kelompok: ELARA

Penjabaran Soal dan Jawaban
1. Inverted Sequence
Soal:
Diberikan sebuah array bilangan bulat. Elemen dengan indeks genap harus dibalik digitnya secara matematis, sedangkan elemen dengan indeks ganjil tetap. Tanda negatif harus tetap dipertahankan, dan angka nol tetap ditampilkan sebagai nol. Setelah transformasi, jumlah seluruh elemen harus dihitung.
Jawaban:
Program membaca array dan memproses setiap elemen. Jika indeksnya genap, digit angka dibalik secara matematis tanpa menggunakan fungsi string. Tanda negatif tetap dipertahankan. Setelah semua elemen diproses, program menghitung jumlah total dari elemen-elemen hasil transformasi dan menampilkannya.
Contoh:

Input: [204, 18, -917, 500, 9]
Transformasi: [402, 18, -719, 500, 9]
Jumlah: 210


2. The Lost Password
Soal:
Mesin pembuat kata sandi bekerja satu arah. Mesin akan menghapus semua huruf vokal dari kata asli, membalikkan sisa huruf, dan menyisipkan kode ASCII dari huruf pertama kata asli di tengah hasil. Program juga harus bisa menganalisis kemungkinan kata asli dari sandi yang ditemukan.
Jawaban:
Program menerima kata asli, lalu menghapus semua huruf vokal dari kata tersebut. Sisa huruf dibalik secara manual tanpa menggunakan fungsi reverse. Setelah itu, kode ASCII dari huruf pertama kata asli dihitung dan disisipkan di tengah hasil pembalikan. Program menampilkan kata sandi yang dihasilkan.
Contoh:

Kata asli: banana
Proses: hapus vokal → bnn, balik → nnb, sisipkan ASCII 'b' (98) → nn98b

Jika diberikan sandi seperti nm71rG, program dapat menganalisis bahwa huruf pertama asli adalah 'G' (ASCII 71), dan kemungkinan kata aslinya adalah German, Gorman, atau kata lain yang cocok secara struktur.

3. Obey Traffic Lights
Soal:
Sistem APILL memiliki siklus lampu: Hijau selama 20 detik, Kuning selama 3 detik, dan Merah selama 80 detik. Siklus dimulai dari detik ke-45 dengan lampu kuning. Program harus menentukan warna lampu pada detik tertentu seperti 80, 135, 150, dan 212.
Jawaban:
Program menghitung offset waktu dari detik ke-45 dan menggunakan operasi modulus untuk menentukan posisi dalam siklus. Berdasarkan durasi masing-masing warna, program menentukan warna lampu yang aktif pada detik tertentu.
Contoh hasil:

Detik ke-80 → Merah
Detik ke-135 → Hijau
Detik ke-150 → Kuning
Detik ke-212 → Merah