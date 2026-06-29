/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 5 - Foundation of Algorithm
 *   Hari dan Tanggal    : Senin, 29 Juli 2026
 *   Nama (NIM)          : Alkindi Bintang Akhsan (13224022)
 *   Nama File           : soal1.c
 *   Deskripsi           : Program menulis seluruh kombinasi kurung buka dan tutup yang valid
 * 
 */


#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

void validparentheses(int n, int pos, int open, int close);

void printparenthesis(int n)
{
   if (n>0)
      validparentheses(n, 0, 0, 0);
      return;
}

void validparentheses(int n, int pos, int open, int close){
   static char str[MAX_SIZE];
   if(close == n){
      printf("%s \n", str);
      return;
   }
   else{
      if(n > open){
         str[pos] = '(';
         validparentheses(n, pos+1, open+1, close);
      }
      if(open > close){
         str[pos] = ')';
         validparentheses(n, pos+1, open, close+1);
      }
   }
}

int catalan( int n){
   if(n == 0){
      return 1;
   }
   else{
      return(2*((2*n)-1))*(catalan(n-1))/(n+1);
   }
   
}

  
int main(void) {
   int n;
   int total;
   scanf("%d", &n);
   printparenthesis(n);
   getchar();
   total = catalan(n);
   printf("TOTAL %d", total);
   return 0;
}
 

 
