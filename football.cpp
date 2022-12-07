#include<iostream>
using namespace std;
int main()
{
       int data_watch,data_download,length;
    
    cin>>data_watch>>data_download>>length;
    long data_total = data_watch*length;

    int  time= data_total/data_download;;
                     if(data_total%data_download ==0);
                     
   else{time++;}
cout<<(time - length);


  return 0;
}