#include<iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin>>s;
    int l=s.length();
    int m=1,max=0;
    int left=0,right=0;
    if(l==1)
    max=m;
    while(right<l-1){
        right++;
        char c=s[right];
        while(s.substr(left,right-left).find(c)!= string::npos)
        {
            if(max<m)
            max=m;
            left++;
            m--;
            if(right-left==0)
            {
                m=0;
                break;
            }
        }
        m++;
        if(max<m)
        max=m;
    }
    cout<<max;


    return 0;
}