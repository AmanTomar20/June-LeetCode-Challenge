#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(vector<int> p, vector <int>q){
    return p[0]>q[0]||(p[0]==q[0]&&p[1]<q[1]);
}

int main()
{
    vector<vector<int>> people={{7,0}, {4,4}, {7,1}, {5,0}, {6,1}, {5,2}};
    sort(people.begin(),people.end(),compare);
    //[[5,0], [7,0], [5,2], [6,1], [4,4], [7,1]]
    for(int i=0;i<people.size();i++){
        for(int j=0;j<people[0].size();j++){
            cout<<people[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
