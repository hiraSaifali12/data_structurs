#include <iostream>
using namespace std;
int main(){
    int arr [20];
    int n ,i;
cout<<"enter the size"<<endl;
    cin>>n;
    int initializeNo = 3 ;
    fill_n(arr,n,initializeNo);
    cout<<"arrays"<<endl;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}