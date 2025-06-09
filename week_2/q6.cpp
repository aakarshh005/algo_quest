#include<iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    int l,n;
    cin>>l>>n;
    vector<int> v(l);
    for(int i=0;i<l;i++)
    {
        cin>>v[i];
    }
    int left=0,right=0,m=0;
    while(left<l){
        set <int> s;
        s.insert(v[left]);
        if(s.size()==n)
        m++;
        while(s.size()<=n)
        {
            if(right==l-1)
            break;
            right++;
            s.insert(v[right]);
            if(s.size()==n)
            m++;
        }
        left++;
        right=left;

    }
    cout<<m;
    return 0;
}