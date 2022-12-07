#include<iostream>
using namespace std;
int main()
{int a=3,b=6,n=9,breac = 0;
//int start =0;
//int end = a*b;
int mid,ans = n ;
while(breac ==0)
{  mid = b;
    if(( mid%a == 0)&&(mid%b ==0))
    {breac =1; ans = mid;}
    else{
    mid++;}


} cout<<ans;//                                                                    
       
  return 0;
}