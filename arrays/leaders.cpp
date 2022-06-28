#include <iostream>
#include <cmath>
using namespace std;
void leaders(int arr[],int n)
{
    int curr = arr[n-1];
    cout<<curr<<" ";
    for(int i=n-2;i>=0;i--)
    {
        if(curr<arr[i])
        {
            curr=arr[i];
            cout<<curr<<" ";
        }
    }
}

int main() {
	
      int arr[] = {7, 10, 4, 10, 6, 5, 2}, n = 7;

      leaders(arr, n);
    
}
