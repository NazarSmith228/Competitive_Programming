#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){  
int n,x,y;  
cin>>n;
vector<vector<int> >a,b;
a.resize(n);
b.resize(n);
for(int i=0;i<n;i++){  
cin>>x>>y;  
a[i].push_back(x);  
a[i].push_back(y);  
b[i].resize(n);
}
for(int i=0;i<n;i++){  
    for(int j=0;j<n;j++){
        b[i][j]=0;
    }
}
int x1,x2,y1,y2;
vector<int>v(n,n);
for(int i=0;i<n;i++){  
    for(int j=0;j<n;j++){  
        x1=a[i][0]-a[j][0];
        y1=a[i][1]-a[j][1];
        for(int k=j+1;k<n;k++){  
            x2=a[i][0]-a[k][0];
            y2=a[i][1]-a[k][1];            
            if(x1*y2==x2*y1){
                if((x1*x2>0)||(y1*y2>0)){
                   if((b[i][k]==0)||(b[i][j]==0)){
                 v[i]--; 
                   }
                    b[i][k]=1;
                    b[i][j]=1;
                   
                }
            }
        }
    }
}
for(int i=0;i<n;i++){
 cout<<v[i]<<endl;   
}
}
