/***
1. asal say� 2
2. asal say� 3
3. asal say� 5
4. asal say� 7
5. asal say� 11
6. asal say� 13
7. asal say� 17
...
E�er bir asal say�n�n indeksi de (yani ka��nc� asal say� oldu�unu g�steren tamsay� da ) asal ise bu asal say� bir s�per asald�r.
�rne�in yukar�daki tabloda yer alan 3 (2 indeksli), 5 (3 indeksli), 11 (5 indeksli) ve 17 (7 indeksli) s�per asal say�lard�r.

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
