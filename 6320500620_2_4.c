#include<stdio.h>

void main()
{
    char pro;
    scanf("%c",&pro);
    float time,addt;
    scanf("%f",&time);
    float min=(int)time,sec=(time-(int)time)*100;
    //printf("min=%f ,sec=%f\n",min,sec);

    switch(pro)
    {
        case 'A':
            if(min>200.0)
                addt=min-200.0;
            printf("%.2f",(addt*3.0)+199.0+(sec/60*3.0) );
            break;

        case 'B':
            if(min>400.0)
                addt=min-400.0;
            printf("%.2f",(addt*2.0)+299.0+(sec/60*2.0) );
            break;
    }


}
