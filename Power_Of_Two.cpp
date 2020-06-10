#include <iostream>

using namespace std;
bool powerOfTwo(long long n){
    return n!=0 && (n&(n-1))==0;
}
int main()
{
    long long n=-2147483648;
    cout<<powerOfTwo(n);
    cout<<n<<endl;
    while(n<0){
        n/=2;
        cout<<n<<endl;
    }
    return 0;
}
