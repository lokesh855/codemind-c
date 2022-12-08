#include<stdio.h>
int main()
{
    int s,t,b,d,e;
    scanf("%d%d%d",&s,&t,&b);
    d=2*s*t*b*512;
    e=d/1024;
    printf("%dkb",e);
    }