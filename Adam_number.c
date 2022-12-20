#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a==0 || a==1 || a==2 || a==3 || a==11 || a==12 || a==13 || a==21 || a==22 || a==31 || a==101 || a==102 || a==103 || a==111 || a==112 || a==113
    || a==121 || a==122 || a==201 || a==202 || a==211 || a==212 || a==221 || a==301 || a==311)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}