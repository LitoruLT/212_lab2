
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

    int max=num[0],min=num[0],mid=num[0];
    for(i=0 ; i<n ; i++)
    {
        if(max<=num[i])
            max=num[i];
        else if(min>=num[i])
            min=num[i];
    }
    for(i=0 ; i<n ; i++)
    {
        if(num[i]!=max && num[i]!=min)
            mid=num[i];
    }




    int ans[n];
    for(i=0 ; i<n ; i++)
    {
        if(c[i]=='A')
        {
            ans[i]=min;
        }
        else if(c[i]=='B')
        {
            ans[i]=mid;
        }
        else if(c[i]=='C')
        {
            ans[i]=max;
        }
    }
    printf("%d %d %d",ans[0],ans[1],ans[2]);



}
