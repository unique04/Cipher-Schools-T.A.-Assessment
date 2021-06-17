#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,temp,totalprice,count=0,robotoutput;
    vector<int> prices;
   cout<<"Enter size for price array:"<<endl;
   cin>>n;
   cout<<"Enter prices array:"<<endl;
   for(int i=0;i<n;i++){
      cin>>temp;
      prices.push_back(temp);
   }
   cout<<"Enter the money customer has:"<<endl;
   cin>>totalprice;
   for(int i=0;i<n;i++){
       if(totalprice%prices[i]==0)
       count++;
   }
   cout<<"Enter Robot Output"<<endl;
   cin>>robotoutput;
   if(robotoutput==count)
   cout<<"Right"<<endl;
   else
   cout<<"Wrong"<<endl;
}
