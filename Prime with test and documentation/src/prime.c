#include "prime.h"

char *isprime(int n)
{
    if(n==1 || n==0)
    {
        return "False";

    }
    for(int i=2;i<n;i++)
    {

        if(n%i==0)
        {

            return "False";
        }
    }
    return "True";

}
