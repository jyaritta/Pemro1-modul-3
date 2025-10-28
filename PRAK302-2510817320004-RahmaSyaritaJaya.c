#include <stdio.h>

int main (){
int nilai;
char grade;

scanf("%d", &nilai);

int nilaiAkhir = nilai / 10;
switch(nilaiAkhir){
case 10:
case 9:
case 8:
grade = 'A';
break;

case 7:
grade = 'B';
break;

case 6:
grade = 'C';
break;

case 5:
grade = 'D';
break;

default:
grade = 'E';
break;
}

printf("%c", grade);
return 0;
}