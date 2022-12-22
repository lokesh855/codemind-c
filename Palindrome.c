#include<stdio.h>
int main()
{
    int i,a,r,b,ans=0;
    scanf("%d",&a);
    b=a;
    while(a!=0)
    {
        r=a%10;
        ans=ans*10+r; 
        a/=10;
        }
        if(b==ans)
        {
            printf("True");
            }
            else
            {
                printf("False");
                }
    
}