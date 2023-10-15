#include <stdio.h>
int main()
{
    int year;
    scanf("%d", &year);
    for (;;)
    {
        year++;
        int hazar = year / 1000;
        int shotok = (year / 100) % 10;
        int doshok = (year / 10) % 10;
        int ekok = (year % 10);
        if (hazar != shotok && hazar != doshok && hazar != ekok && shotok != doshok && shotok != ekok && doshok != ekok)
        {
            break;
        }
    }
    printf("%d", year);
}
