#include<stdio.h>
int main()
{
    int n,num1,num2,temp,i,b=0,s,m;
    scanf("%d",&n);
    while(n--)
    {
        b=0;
        scanf("%d%d",&num1,&num2);
        if(num1>num2)
        {
            temp=num1;
            num1=num2;
            num2=temp;
        }
        for(i=num1; i<=num2; i++)
        {
            s=0;
            for(m=1; m<=i; m++)
            {
                if(i%m==0)
                    s=s+m;
            }
            if(i == s)
                b++;
        }
        printf("%d\n",b);

    }
    return 0;
}





