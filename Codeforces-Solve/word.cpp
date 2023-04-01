#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    char s[100];
    gets(s);

    int upc=0,lwc=0,len=0;

    len=strlen(s);

    for(int i=0;i<len;i++)
    {
       if(s[i]>='a' && s[i]<='z') lwc++;
       else if (s[i]>='A' && s[i]<='Z') upc++;
    }
    for(int i=0;i<len;i++)
    {
        if(upc>lwc)
        {
            strupr(s);
        }
        else
        {
            strlwr(s);
        }
    }
    printf("%s",s);
}
