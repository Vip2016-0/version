#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,t,c=0,r;
    float sum=0.0;
    printf("Enter a number\n");
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        t=t/10;
        c++;
    }
    t=n;
    printf("%d\n",c);
    while(t!=0)
    {
        r=t%10;
        sum+=pow(r,c);
        t=t/10;
    }
    if(sum==n)
        printf("Armstrong");
    else
        printf("Not");
}
