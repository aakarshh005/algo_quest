int Solution::kthsmallest(const vector<int> &v, int b) {
    int l=*min_element(v.begin(),v.end());
    int h=*max_element(v.begin(),v.end());
    int a=-1;
    
    while(l<=h){
        int mid=(l+h)/2;
        int c=0;
        for(auto i:v){
            if(i<=mid)
            c++;
        }
        if(c<b)
        l=mid+1;
        else{
            a=mid;
            h=mid-1;
        }
        }
        return a;
    }

