#include <stdio.h>

int main(){
    int detik = 0, menit = 0 , jam = 0, hari = 0;
    int total_detik = 0, total_menit = 0, total_jam = 0;

    scanf("%d", &total_detik);

    detik = total_detik % 60;
    total_menit = total_detik / 60;

    menit = total_menit % 60;
    total_jam = total_menit / 60;

    jam = total_jam % 24;
    hari = total_jam / 24;


    if(hari){
        printf("%d hari %02d:%02d:%02d", hari, jam, menit, detik);
    } else{
        printf("%02d:%02d:%02d", jam, menit, detik);
    }
return 0;
}