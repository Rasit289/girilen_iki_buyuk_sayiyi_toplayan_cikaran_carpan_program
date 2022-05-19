#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

//Raþit Karabýyýk


int intecevir(char a){
	int i;
	for (i = 48; i<=57; i++)
		if (toascii(i)==a) return i-48;
return 0;
}

void toplama(){
	
	char sayi1[80];
	char sayi2[80];
	int dizi1[80];
	int dizi2[80];

	int k,i,islem,j,c1,c2,cmin,cmax;
	int elde, toplam;

	printf("birinci sayiyi giriniz:");
	scanf("%s", &sayi1);
	printf("\nikinci sayiyi giriniz:");
	scanf("%s", &sayi2);
	
	c1 = strlen(sayi1);
	c2 = strlen(sayi2);
	
	cmax = c1;
	cmin=c2;
	if(c1<c2){
		cmax = c2;
		cmin =c1;
	}

	for(j=0; j < c1; j++){
		dizi1[j] = intecevir(sayi1[j]);
	}
	for(j=0; j < c2; j++){
		dizi2[j] = intecevir(sayi2[j]);
	}

	printf("  ");
	for(j=0; j < c1; j++){
			
		printf("   ");
		printf("%d",dizi1[j]);
	}
	printf(" \n  ");
	
	for(j=0; j < c2; j++){
			
		printf("   ");
		printf("%d",dizi2[j]);
	}
		printf(" \n  ");
		printf("   ---------");

	strrev(sayi1);
	strrev(sayi2);

	int sonuc[80];

	c1 = strlen(sayi1);
	c2 = strlen(sayi2);

	elde=0;
	for(i=0; i< cmax; i++){
		if(c1==c2 || (i < c1 && i < c2)){
			toplam = elde+intecevir(sayi1[i])+intecevir(sayi2[i]);
		}
		else if(i >=c1){
			toplam = elde+intecevir(sayi2[i]);
		}
		else if(i >=c2){
			toplam = elde+intecevir(sayi1[i]);
		}
		sonuc[i] = toplam%10;
		elde = toplam/10;
	}

	printf(" \n  ");

	for(j=0; j < i; j++){
		
		printf("   ");
		printf("%d", sonuc[i-j-1]);
	}

}

void cikarma(){
	
	char sayi1[80];
	char sayi2[80];
	int dizi1[80];
	int dizi2[80];

	int k,i,islem,j,c1,c2,cmin,cmax;
	int a,  fark;

	printf("birinci sayiyi giriniz:");
	scanf("%s", &sayi1);
	printf("\nikinci sayiyi giriniz:");
	scanf("%s", &sayi2);
	
	c1 = strlen(sayi1);
	c2 = strlen(sayi2);
	
	cmax = c1;
	cmin=c2;
	if(c1<c2){
		cmax = c2;
		cmin =c1;
	}
	
	for(j=0; j < c1; j++){
		dizi1[j] = intecevir(sayi1[j]);
	}
	for(j=0; j < c2; j++){
		dizi2[j] = intecevir(sayi2[j]);
	}

	printf("  ");
	for(j=0; j < c1; j++){
			
		printf("   ");
		printf("%d",dizi1[j]);
	}
	printf(" \n  ");
	
	for(j=0; j < c2; j++){
			
		printf("   ");
		printf("%d",dizi2[j]);
	}
		printf(" \n  ");
		printf("   ---------");

	strrev(sayi1);
	strrev(sayi2);
	
	int sonuc[80];
	
	c1 = strlen(sayi1);
	c2 = strlen(sayi2);

	a=0;

	for(i=0; i< cmax; i++){
		fark = intecevir(sayi1[i])-intecevir(sayi2[i])-a;
		if (fark < 0) {
			fark = fark + 10;
			a = 1;
		}
		else{
			
			a=0;	
		}
		sonuc[i] = fark%10;
			
		}

	printf(" \n  ");

	for(j=0; j < i; j++){
	
		printf("   ");
		printf("%d", sonuc[i-j-1]);
	}
}

void carpma(){
	
		int n, i, j, k, c, m, r, x, t, h, y;

        char sayi1[10002], sayi2[10002];
        int dizi1[80];
		int dizi2[80];
        int c1 = 0, c2 = 0, l;
      
    	printf("birinci sayiyi giriniz:");
		scanf("%s", &sayi1);
		printf("\nikinci sayiyi giriniz:");
		scanf("%s", &sayi2);
	
        for (j = 0; sayi1[j] != '\0'; j++)
            c1++;
        for (j = 0; sayi2[j] != '\0'; j++)
            c2++;
        l = 29999;

        int a[30002] = { 0 };
        for (j = c2 - 1; j >= 0; j--) {
            c = 0;
            x = l - 1;

            for (k = c1 - 1; k >= 0; k--) {
                h = (int)sayi2[j] - 48;
                y = (int)sayi1[k] - 48;
                r = (h * y) + c;  
                m = r % 10;
                r = r / 10; c = r;  
                a[x] = m + a[x];
                if (a[x] > 9) {
                    a[x] = a[x] % 10;
                    a[x - 1] = a[x - 1] + 1; 
                }
                x--;
            }
            l--;
            a[x] = a[x] + c;
        }
        
        	for(j=0; j < c1; j++){
		dizi1[j] = intecevir(sayi1[j]);
	}
	for(j=0; j < c2; j++){
		dizi2[j] = intecevir(sayi2[j]);
	}

	printf("  ");
	for(j=0; j < c1; j++){
			
		printf("   ");
		printf("%d",dizi1[j]);
	}
	printf(" \n  ");
	
	for(j=0; j < c2; j++){
			
		printf("   ");
		printf("%d",dizi2[j]);
	}
		printf(" \n  ");
		printf("   ");

         int flag = 0;
        for (k = 0; k <= 29998; k++) { 
            if (a[k] != 0) {
                printf("%d   ", a[k]);
                flag = 1;
            } else if (a[k] == 0 && flag == 1)
                printf("0  ");
        }
        if (flag == 0)
            printf("0  ");
        printf("\n");
    
}

int main()
{

	int islem;

	 printf("    ISLEM SECINIZ\n:");
        printf("    1 TOPLAMA\n:");
        printf("    2 CIKARMA\n:");
        printf("    3 CARPMA\n:");
		
	scanf("%d", &islem);

	if(islem==1){
	
		toplama();	
	
	}
	if(islem==2){
	
		cikarma();	
		
	}
	if(islem==3){
		
		carpma();	
	}
	
	return 0;
}
