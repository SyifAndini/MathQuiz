#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main(){
// Deklarasi variabel
int level, jumlah_soal, operator, jawaban_user, jawaban_benar, angka[7];
char start;
srand(time(NULL)); // Seed untuk random numbers
system("cls"); // Membersihkan layar

// Mencetak UI dari game matematika
printf("=================================================== \n");
printf("|                GAME MATEMATIKA                  | \n");
printf("=================================================== \n");
printf("\nGame ini dibuat untuk mengasah otak, bukan untuk orang emosian!! \n");
printf("Copyright to Syifa Putri Andini\n");
printf("\nApakah Anda siap untuk mengasah otak?? \n");
printf("[Y] YA! SIAP!! \n");
printf("[T] TIDAK! Saya ingin keluar dari game ini! \n");
printf("Jawaban Saya : ");
scanf("%c", &start);

while (start == 'Y' || start == 'y'){ 
    int soal_benar = 0, soal_salah = 0, points;
    printf("\nGame ini terdiri dari 3 level yaitu : \n");
    printf("(1) Level Mudah \n");
    printf("(2) Level Sedang \n");
    printf("(3) Level SULIT!!!! <Khusus pemberani!!> \n");
    printf("Jadi, Apa levelmu? \n");
    printf("Level Saya : ");
    scanf("%d", &level);

    // Jika level tidak ada, hentikan game
    if (level > 3){
    printf("Mohon pilih angka 1 - 3 saja!\n");
    break;
    }

    printf("\nBerapa jumlah soal yang ingin dikerjakan? \n");
    printf("Jumlah soal: ");
    scanf("%d", &jumlah_soal);
        for (int ulang = 1; ulang <= jumlah_soal;ulang++){
            printf("\nSoal nomor %d : \n", ulang);
            switch (level)
            {
            case 1: // Easy Mode
                angka[1] = rand() % 30;
                angka[2] = rand() % 30;
                operator = rand() % 2 ;
                switch (operator)
                {
                case 1: // Pertambahan
                    jawaban_benar = angka[1] + angka[2];
                    printf("%d + %d = ", angka[1], angka[2]);
                    scanf("%d",&jawaban_user);
                    break;

                default: // Pengurangan
                    jawaban_benar = angka[1] - angka[2];
                    printf("%d - %d = ", angka[1], angka[2]);
                    scanf("%d",&jawaban_user);
                    break;
                }
                break;

            case 2: // Medium Mode
                angka[1] = rand() % 50;
                angka[2] = rand() % 31 + 20;
                angka[3] = rand() % 11 + 40;
                angka[4] = rand() % 11 + 1;
                operator = rand() %  6 + 1;
                switch (operator)
                {
                case 1: // Pertambahan
                    jawaban_benar = angka[1] + angka[2] + angka[3] + angka[4];
                    printf("%d + %d + %d + %d = ", angka[1], angka[2], angka[3], angka[4]);
                    scanf("%d",&jawaban_user);
                    break;

                case 2: // Pengurangan
                    jawaban_benar = angka[1] - angka[2] - (angka[3] - angka[4]);
                    printf("%d - %d - (%d - %d) = ", angka[1], angka[2], angka[3], angka[4]);
                    scanf("%d",&jawaban_user);
                    break;

                case 3: // Perkalian
                    jawaban_benar = angka[4] * angka[2] * angka[3];
                    printf("%d x %d x %d = ", angka[4], angka[2], angka[3]);
                    scanf("%d",&jawaban_user);
                    break;

                case 4: // Pembagian
                    jawaban_benar = angka[1] / angka[4];
                    printf("%d : %d = ", angka[1], angka[4]);
                    scanf("%d",&jawaban_user);
                    break;
                
                default: // Campuran
                    jawaban_benar = (angka[1] - angka[2]) * angka[1] / angka[4] + angka[3];
                    printf("(%d - %d) x %d : %d + %d = ", angka[1], angka[2], angka[1], angka[4], angka[3]);
                    scanf("%d",&jawaban_user);
                    break;
                }
                break;

            default: // HARDCORE MODE!!
                angka[1] = rand() % 100;
                angka[2] = rand() % 71 + 20;
                angka[3] = rand() % 61 + 40;
                angka[4] = rand() % 50 + 1;
                angka[5] = rand() % 11 + 1;
                angka[6] = rand() % 11 + 1;
                operator = rand() %  6 + 1;
                switch (operator)
                {
                case 1: // Pertambahan
                    jawaban_benar = angka[1] + angka[2] + angka[3] + angka[4] + angka[5] + angka[6];
                    printf("%d + %d + %d + %d + %d + %d = ", angka[1], angka[2], angka[3], angka[4], angka[5], angka[6]);
                    scanf("%d",&jawaban_user);
                    break;

                case 2: // Pengurangan
                    jawaban_benar = angka[1] - angka[2] - (angka[3] - angka[4]) - (angka[1] - angka[6]);
                    printf("%d - %d - (%d - %d) - (%d - %d) = ", angka[1], angka[2], angka[3], angka[4], angka[1], angka[6]);
                    scanf("%d",&jawaban_user);
                    break;

                case 3: // Perkalian
                    jawaban_benar = angka[4] * angka[2] * angka[3] * angka[6];
                    printf("%d x %d x %d x %d = ", angka[4], angka[2], angka[3], angka[6]);
                    scanf("%d",&jawaban_user);
                    break;

                case 4: // Pembagian
                    jawaban_benar = angka[1] / angka[4];
                    printf("%d : %d = ", angka[1], angka[4]);
                    scanf("%d",&jawaban_user);
                    break;
                
                default: // Campuran
                    jawaban_benar = (angka[1] - angka[2]) * angka[1] / angka[4] + angka[3] * (angka[5] + angka[6]);
                    printf("(%d - %d) x %d : %d + %d x (%d + %d)= ", angka[1], angka[2], angka[1], angka[4], angka[3], angka[5], angka[6]);
                    scanf("%d",&jawaban_user);
                    break;
                }
                break;
            }
            if (jawaban_user == jawaban_benar){
                printf("\nKEREN! JAWABANMU BENAR!! \n");
                printf("Jawaban Anda  : %d \n", jawaban_user);
                printf("Jawaban Benar : %d \n", jawaban_benar);
                soal_benar++;
                }

            else{
                printf("\nYAH SALAH! Ayo yang fokus! \n");
                printf("Jawaban Anda  : %d \n", jawaban_user);
                printf("Jawaban Benar : %d \n", jawaban_benar);
                soal_salah++;
            }
        }
        // TAMPILAN LAPORAN PENGGUNA
        // Hitung point keseluruhan -> 10 point setiap soal benar, -5 untuk soal salah
        points = (soal_benar*10) + (soal_salah*-5);
        printf("\n================================================================\n");
        printf("|                      YEAY! GAME SELESAI!                     |\n");
        printf("================================================================\n");
        printf("Mari lihat hasilmu!\n");
        printf("Jumlah soal keseluruhan   : %d\n", jumlah_soal);
        printf("Jumlah soal dijawab benar : %d x 10 points    = %d\n", soal_benar, soal_benar*10);
        printf("Jumlah soal dijawab salah : %d x (-5) points  = %d\n", soal_salah, soal_salah*-5);
        printf("Total Point               : %d points\n", points);
        printf("================================================================\n");

        // Konfirmasi apakah pengguna ingin bermain lagi
        printf("\nSemua pertanyaan telah dijawab, apakah Anda ingin bermain lagi? \n");
        printf("[Y] YA! Saya ingin bermain lagi! \n");
        printf("[T] TIDAK! Saya ingin keluar dari game ini! \n");
        printf("Jawaban Saya : ");
        start = getche();
        printf("\n");
    }
printf("\nTerima kasih telah bermain di game ini! \n");
printf("Sampai jumpa! \n");
return 0;
}

/* Note untuk program : 
- Setelah menyelesaikan semua soal yang dipilih ada semacam laporan yang isinya :
    (Optional tapi menarik : Ada nama dan highscore)
   1. Jumlah soal yang dikerjakan (misalnya 10)
   2. Jumlah soal yang dijawab benar (misalnya 8)
   3. Jumlah soal yang dijawab salah (misalnya 2)
   4. Skor keseluruhan (10 untuk benar, -5 untuk salah)
      Jadi (8 x 10) + (2 x (-5)) = 80 - 10 = 70 
    */