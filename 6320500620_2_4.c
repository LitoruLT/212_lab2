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
    {
        switch(even)
        {
            case 1:
            if(c>= 65 && c<=73)
                printf("%c{@_@}/",92);
            else if(c>= 74 && c<=82)
                printf("%c{*v*}/",92);
            else if(c>= 83 && c<=90)
                printf("%c{x_x}/",92);
            break;

            case 0:
            if(c>= 65 && c<=73)
                printf("%c(^_^)/",92);
            else if(c>= 74 && c<=82)
                printf("%c(*o*)/",92);
            else if(c>= 83 && c<=90)
                printf("%c(T_T)/",92);
            break;
        }
    }
    else
    {
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
    }
}
