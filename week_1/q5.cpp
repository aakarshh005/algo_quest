#include <iostream>
#include <vector>
#include <algorithm>
#include <stack> 

using namespace std;

int main(){
    string s;
    cin>>s;
    int a=0;
    stack <char> ch;
    for(auto c: s)
    {
        if(c=='('||c=='{'||c=='[')
        {
            ch.push(c);
        }
        else
        {
            char top=ch.top();
            if((c==')'&& top!='(')||(c=='}'&& top!= '{')||(c==']'&& top!='['))
            {
                cout<<"false";
                a++;
                break;
            }
            ch.pop();
        }
    }
    if(a!=1)
    cout<<"true";


    return 0;
}