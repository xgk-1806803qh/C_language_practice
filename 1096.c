
#include<stdio.h>
int main()
{
  int n,i,m,a,s;
  scanf("%d",&n);
  while(n--){
    scanf("%d",&m);
    s=0;
    for(i=0;i<m;i++){
        scanf("%d",&a);
        s=s+a;
    }
    printf("%d\n",s);
    if(n>0){
        printf("\n");
    }
  }

}
