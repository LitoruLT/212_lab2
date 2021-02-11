
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


    int ans[n];
    for(i=0 ; i<n ; i++)
    {
        if(c[i]=='A')
        {
            ans[i]=num[0];
        }
        else if(c[i]=='B')
        {
            ans[i]=num[1];
        }
        else if(c[i]=='C')
        {
            ans[i]=num[2];
        }
    }
    printf("%d %d %d",ans[0],ans[1],ans[2]);



}
