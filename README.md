# -super-prime
``` c

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
```
