#include <stdio.h>
int main()
{
    int num,realno,remainder,n=0;
    float result=0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);
    realno=num;

    while(realno!= 0)
    {
        realno/=10;
        ++n;
    }
     realno=num;

    while(realno!= 0)
    {
        remainder =realno % 10;
        result += pow(remainder, n);        //pow means power function i.e x^2.
        realno/=10;
    }

    if (result == num)
    {
        printf("\nNumber is Armstrong.\n");
    }
    else
    {
        printf("\nNumber is not Armstrong.\n");
    }

    return 0;
}
