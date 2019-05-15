#include<stdio.h>
int main()
{
    int n,m,i,x,s=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&m);
        for(i=1; i<=m; i++)
        {
            scanf("%d",&x);
            s=x+s;
        }
        printf("%d\n",s);
        if(n>0)
        {
            printf("\n");

        }

    }
    return 0;
}
