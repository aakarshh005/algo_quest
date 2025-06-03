#include<iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    vector <string> vv(t);
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector <int> v(n);
        for(int j=0;j<n;j++){
            cin>>v[j];
        }
        vector<int> b(v);
        sort(b.begin(),b.end());
        map<int,int> ea,eb,oa,ob;
        for(int j=0;j<n;j++){
            if(j%2==0){
                ea[v[j]]++;
                eb[b[j]]++;
            }
            else{
                oa[v[j]]++;
                ob[b[j]]++;
            }
        }
        if(ea==eb&&oa==ob)
        vv[i]="YES";
        else
        vv[i]="NO";
        
    }
    for(int j=0;j<t;j++){
        cout<<vv[j]<<endl;
    }

    return 0;
}