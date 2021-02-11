#include<stdio.h>

void main()
{
    char c;
    scanf("%c",&c);


    int num;
    scanf("%d",&num);

    int even;
    if(num%2==0)
        even=1;
    else
        even=0;

    if(num%5==0 && num%10!=0)
        printf("%c",92);

    switch(even)
    {
        case 1:
        if(c>= 65 && c<=73)
            printf("{@_@}");
        else if(c>= 74 && c<=82)
            printf("{*v*}");
        else if(c>= 83 && c<=90)
            printf("{x_x}");

        break;

        case 0:
        if(c>= 65 && c<=73)
            printf("(^_^)");
        else if(c>= 74 && c<=82)
            printf("(*o*)");
        else if(c>= 83 && c<=90)
            printf("(T_T)");
        break;

    }
    if(num%5==0 && num%10!=0)
        printf("/");



    //A=65
    //I=73

    //J=74
    //R=82

    //S=83
    //Z=90



}
