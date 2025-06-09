#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,s;
    cin>>n>>s;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int left=0,right=0,c=v[left],m=0;
    while(left<n){
        if(c<s)
        m++;
        if(left==n-1)
        break;
        while(c<s){
            if(right==n-1)
            break;
            right++;
            c+=v[right];
            if(c<s)
            m++;
            
        }
        left++;
        c=v[left];
        right=left;
    }
    cout<<m;


    return 0;
}