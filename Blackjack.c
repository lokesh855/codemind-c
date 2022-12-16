#include<stdio.h>
int main()
{
    int a,b,c,d;
    d=21;
    scanf("%d%d%d",&a,&b,&c);
    c=d-(a+b);
    if(c>=1 && c<=10)
    {
        printf("%d",c);
        }
        else
        {
            printf("-1");
            }
            }