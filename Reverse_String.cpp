#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<char> str={'h','e','l','l','o'};
    int l=str.size();
    for(int i=0;i<l/2;i++){
        swap(str[i],str[l-1-i]);
    }
    for(int i=0;i<l;i++)
        cout<<str[i];
    return 0;
}
