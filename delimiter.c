#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *j;
	int i,k=0,d=0,b=0;
	char* s=(char *)malloc(150 * sizeof(char));
	scanf("%[^\n]%*c",s);
    printf("The strings in the given sentence are:\n");
	for(i=0;i<strlen(s);i++)
	{
	    
	    if(*(s+i)!='_')
	    
	    {
	        
	        if(k==0)
	        {
	            printf("\"%c",*(s+i));
	        }
	        else
	        {
	            printf("%c",*(s+i));
	        }
	            b=b+1;
	            k=k+1;
	            if(k>1)
	        {
	            k=k-1;
	        }
	        
	   }
	    else
	    {
	        
	        d=d+1;
	        if(k==1)
	        {
	            printf("\"\n");
	            k=k-1;
	        }
	    }
	}
	if(k==1)
	{
	    printf("\"");
	}
	if(b==0 && d==strlen(s))
	{
	    printf("Oops, there are no strings in this sentence");
	}
	free(s);
	return 0;
}
	
