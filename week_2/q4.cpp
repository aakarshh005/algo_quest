#include<iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    string s,p;
    cin>>s>>p;
    vector <int> v;
    int l=s.length();
    int n=p.length();
    int left=0;
    map <char,int> m;
    for(int i=0;i<n;i++){
        m[p[i]]++;
    }
    while(left<l-n+1)
    {
        string st=s.substr(left,n);
        map <char,int> m2;
        for(int i=0;i<n;i++){
        m2[st[i]]++;
    }
    if(m==m2)
    v.push_back(left);
    left++;
    }
    int len=v.size();
    for(int i=0;i<len;i++)
    cout << v[i]<< " ";
}