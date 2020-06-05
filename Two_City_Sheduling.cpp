#include <bits/stdc++.h>

using namespace std;

bool compare(vector<int> a,vector<int> b){
    return abs(a[0]-a[1])>abs(b[0]-b[1]);
}

void display(vector<vector<int>>vect){
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cout<<vect[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main()
{
    vector<vector<int>> vect={{10,20},{30,200},{400,50},{30,20}};

    sort(vect.begin(),vect.end(),compare);

    int n=vect.size()/2;
    int countA=0;int countB=0;
    int ind=0;
    int res=0;
    while(countA<n&&countB<n){
        if(vect[ind][0]<vect[ind][1]){
            res+=vect[ind][0];
            ind++;
            countA++;
        }
        else{
            res+=vect[ind][1];
            ind++;
            countB++;
        }
    }
    while(countA<n){
        res+=vect[ind][0];
        ind++;
        countA++;
    }
    while(countB<n){
        res+=vect[ind][1];
        ind++;
        countB++;
    }
    cout<<res;
    return 0;
}
