#include<stdio.h>
void main()
{

    int noOfLine;
    int x[50],a[50],b[50];
    int i,j,k,flag;
    scanf("%d",&noOfLine);
    for(i=0; i<noOfLine; i++)
    {
        scanf("%d",&x[i]);
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);

    }
    for(j=0; j<noOfLine; j++)
    {   flag=0;
        for(i=1; i<100&&flag==0; i++)
        {
            for(k=1; k<100&&flag==0; k++)
            {
                if(x[j]+a[j]*i==x[j]+b[j]*k){
                    flag=1;
                    printf("\nFound: %d",x[j]+b[j]*k);

                }
            }
        }
    }
}

