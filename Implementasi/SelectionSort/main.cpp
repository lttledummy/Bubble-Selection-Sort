#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main() {

system ("color a");
int i, j, iMin;
int n, Urut;
int Tmp, code;
int Arr[100];
do {

printf("=====================================\n");
printf("| Pilihan Program Sorting |\n");
printf("=====================================\n");
printf("| 1. Selection Sorting (Menaik) |\n");
printf("| 2. Selection Sorting (Menurun) |\n");
printf("| 3. Keluar . . . |\n");
printf("=====================================\n\n");
printf("Masukan Pilihan Anda : ");
scanf("%d", &code);
switch (code) {

case 1 :
printf("\nInputkan banyak data yang akan diurutkan : ");
scanf("%i", &n);
Urut = 1;
for(i = 0; i < n; i++) {
printf("Masukan data ke %i : ", i + 1);
scanf("%i", &Arr[i]);
}
for(i = 0; i < n - 1; i++) {
iMin = i;
for(j = Urut; j < n; j++) {
if(Arr[j] < Arr[iMin]) {
iMin = j;
if(Arr[i] != Arr[iMin]) {
Tmp = Arr[i];
if(Arr[i] > Arr[iMin]) {
Arr[i] = Arr[iMin];
Arr[iMin] = Tmp;
}
}
}
}
Urut = Urut + 1;
}
printf("\nSetelah Pengurutan\n");
for(i = 0; i < n; i++) {
printf("Elemen ke %i : %i\n", i + 1, Arr[i]);
}
getch();
break;


case 2 :
printf("\nInputkan banyak data yang akan diurutkan : ");
scanf("%i", &n);
Urut = 1;
for(i = 0; i < n; i++) {
printf("Masukan data ke %i : ", i + 1);
scanf("%i", &Arr[i]);
}
for(i = 0; i < n - 1; i++) {
iMin = i;
for(j = Urut; j < n; j++) {
if(Arr[j] > Arr[iMin]) {
iMin = j;
if(Arr[i] != Arr[iMin]) {
Tmp = Arr[i];
if(Arr[i] < Arr[iMin]) {
Arr[i] = Arr[iMin];
Arr[iMin] = Tmp;
}
}
}
}
Urut = Urut + 1;
}
printf("\nSetelah Pengurutan\n");
for(i = 0; i < n; i++) {
printf("Elemen ke %i : %i\n", i + 1, Arr[i]);
}
getch();
break;


default : {
printf("\nSilahkan Tekan Enter Untuk Keluar . . . "); }}

} while(code >=1 && code <= 2);
getch();
}
