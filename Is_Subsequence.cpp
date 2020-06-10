#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "acb", t = "ahbgdc";
    unsigned int i=0,j=0;
    bool res=true;
    while(i<s.length()){
        while(j<t.length()){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        res=!(i<s.length());
        break;
    }
    if(res)
        cout<<"String s is subsequence of String t"<<endl;
    else
        cout<<"String s is not the subsequence of String t"<<endl;
    return 0;
}
