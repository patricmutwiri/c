#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mod;
    int x=18;
    int y=5;

    mod = x%y;

    printf("%d modulus %d is %d",x,y,mod);

    return 0;
}
