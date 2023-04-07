#include<bits/stdc++.h>

using namespace std;

double x, y, c;

double solve(double mid)
{
    double A = sqrt((x*x) - (mid*mid));
    double B = sqrt((y*y) - (mid*mid));

    return ((A*B)/(A+B));
}

int main()
{
    int test;
    scanf("%d", &test);
    for(int caseno = 1; caseno<=test; caseno++)
    {
        scanf("%lf %lf %lf", &x, &y, &c);
        double lo = 0.0, hi = min(x, y), mid;

        int cnt = 100;
        double ans = 1;
        while(cnt--)
        {
            mid = (lo + hi)/2.0;
            //cout<<solve(mid)<<endl;
            if(solve(mid)<=c)
            {
                hi = mid;
            }
            else
            {
                lo = mid;
            }
        }
        printf("Case %d: %0.10lf\n", caseno, lo);
    }
}
