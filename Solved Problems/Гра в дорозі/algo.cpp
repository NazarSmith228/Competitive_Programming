#include <iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;
vector<double>a(100000,0);
int n;
double f(double m){
  double minpref=min(0.0,a[0]+m);
  double maxpref=max(0.0,a[0]+m);
  double pref=a[0]+m;
  double maxi=a[0]+m;
  for(int i=1;i<n;i++){
    pref+=a[i]+m;
    maxi=max(maxi,max(abs(pref-minpref),abs(pref-maxpref)));
  
    minpref=min(pref,minpref);
    maxpref=max(pref,maxpref);
 
  }
  return maxi;
}
int main() {

cin>>n;

for(int i=0;i<n;i++){
cin>>a[i];
}
double l=-10000000, r =1000000; 

for(int i=0;i<100;i++) {
   double m1 = l + (r - l) / 3.0,
      m2 = r - (r - l) / 3.0;

   if (f (m1) > f (m2))
      l = m1;
   else
      r = m2;

}
cout<<f(r);
}
