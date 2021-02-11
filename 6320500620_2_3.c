
#include<stdio.h>

void main()
{
    int n=3;
    int num[n],i,k;
    for(i=0;i<n;i++)
        scanf("%d ",&num[i]);
///////////////////////////
    char c[n];
    for(i=0;i<n;i++)
        scanf("%c",&c[i]);

///////////////////////////

    int save;
    for(k=0 ; k<=n ; k++)
    {
        for(i=0 ; i<n ; i++)
        {
            if(num[i]>num[i+1])
            {
                save=num[i];
                num[i]=num[i+1];
                num[i+1]=save;
            }
        }

    }


    for(i=0 ; i<n ; i++)
    {
        if(c[i]=='A')
        {
            printf("%d",num[0]);
        }
        else if(c[i]=='B')
        {
            printf("%d",num[1]);
        }
        else if(c[i]=='C')
        {
            printf("%d",num[2]);
        }

        if(i < n-1)
            printf(" ");
    }


}
