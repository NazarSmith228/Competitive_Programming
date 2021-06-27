#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    a--;
    b--;
    int c[1001],d[1001];
    char e[1001];
    for(int i=0;i<1001;i++)
    {
        c[i]=100000;
        d[i]=100000;
    }
    for(int i=0;i<n;i++)
        cin>>e[i];
    c[a]=0;
int aa=a;
    a-=4;
    while(a>0 && e[a]=='1')
    {
        c[a]=c[a+4]+1;
        a-=4;
    }
    a=aa;
    a+=4;
    while(a<n && e[a]=='1')
    {
        c[a]=c[a-4]+1;
        a+=4;
    }

    int bb=b;
    b-=7;
    d[bb]=0;
    while(b>0 && e[b]=='1')
    {
        d[b]=d[b+7]+1;
        b-=7;
    }
    b=bb;
    b+=7;
    while(b<n && e[b]=='1')
    {
        d[b]=d[b-7]+1;
        b+=7;
    }
    int mini=100000;
    for(int i=0;i<n;i++) {
        mini = min(mini, c[i] + d[i]);
        //cout<<c[i]<<' '<<d[i]<<' '<<i<<endl;
    }
    if(mini==100000)
        cout<<-1;
    else
        cout<<mini;
    return 0;
}
