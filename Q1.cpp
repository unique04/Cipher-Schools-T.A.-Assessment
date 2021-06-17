#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    vector<int> ans;
    cout<<"Enter n"<<endl;
    cin>>n;
    if(n==2){
        ans.push_back(-1);
        ans.push_back(1);
    }
    else{
       ans.push_back(-(n - 2) * (n - 1) / 2);
        for (int i = 0; i < n - 1; i++)
       ans.push_back(i);
    } 
    for(int i=0;i<n;i++)
    cout<<ans[i]<<" ";
    cout<<endl;
}
