
#include<stdio.h>

void main()
{
    int n=3;
    int num[n],i,k;
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
////////////////////////////////////////////

    char c[n],unc;

    fflush(stdin);
    //scanf("%c",&unc);

    for(i=0;i<n;i++)
        scanf("%c",&c[i]);

    //printf("%c",unc);
    //for(i=0 ; i<n ; i++)
    //{
    //    printf("\nc[%d] = %c\n",i,c[i]);
    //}



////////////////////////////////////////////
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


    //num[0]=A,num[1]=B,num[2]=C


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

        if(i < n)
            printf(" ");
    }


}
