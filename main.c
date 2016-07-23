#include <stdio.h>
#include <stdlib.h>
int collatz(int n, int k)
{   
    if(n==1)
    {
        return k;
    } 
    else if(n%2==0)
    {
        k = k+1;
        n = n/2;
        printf("%d\n", n);
        collatz(n,k);
    }
    else
    {
        k = k+1;
        n = 3*n+1;
        printf("%d\n", n);
        collatz(n,k);
    }
}

int main()
{
   
    int n;
    int c;
    int k=0;
    printf("PLEASE SELECT LANGUAGE \n 1-TURKCE \n 2-ENGLISH \n ");
    scanf("%d", &c);
    if (c==1){
    printf("1 den buyuk bir sayi giriniz \n");
    
     scanf("%d", &n);
    
    printf("%d\n", n);
    
    printf("Collatz Sanisi ispatlandi: %d iterasyon ile...\n", collatz(n,k));
    
	}
	else
	{
	printf("Enter an integer greater than 1: ");
	
    scanf("%d", &n);
    
    printf("%d\n", n);
    
    printf("Conjecture verified in %d iterations\n", collatz(n,k));
	}
    
    system("pause");	
    return 0;
}

