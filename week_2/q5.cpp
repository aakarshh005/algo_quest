#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector <int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    map <int,int> m;
    for(int i=0;i<n;i++){
        m[nums[i]]++;
    }
    for(int i=0;i<m[0];i++){
        nums[i]=0;
    }
    for(int i=m[0];i<m[0]+m[1];i++){
        nums[i]=1;
    }
    for(int i=m[0]+m[1];i<n;i++){
        nums[i]=2;
    }
    for(int i=0;i<n;i++){
        cout<< nums[i]<< " ";
    }
    return 0;
}