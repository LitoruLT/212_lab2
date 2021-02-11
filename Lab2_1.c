#include<stdio.h>

void main()
{
    float a,b,c;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);

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
    else if(tt <= 49 && tt >= 0)
        printf("F");
}

