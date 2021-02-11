#include<stdio.h>
void print(int word);
void main()
{
    unsigned long long int num;
    scanf("%llu",&num);
    unsigned long long int tmp=10,x=num,word;
    int i=0,k=0;

    while(x)
    {
        word=x%tmp;
        x=x/tmp;
        i++;
    }
    i=i-1;
    unsigned long long int snum[i];
    x=num;
    for( ; i>=0 ;)
    {
        word=x%tmp;
        x=x/tmp;
        snum[k]=word;
        i--;
        k++;
    }
    int sk=k;
    for( ; k>=0 ;)
    {
        print(snum[k]);
        if(k>0 && k<sk)
            printf("-");
        k=k-1;

    }



}
void print(int word)
{
    switch(word)
        {
        case 0:
            printf("Zero");
            break;
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        case 6:
            printf("Six");
            break;
        case 7:
            printf("Seven");
            break;
        case 8:
            printf("Eight");
            break;
        case 9:
            printf("Nine");
            break;
        }
}
