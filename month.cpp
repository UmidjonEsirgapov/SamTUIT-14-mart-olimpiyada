#include<cstdio>
#include<cstring>
int k,i;
char s[50],c[12][50]={"January","February","March","April","May","June","July","August","September","October","November","December"};//?????????
bool check(char *a,char *b)
{
    if(strlen(a)-strlen(b))return 0;
    for(int i=0;a[i];i++)if(a[i]-b[i])return 0;
    return 1;
}
int main()
{
    scanf("%s%d",s,&k);
    for(;i<12;i++)if(check(s,c[i]))break;
    printf("%s",c[(i+k)%12]);
}
