#include <iostream>
using namespace std;
int main() {
    string s1,s2;
    cin>>s1>>s2;
    int counter=0;
    for (int i = 0; i < s1.size()-1; ++i) {
        if(s1[i]=='k'&&s1[i+1]=='u')
        {
            counter+=2;
            i+=1;

        } else
        {
            counter+=1;
            i+=2;
        }
    }
    for (int i = 0; i < s2.size()-1; ++i) {
        if(s2[i]=='k'&&s2[i+1]=='u')
        {
            counter+=2;
            i+=1;

        } else
        {
            counter+=1;
            i+=2;
        }
    }
    while(counter>0)
    {
        if(counter==1)
        {
            cout<<"kyu";
            break;
        }
        else
        {
            cout<<"ku";
            counter-=2;
        }
    }
    return 0;
}
