#include <iostream>
#include <math.h>
#include <vector>
#include <iomanip>
#include <cstring>
using namespace std;
char str[10000000];
int prefix(char str[10000000]){
    int n = strlen(str);
    int prefixes[n];
    prefixes[0] = 0;
    int j;
    int temporary = 1;
    for(int i = 1; i < n; i++){
        j = prefixes[i-1];
        while(j > 0 && str[i] != str[j])
            j = prefixes[j-1];
        if(str[i] == str[j])j++;
        prefixes[i] = j;
        if(prefixes[i] <= prefixes[i-1])temporary = i+1;
    }
    if(prefixes[n-1] % temporary == 0) return temporary;
    else return n;

}
int main() {
    cin >> str;
    cout << prefix(str)<< endl;
    return 0;
}

