#include<iostream>
#include<vector>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }
    while(i<n){
        arr3[k++]=arr1[i++];
    }
    
    while(j<m){
        arr2[k++]=arr2[j++];
    }
    
}

void printarr(int arr[],int n){
    for(int i =1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr1[5]={1,4,5,8,2};
    int arr2[3]={10,12,35};
    int arr3[8]={0};
    merge(arr1, 5, arr2, 8, arr3);
    printarr(arr3,8);

}