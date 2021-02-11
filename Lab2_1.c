#include<stdio.h>

void main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    int tt=a+b+c;
    if(tt >= 80)
        printf("A");
    else if(tt <= 79 && tt >= 75)
        printf("B+");
    else if(tt <= 74 && tt >= 70)
        printf("B");
    else if(tt <= 69 && tt >= 65)
        printf("C+");
    else if(tt <= 64 && tt >= 60)
        printf("C");
    else if(tt <= 59 && tt >= 55)
        printf("D+");
    else if(tt <= 54 && tt >= 50)
        printf("D");
    else
        printf("F");
}

