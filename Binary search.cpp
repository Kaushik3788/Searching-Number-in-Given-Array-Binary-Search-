#include<iostream>
using namespace std;
int binarySearch(int num[],int size, int key)
{
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;
    
    while(start <= end )
    {
        if(num[mid] == key)
        {
            return mid;
        }
        
        if(key >= num[mid])
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
        mid = start+(end - start)/2;
    }
    return -1;
}

int main()
{
    int arr[6]={1,2,3,4,5,6};
  int k =   binarySearch(arr,6,5);
  cout<<k;
}
