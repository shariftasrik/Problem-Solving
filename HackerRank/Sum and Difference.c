#include<stdio.h>

int main()
{
    int a,b,sm,df;
    float p,q,s,d;

    scanf("%d %d",&a,&b);
    scanf("%f %f",&p,&q);

    sm=(a+b);
    df=(a-b);

    s=(p+q);
    d=(p-q);

    printf("%d %d",sm,df);
    printf("\n");
    printf("%.1f %.1f",s,d);

    return 0;
}
