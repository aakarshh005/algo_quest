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
    int left=0,right=0,c=v[left],m=1,max=0;
    while(left<n && right<n-1){
        if(c==s&&max<m)
        max=m;
        while(c<s){
            right++;
            m++;
            c+=v[right];
            if(c==s&&max<m)
            max=m;
            
        }
        while(c>=s){
        c-=v[left];
        left++;
        m--;
        if(c==s&&max<m)
        max=m;}
    }
    cout<<max;


    return 0;
}