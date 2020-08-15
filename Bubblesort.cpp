#include<bits/stdc++.h>

using namespace std;

int main()
{
    int size;
    cout<<"Enter the number of elements: ";
    cin>>size;
    int arr[size];
    cout<< "Enter the elements: "<<endl;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }
    cout<< "Sorted Array: ";
    for(int i=0;i<size;i++)
        cout<< arr[i]<< " ";
}