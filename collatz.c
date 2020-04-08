#include <stdio.h>

int collatz(int n);

int main(void){
    collatz(273);
}

int collatz(int n)
{

    if(n == 1 )
    {
        printf("1\n");
    }
    
    else if (n % 2 == 0)
    {
        printf("even\n");
        collatz(n/2);
    }
    else
    {
        printf("odd\n");
        collatz(n * 3 + 1);
    }
}

