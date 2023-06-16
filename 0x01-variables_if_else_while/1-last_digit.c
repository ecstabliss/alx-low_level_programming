#include <stdlib.h>
#include <time.h>
/*bettystyledocforfunctionmaingoesthere*/
/**
*main-Entrypointoftheprogram
*
*Return:Always0(Success)
*/
int main(void)
{
int n;
int lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;/*Generatearandomnumber*/
lastDigit = n % 10;
if (lastDigit > 5)
{
printf("Lastdigitof%dis%dandisgreaterthan5\n", n, lastDigit);
}
else if (lastDigit == 0)
{
printf("Lastdigitof%dis%dandis0\n", n, lastDigit);
}
else if (lastDigit < 6 && lastDigit != 0)
{
printf("Lastdigitof%dis%dandislessthan6andnot0\n", n, lastDigit);
}
return (0);
}

