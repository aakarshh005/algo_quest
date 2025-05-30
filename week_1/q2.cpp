#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (){

    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    int c=0,a=v[0],m=0;
    for(int i=0;i<n;i++){
        if(v[i]==a)
        c++;
        else{
            if(c>m)
            m=c;
            a=v[i];
            c=1;
        }
    }
    if(c>m)
    m=c;
    cout<<m;

    return 0;
}