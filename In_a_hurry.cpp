#include<iostream>
using namespace std;

int main()
{
      int n,k;
      //cout<<"abc";
      cin>>n>>k;
      int start =0,end = n;
      int mid,time,ans;
     int a ;time = 240 -k;
      while(start<=end)
      { mid = start + (end-start)/2;
      a = 5*(mid)*(mid+1)/2;
        
          if(time> a)
         { start = mid+1;ans = mid;}

          else{end = mid-1; }
      }
      cout<<start;
  return 0;
}// 35 