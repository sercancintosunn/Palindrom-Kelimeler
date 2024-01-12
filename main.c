#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{

    printf("Kelimenin normal okunusu ile tersten okunusu ayni ise bu kelimelere palindrom kelime denir.\n");
    printf("Ornek kelime:kabak\n\n");

    char kelime[100];
    char palindrom[100];
    char *p;


    bas:
    printf("\nBir kelime girin:");
    scanf("%s", kelime);
    p = &kelime;

    int uzunluk = strlen(kelime);

    for(int i = 0; i <= uzunluk; ++i ){

        palindrom[i] = *(p+uzunluk-i-1);
        palindrom[uzunluk] = '\0';
   }




    if(strcmp(kelime,palindrom) == 0)
        printf("\n%s kelimesi bir palindrom kelimedir.\n", palindrom);
    else{
        printf("\nKelimenin tersi %s dir.\n");
        printf("%s kelimesi bir palindrom kelime degildir.\n", kelime);
    }

    goto bas;

    return 0;
}


