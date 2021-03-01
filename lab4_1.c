#include<stdio.h>
int main()
{
    int n,max=0,min=1000,p,p1;
    scanf("%d",&n);
    int num[n],num1[3],max1[n-2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&num1[j]);
        }
        num[i]=(num1[0]*4)+(num1[1]*2)+(num1[2]*1);
    }
    for(int i=0;i<n-2;i++)
    {
          max1[i]=num[i]+num[i+1]+num[i+2];
        if(max<max1[i])
        {
            max=max1[i];
            p=i+1;
        }
        if(min>max1[i])
        {
            min=max1[i];
            p1=i+1;
        }

    }
printf("%d %d",p,p1);
}
