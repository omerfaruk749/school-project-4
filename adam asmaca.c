#include <stdio.h>
#include <time.h>
#include <string.h>
main()
{
	int i,a,hak,j,b,k=0;
	srand(time(NULL));
	char dizi[10][20]={"armut","elma","bilgisayar","telefon","televizyon","tahta","araba","motor","lamba","kamyon"};
	char dizi1[10];
	char harf;
	a=rand()%10;
	hak=strlen(dizi[a]);
	for(i=0;i<hak;i++)
	{
		dizi1[i]='-';
		if(i==(hak-1))
		{
			dizi1[i+1]='\0';
		}
	}
     b=(hak*2);
	for(i=0;i<(hak*2);i++)
	{     
	    
		k=0; 
        for(j=0;j<hak;j++)
        {
        
        	if(dizi1[j]!='-')
			{
				k++;
			}
		}
		if(hak==k)
		{
			break;
		}
		printf("Harf Giriniz Kalan Hakkiniz=%d\n",b);
		scanf(" %c",&harf);
		for(j=0;j<hak;j++)
		{
			if(dizi[a][j]==harf)
			{
				
				dizi1[j]=harf;
			}
			
		}
			
		
			b--;
		
		printf("%s\n",dizi1);
	}	
	printf("kalan hakkiniz %d\n",b);
	printf("sonuc=%s",dizi1);
	
}

