#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void pairsum (int arr[], int n , int k)
{
    int low = 0 ;
    int high=n-1 ;
    bool flag =false;
   while(low<high)
   {
       if(arr[low]+arr[high]==k)
       {
          flag= true;
          low ++ ;
       }
         
         
 else if (arr[low]+arr[high]>k)
 {
     high -- ;
 }
else
{
   low ++  ;
}
       
}
   
 if (flag==true)
   {
       cout<<"True"<<endl;
   }
else
{
    cout<<"False"<<endl;
}
}
int main() {
      int n ;
      int k ;
    cin>>n>>k;
     int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
sort(arr,arr+n);
pairsum(arr,  n,  k) ;
    return 0 ;
}

