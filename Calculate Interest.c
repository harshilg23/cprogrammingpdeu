#include<stdio.h>
void main()
{
    float p,r,n,i;
    printf("Insert price:");
    scanf("%f",&p);
    printf("Insert rate:");
    scanf("%f",&r);
    printf("Insert time:");
    scanf("%f",&n);
    i=p*r*n/100;
    printf("Intrest: %f\n",i);
}
