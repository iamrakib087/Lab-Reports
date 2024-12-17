#include<iostream>
using namespace std;
int main(){
    int i,n,num,index;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for (i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the number to search: ";
    cin>>num;
    for(i=0; i<n; i++){
        if (arr[i]==num){
            index=i+1;
            break;
        }
        else{
            index=0;
        }
    }
    if(index==0){
        cout<<num<<" is not found in the array.";
    }
    else{
        cout<<num<<" is found at index "<<index;
    }
    return 0;
}