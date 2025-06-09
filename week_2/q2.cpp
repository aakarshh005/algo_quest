#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main(){
    set <vector <int>> s;
    vector <vector <int>> v1;
    vector <int> v={-1,0,1,2,-1,-4};
    int l=v.size();
    sort(v.begin(),v.end());

    for(int i=0;i<l-2;i++)
    {
        int j=i+1;
        int k=l-1;
        while(j<k)
        {
            if(v[i]+v[j]+v[k]<0)
            j++;
            else if(v[i]+v[j]+v[k]>0)
            k--;
            else
            {
                s.insert({v[i],v[j],v[k]});
                j++;
                k--;
            }

        }
    }
    for(auto h: s)
    {
        v1.emplace_back(h);
    }
    for(auto i : v1){
        for(auto j:i)
        cout<<j<<" ";
        cout<<endl;
    }


    return 0;
}
