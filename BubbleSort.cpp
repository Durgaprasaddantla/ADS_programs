#include <iostream>
using namespace std;
int main()
{
        int n,i,j;
        cout<<"Enter Size of the array"<<endl;
        cin>>n;
        int a[n];
        cout<<"Enter elements"<<endl;
        for(i=0;i<n;i++)
        {
                cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
                for(j=0;j<n-i;j++)
                {
                        if(a[j]>a[j+1])
                        {
                                int temp=a[j];
                                  a[j]=a[j+1];
                                  a[j+1]=temp;
                        }
                }
        }
        cout<<"After Bubble sort"<<endl;
        for(i=0;i<n;i++)
        {
                cout<<a[i]<<" ";
        }
        cout<<endl;
        return 0;
}


