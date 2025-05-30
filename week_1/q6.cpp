#include <iostream>
#include <vector>
#include <algorithm>
#include <stack> 

using namespace std;

int main(){
    string s;
    cin>>s;
    int a=0,m=0;
    stack <char> ch;
    for(auto c: s)
    {
        if(c=='('||c=='{'||c=='[')
        {
            ch.push(c);
        }
        else
        {
            if(ch.empty())
            continue;
            char top=ch.top();
            if((c==')'&& top!='(')||(c=='}'&& top!= '{')||(c==']'&& top!='['))
            {
                if(m<a)
                m=a;
                a=0;
            }
            else{
                a+=2;
                ch.pop();
            }
            
        }
    }
    if(m<a)
    m=a;
    cout<<m;

    return 0;
}