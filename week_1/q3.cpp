#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long t;
    cin>>t;
    vector <long long> v(t);
    for(long long i=0;i<t;i++){
        long long n,pos=0,res=0;
        cin>>n;
        vector <long long> a(n),b(n);
        for(long long j=0;j<n;j++){
            cin>>a[j];
        }
         for(long long j=0;j<n;j++){
            cin>>b[j];
        }
       vector<pair<long long, long long>> rods(n);
        for (long long j = 0; j < n; j++) {
            rods[j] = {a[j], b[j]};
        }
        
        sort(rods.begin(), rods.end(), [](auto &x, auto &y) {
            return x.second * y.first < y.second * x.first;
        });

        for (long long j = 0; j < n; j++) {
            res += pos * rods[j].second;
            pos += rods[j].first;
        }
        v[i]=res;
    }
    for(long long i=0;i<t;i++)
    cout<<v[i]<<endl;

    return 0;
}