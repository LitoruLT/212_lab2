#include<stdio.h>
void print(int word);
void main()
{
    unsigned long long int num;
    scanf("%llu",&num);
    unsigned long long int tmp=10,x=num,word,i=0,k=0;

    while(x)
    {
        word=x%tmp;
        x=x/tmp;
        i++;
    }
    unsigned long long int snum[i];
    x=num;
    while(x)
    {
        word=x%tmp;
        x=x/tmp;
        snum[k]=word;
        k++;
    }
    for( ; k>=0 ;)
    {
        print(snum[k]);
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
