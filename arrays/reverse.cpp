#include <iostream>
#include <cmath>
using namespace std;
void reverse(int arr[],int n)
{
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        int x = arr[i];
        arr[i]=arr[j];
        arr[j]=x;
    }
}

int main() {
	
      int arr[] = {10, 5, 7, 30}, n = 4;

      cout<<"Before Reverse"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }

       cout<<endl;

       reverse(arr, n);

       cout<<"After Reverse"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
    
}
