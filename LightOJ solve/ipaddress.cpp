//#include <cstdio>
//#include <cstring>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c[5], d[5];
    char a[40], b[40];
    int t, Qt=1; scanf("%d", &t);
    while(t--)
    {
        //scanf("%s%s", a, b);
        cin >> a >> b;
        int indexc=0, sum=0;
        int lena=strlen(a);
        for(int i=0; i<=lena; i++)
        {
            if(a[i]=='.'||i==lena)
            {
                c[indexc++]=sum; sum=0;
            }
            else
                sum=sum*10+a[i]-'0';
        }

        int indexd=0, Q=1; sum=0;
        int lenb=strlen(b);
        for(int i=lenb-1; i>=-1; i--)
        {
            if(b[i]=='.'||i==-1)
            {
                d[indexd++]=sum;
                Q=1; sum=0;
            }
            else
            {
                sum=sum+(b[i]-'0') *Q;
                Q *=2;
            }
        }

        int i;
        for(i=0; i< 4; i++)
            if(c[i] != d[3-i])
                break;
        printf("Case %d: ", Qt++);

        if(i==4)
            printf("Yes\n");
        else
            printf("No\n");
    }
}

