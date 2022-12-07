#include<iostream>
using namespace std;
int min_lcm(int a,int b,int n)
{
/*int start =0;*/int breac =0;
//int end = a*b;
int mid=b,ans = n ;
while(breac == 0)
{  
    if(( mid%a == 0)&&(mid%b ==0))
    {breac=1; return mid;}
    else{
      mid++;}
    
}
    return ans;
    
}

int main()
{
       int n;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       int start;
       int end;
       int ans[n] ;
       int a[n],b[n];
       for(int i=0;i<n;i++)
       { start =1 ; end = arr[i]-1;ans[i] = 1234556;
       while(start<=end)
       { 
       if( min_lcm( start, end, arr[i])<ans[i])
       {ans[i] =  min_lcm(start,end, arr[i]); a[i]=start;b[i] = end;}
       start +=1; end -=1;
}}

for(int i=0;i<n;i++ )
cout<<a[i]<<" "<<b[i]<<endl;
  return 0;
}