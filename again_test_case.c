#include<stdio.h>
main()
{
    int n,i,j,l,count=0,max;
    scanf("%d",&n);
    char leaf[100];
    scanf("%s",leaf);
    l=strlen(leaf);
    count=count+leaf[0];
    for(i=0;i<l;i++)
    {
        if(leaf[i]=='+')
        count=count+leaf[i+1];
        if(leaf[i]=='-')
        count=count-leaf[i+1];

    }
    max=count;
    for(i=0;i<n-1;i++)
    {
        count=0;
        scanf("%s",leaf);
        count=count+leaf[0];
        for(j=0;j<l;j++)
        {
            if(leaf[i]=='+')
            count=count+leaf[i+1];
            if(leaf=='-')
            count=count-leaf[i+1];
        }
        if(count>max)
        max=count;
    }
    printf("%d",count);
    }
