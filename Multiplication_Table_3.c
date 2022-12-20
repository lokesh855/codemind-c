#include<stdio.h>
int main()
{
    int n,b,c,i,a;
    scanf("%d%d%d",&n,&b,&c);
    for(i=b;i<=c;i++)
    {
        printf("%d x %d = %d
",n,i,a=(n*i));
    }
}