#include<stdio.h>
int main()
{
    int l,b,w,c,oa,ia,ta,cf;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    oa=(l+(2*w))*(b+(2*w));
    ia=l*b;
    ta=oa-ia;
    cf=(ta*c);
    printf("%d",cf);
    
}