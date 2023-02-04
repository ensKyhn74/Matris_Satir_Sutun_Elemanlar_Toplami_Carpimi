#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// matrisin her satırının ve sütununun elemanlarının ayrı ayrı toplamı ve çarpımı ekrana yazdırılır

int main() 

{
    
 int Matris[5][5];
 
 int i,j;
 
 srand(time(NULL));
 
 for(i = 0 ; i < 5 ; i++)
 {
   for(j = 0 ; j < 5 ; j++)  
   {
    Matris[i][j] = 1 + rand()%10; 
    
    printf("%d\t",Matris[i][j]);  
   }  
     
   printf("\n");  
 } 
  
 for(i = 0 ; i < 5 ; i++) 
 {
   int SatirToplam = 0;  
     
   int SutunToplam = 0; 
    
   int SatirCarpim = 1;
    
   int SutunCarpim = 1;
    
   for(j = 0 ; j < 5 ; j++) 
   { 
    SatirToplam = SatirToplam + Matris[i][j]; 
    
    SutunToplam = SutunToplam + Matris[j][i]; 
       
    SatirCarpim = SatirCarpim * Matris[i][j];
       
    SutunCarpim = SutunCarpim * Matris[j][i];                        
   }
  
   printf("\n%d.satirin toplami: %d\n",i+1,SatirToplam);  // matrisin her satırı için toplamı yazdırır.
   
   printf("\n%d.sutunun toplami: %d\n",i+1,SutunToplam);  // matrisin her sütunu için toplamı yazdırır.
  
   printf("\n%d.satirin carpimi: %d\n",i+1,SatirCarpim);  // matrisin her satırı için çarpımı yazdırır.
  
   printf("\n%d.sutunun carpimi: %d\n",i+1,SutunCarpim);  // matrisin her sütunu için çarpımı yazdırır.
 }
 
  return 0;
 
}