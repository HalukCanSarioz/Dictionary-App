#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int ingilizceturkce();
int turkceingilizce();
int anamenu();
int main()
{
	setlocale(LC_ALL, "Turkish");
	FILE *t = fopen("turkce.txt", "w");
	FILE *i = fopen("ingilizce.txt", "w");
	if (t==NULL || i==NULL)
	{
	    printf("Dosya bulunamadi!\n");
	    exit(1);
	}
	fprintf(t, "almanya\n");fprintf(i, "germany\n");
	fprintf(t, "ananas\n");fprintf(i, "pineapple\n");
	fprintf(t, "araba\n");fprintf(i, "car\n");
	fprintf(t, "asansor\n");fprintf(i, "elevator\n");
	fprintf(t, "at\n");fprintf(i, "horse\n");
	fprintf(t, "bati\n");fprintf(i, "west\n");
	fprintf(t, "bebek\n");fprintf(i, "baby\n");
	fprintf(t, "beden\n");fprintf(i, "body\n");
	fprintf(t, "biyik\n");fprintf(i, "moustache\n");
	fprintf(t, "birinci\n");fprintf(i, "first\n");
	fprintf(t, "bitis\n");fprintf(i, "finish\n");
	fprintf(t, "canli\n");fprintf(i, "live\n");
	fprintf(t, "cehennem\n");fprintf(i, "hell\n");
	fprintf(t, "ceviz\n");fprintf(i, "walnut\n");
	fprintf(t, "dalis\n");fprintf(i, "diving\n");
	fprintf(t, "damar\n");fprintf(i, "vein\n");
	fprintf(t, "denge\n");fprintf(i, "balance\n");
	fprintf(t, "deniz\n");fprintf(i, "sea\n");
	fprintf(t, "deri\n");fprintf(i, "leather\n");
	fprintf(t, "efsane\n");fprintf(i, "legend\n");
	fprintf(t, "ejderha\n");fprintf(i, "dragon\n");
	fprintf(t, "el\n");fprintf(i, "hand\n");
	fprintf(t, "ender\n");fprintf(i, "rare\n");
	fprintf(t, "et\n");fprintf(i, "meat\n");
	fprintf(t, "fabrika\n");fprintf(i, "factory\n");
	fprintf(t, "fakir\n");fprintf(i, "poor\n");
	fprintf(t, "felaket\n");fprintf(i, "disaster\n");
	fprintf(t, "fikir\n");fprintf(i, "idea\n");
	fprintf(t, "gazete\n");fprintf(i, "newspaper\n");
	fprintf(t, "gelisim\n");fprintf(i, "development\n");
	fprintf(t, "gercek\n");fprintf(i, "real\n");
	fprintf(t, "guzel\n");fprintf(i, "beautiful\n");
	fprintf(t, "hafta\n");fprintf(i, "week\n");
	fprintf(t, "harita\n");fprintf(i, "map\n");
	fprintf(t, "hava\n");fprintf(i, "air\n");
	fprintf(t, "huzur\n");fprintf(i, "peace\n");
	fprintf(t, "ikiz\n");fprintf(i, "twin\n");
	fprintf(t, "insan\n");fprintf(i, "human\n");
	fprintf(t, "itiraz\n");fprintf(i, "objection\n");
	fprintf(t, "iyi\n");fprintf(i, "good\n");
	fprintf(t, "izin\n");fprintf(i, "permission\n");
	fprintf(t, "kan\n");fprintf(i, "blood\n");
	fprintf(t, "kemik\n");fprintf(i, "bone\n");
	fprintf(t, "Kiyi\n");fprintf(i, "coast\n");
	fprintf(t, "kus\n");fprintf(i, "bird\n");
	fprintf(t, "labirent\n");fprintf(i, "labyrinth\n");
	fprintf(t, "lamba\n");fprintf(i, "lamp\n");
	fprintf(t, "leke\n");fprintf(i, "taint\n");
	fprintf(t, "lig\n");fprintf(i, "league\n");
	fprintf(t, "macera\n");fprintf(i, "adventure\n");
	fprintf(t, "mavi\n");fprintf(i, "blue\n");
	fprintf(t, "melek\n");fprintf(i, "angel\n");
	fprintf(t, "mor\n");fprintf(i, "purple\n");
	fprintf(t, "nefes\n");fprintf(i, "breath\n");
	fprintf(t, "nesil\n");fprintf(i, "generation\n");
	fprintf(t, "nokta\n");fprintf(i, "point\n");
	fprintf(t, "numara\n");fprintf(i, "number\n");
	fprintf(t, "okul\n");fprintf(i, "school\n");
	fprintf(t, "onur\n");fprintf(i, "honour\n");
	fprintf(t, "orman\n");fprintf(i, "forest\n");
	fprintf(t, "ortak\n");fprintf(i, "partner\n");
	fprintf(t, "pamuk\n");fprintf(i, "cotton\n");
	fprintf(t, "parlak\n");fprintf(i, "bright\n");
	fprintf(t, "patron\n");fprintf(i, "boss\n");
	fprintf(t, "pil\n");fprintf(i, "battery\n");
	fprintf(t, "radyo\n");fprintf(i, "radio\n");
	fprintf(t, "reklam\n");fprintf(i, "advertisement\n");
	fprintf(t, "resim\n");fprintf(i, "painting\n");
	fprintf(t, "roman\n");fprintf(i, "novel\n");
	fprintf(t, "ruya\n");fprintf(i, "dream\n");
	fprintf(t, "saha\n");fprintf(i, "field\n");
	fprintf(t, "sakin\n");fprintf(i, "calm\n");
	fprintf(t, "sefil\n");fprintf(i, "miserable\n");
	fprintf(t, "sekiz\n");fprintf(i, "eight\n");
	fprintf(t, "ses\n");fprintf(i, "voice\n");
	fprintf(t, "son\n");fprintf(i, "end\n");
	fprintf(t, "sozluk\n");fprintf(i, "dictionary\n");
	fprintf(t, "su\n");fprintf(i, "water\n");
	fprintf(t, "takim\n");fprintf(i, "team\n");
	fprintf(t, "takvim\n");fprintf(i, "calendar\n");
	fprintf(t, "tarih\n");fprintf(i, "history\n");
	fprintf(t, "tedavi\n");fprintf(i, "cure\n");
	fprintf(t, "tercih\n");fprintf(i, "preference\n");
	fprintf(t, "toz\n");fprintf(i, "dust\n");
	fprintf(t, "ucuz\n");fprintf(i, "cheap\n");
	fprintf(t, "ucak\n");fprintf(i, "plane\n");
	fprintf(t, "ulasim\n");fprintf(i, "transportation\n");
	fprintf(t, "vatan\n");fprintf(i, "homeland\n");
	fprintf(t, "vergi\n");fprintf(i, "tax\n");
	fprintf(t, "veteriner\n");fprintf(i, "veterinarian\n");
	fprintf(t, "yabanci\n");fprintf(i, "stranger\n");
	fprintf(t, "yanici\n");fprintf(i, "burnable\n");
	fprintf(t, "yeralti\n");fprintf(i, "underground\n");
	fprintf(t, "yesil\n");fprintf(i, "green\n");
	fprintf(t, "yosun\n");fprintf(i, "moss\n");
	fprintf(t, "zafer\n");fprintf(i, "victory\n");
	fprintf(t, "zeka\n");fprintf(i, "intelligence\n");
	fprintf(t, "zihin\n");fprintf(i, "mind\n");
	fprintf(t, "zulum\n");fprintf(i, "persecution\n");
	fprintf(t, "zurafa\n");fprintf(i, "giraffe\n");
	fclose(t);
	fclose(i);
	anamenu();
}
int anamenu()
{
	int son;
	int secim=0;
	printf("|----------------------------|\n\n");
	printf("Sozluk Uygulamasi\n\n");
	printf("1 - Ingilizce'den Turkceye\n");
	printf("2 - Turkce'den Ingilizceye\n");
	printf("3 - Sozcukleri silme\n\n");
	printf("|----------------------------|\n\n");
	scanf("%d",&secim);
	printf("\n");
	switch(secim)
	{
		case 1:ingilizceturkce();anamenu();break;
		case 2:turkceingilizce();anamenu();break;
		case 3:son = remove("turkce.txt");
		remove("ingilizce.txt");
   		if(son == 0) 
   		{
      		printf("Sozcukler basariyla silindi !\n");
  	 	}
   		else 
   		{
      		printf("Sozcukler silinemedi !\n");
   		}
		break;
		default:printf("Lutfen listeden secim yapiniz! \n\n");main();break;
	}
}
int ingilizceturkce()
{
	FILE *t;
	FILE *i;
	char kelime[100];
	char satir[100];
	char tsatir[100];
	char *psatir = satir;
	char *ptsatir = tsatir;
	int sayac=0;
	int sayac2=0;
	int kontrol=0;
	printf("Lutfen aradýgýnýz kelimeyi giriniz :  ");
	scanf("%s",kelime);
	printf("\n");
	i = fopen("ingilizce.txt","r");	
	while ((fscanf(i, "%[^\n]", psatir)) != EOF )
	{
		if(strcasecmp(psatir,kelime) == 0)
   		{
   			kontrol=1;
   			break;
   		}
		sayac=sayac+1;
		fgetc(i);
	}
	if(kontrol==0)
	{
		printf("Boyle bir kelime bulunmamaktadir !\n\n");
		fclose(i);
	}
	else
	{	
		t = fopen("turkce.txt","r");
		while ((fscanf(t, "%[^\n]", ptsatir)) != EOF )
		{
			if(sayac2 == sayac)
			{
	   			printf("ingilizce.txt dosyasinda aradiginiz %s kelimesi %d. kelimedir.\n\n",kelime,sayac+1);
	   			printf("%s kelimesinin karsiligi %s kelimesidir.\n\n",kelime,ptsatir);
	   			break;
	   		}
			sayac2=sayac2+1;
			fgetc(t);
		}
		fclose(t);
		fclose(i);
	}
}
int turkceingilizce()
{
	FILE *t;
	FILE *i;
	char kelime[100];
	char satir[100];
	char isatir[100];
	char *psatir = satir;
	char *pisatir = isatir;
	int sayac=0;
	int sayac2=0;
	int kontrol=0;
	printf("Aradiginiz kelimeyi girin : ");
	scanf("%s",kelime);
	printf("\n");
	t = fopen("turkce.txt","r");
	while ((fscanf(t, "%[^\n]", psatir)) != EOF )
	{
	if(strcasecmp(psatir,kelime) == 0)
   		{
   			kontrol=1;
   			break;
   		}
		fgetc(t);
		sayac=sayac+1;
	}
	if(kontrol==0)
	{
		printf("Boyle bir kelime bulunmamaktadir !\n\n");
		fclose(t);	
	}
	else
	{
		i = fopen("ingilizce.txt","r");
		while ((fscanf(i, "%[^\n]", pisatir)) != EOF )
		{
			if(sayac2 == sayac)
			{
				printf("turkce.txt dosyasinda aradiginiz %s kelimesi %d. kelimedir.\n\n",kelime,sayac+1);
				printf("%s kelimesinin karsiligi %s kelimesidir.\n\n",kelime,pisatir);
   				break;
   			}
		sayac2=sayac2+1;
		fgetc(i);
		}
		fclose(t);
		fclose(i);
	}
}
