#include<stdio.h>
int main()
{
    int j=0,i;
    char word[200],check[200];
    scanf("%s",word);
        for(i=0;i<200;i++)
        {
            if(word[i]!=word[i+1])
            {
                check[j]=word[i];
                j++;
            }
        }
    printf("%s",check);
}
