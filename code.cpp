#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,i,a,j,k;
    static int sum;
    cin>>n>>a;    
    vector<int>V;
    for(i=0;i<n;i++)
    {
      cin>>j;
      V.push_back(j);
      sum+=V[i];
    }
    cin>>k;
  ((sum-V[a])/2)==k?cout<<"Bon Appetit":cout<<k-((sum-V[a])/2);

}
