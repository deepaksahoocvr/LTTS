#include<stdio.h>
#include<stdlib.h>
#include<prime.h>
#include "prime.h"
#include "test_prime.h"
int main()
{

    int n,d;
    scanf("%d",&n);
    d=isprime(n);
    if(d)
    {

        printf("True");

    }
    else{
        printf("False");
    }
    test_main();
    return 0;
}
