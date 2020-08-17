/* c program to find whether the giver number is prime or not */
#include<stdio.h>
#include<math.h>
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
int main()
{

    int n;
    scanf("%d",&n);

    printf(isprime(n));
}
