#include <bits/stdc++.h>
using namespace std;
int secondlargest(int a[],int n)
{
    int max1 = 0, res=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max1)
        {
            res=max1;
            max1=i;
        }
        else if(a[i]!=max1)
        {
            if(res==-1 || a[i]>a[res])
            {
                res=i;
            }
        }
    }
    return res;
}
int main() 
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int pos=secondlargest(a,n);
    printf("%d ",a[pos]);
return 0;
}
