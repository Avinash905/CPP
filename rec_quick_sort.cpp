#include<iostream>
using namespace std;

int swap(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int partition(int arr[],int l,int h)
{
    int pivot=arr[l];
    int i=l;
    int j=h;
    while(i<j)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr,i,j);
        }
    }
    swap(arr,j,l);
        return j;
}

void quickSort(int arr[],int l,int h)
{
    if(l<h)
    {
        int pivot=partition(arr,l,h);
        quickSort(arr,l,pivot-1);
        quickSort(arr,pivot+1,h);
    }
}

int main()
{
    int arr[7]={4,2,5,9,6,1};
    quickSort(arr,0,5);
    for (int i = 0; i < 6; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}