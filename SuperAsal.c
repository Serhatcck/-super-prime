/***
1. asal sayı 2
2. asal sayı 3
3. asal sayı 5
4. asal sayı 7
5. asal sayı 11
6. asal sayı 13
7. asal sayı 17
...
Eğer bir asal sayının indeksi de (yani kaçıncı asal sayı olduğunu gösteren tamsayı da ) asal ise bu asal sayı bir süper asaldır.
Örneğin yukarıdaki tabloda yer alan 3 (2 indeksli), 5 (3 indeksli), 11 (5 indeksli) ve 17 (7 indeksli) süper asal sayılardır.

***/


#include <stdio.h>

int asalmi(int sayi)
{
    if(sayi == 2)
    {
        return 0;
    }
    else if(sayi == 1)
    {
        return 1;
    }
    else
    {
        int i;
        for(i=2;i<sayi/2;i++)
        {
            if(sayi%i == 0)
            {
                return 1;
            }
        }
        return 0;
    }


}

int main()
{
    int indis = 1;
    int i;
    int indis_i;
    int i_i;
    for(i=1;i<1000;i++)
    {
        i_i = asalmi(i);
        if(i_i == 0)
        {
            indis_i=asalmi(indis);
            if(indis_i == 0)
            {
                printf("Indis: %d\tSayi:%d\n",indis,i);
            }
            indis++;


        }


    }
    system("pause");

}
