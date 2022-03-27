#include <stdio.h>
#include<stdlib.h>
#define boyut 3
void DosyaYaz(FILE *fp){
	char s1[50];
	 char s2[50];
	  char s3[50];
	  int i;
	  if ( (fp = fopen("Tic-Tac-Toe.txt","w"))==NULL) {
        printf("Dosya açılamadı!");
        exit(1);
 }
 
 for(i=0;i<2;i++){
printf("s1 'i giriniz:");
scanf("%s",s1); 
printf("s2 'yi giriniz:");
scanf("%s",s2); 
printf("s3 'ü giriniz:");
scanf("%s",s3); 
fprintf(fp,"%s\t",s1);
fprintf(fp,"%s\t",s2);
fprintf(fp,"%s\t", s3);
 }
fclose(fp);
}
void DosyaOku(FILE *fp){
    char s1[50];
	 char s2[50];
	  char s3[50];
	  int i;
if ( (fp = fopen("Tic-Tac-Toe.txt","r"))==NULL) {
        printf("Dosya açılamadı!");
        exit(1);
    }
for(i=0;i<2;i++){
    fscanf(fp, "%s\t",s1);
    fscanf(fp, "%s\t",s2);
    fscanf(fp, "%s\t",s3);
    printf("Okunan %s %s %s",s1,s2,s3);
}
fclose(fp);
}
   
void oyunagiris();
int kontrolet();
int a[boyut][boyut] = {0};
int i;
int j;



void oyunagiris()
{
	struct degisken{

   int i, j;
};
struct degisken degeri;
 
  
   printf("oyuncu1(X)-oyuncu2(O)\n\n");
   for (i = 0; i < boyut; i++) {
      for (j = 0; j < boyut; j++)
         if (a[i][j] == 0)
            printf(" . ");
         else if (a[i][j] == 1)
            printf(" X ");
         else
            printf(" O ");
      putchar('\n');
   }
   
}

struct oyuncubilgisi
{
    char isim[30];
}oyuncu1, oyuncu2;


int kontrolet(void)
{
  


   int i;
   int j;
   int k;
   int t;
   int count;
  
   
   
    

                            
   }
  int main(){
      
  }