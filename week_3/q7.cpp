int Solution::findCount(const vector<int> &a, int b) {
    int l=0,h=a.size()-1,lb=-1,ub=-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(a[mid]==b)
        {
          lb=mid;  
          h=mid-1;
            
        }
        else if(a[mid]>b)
        h=mid-1;
        else
        l=mid+1;
    }
    l=0,h=a.size()-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(a[mid]==b)
        {
          ub=mid;  
          l=mid+1;
            
        }
        else if(a[mid]>b)
        h=mid-1;
        else
        l=mid+1;
    }
    if(ub==lb && ub==-1)
    return 0;
    else
    return ub-lb+1;
}