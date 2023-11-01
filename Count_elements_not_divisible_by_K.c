#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int cnt=0;
    for(int i=0;i<a;i++)
    {
        if(arr[i]%b!=0)
        {
            cnt+=1;
        }
    }
    printf("%d",cnt);
}