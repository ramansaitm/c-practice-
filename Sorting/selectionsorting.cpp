#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
for(int i=0;i<n;i++)
{
    int current=i;
  for(int j=i+1;j<n;j++)
  {
      if(arr[current]>arr[j])
      {
     
         current=j;
      } int temp=arr[i];
        arr[i]=arr[current];
        arr[current]=temp;
  }
}
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
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
   selectionsort(arr,n);
    return 0;
}
