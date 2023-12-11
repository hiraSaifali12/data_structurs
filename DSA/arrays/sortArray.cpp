#include <iostream>
using namespace std;
int main(){
    int arr[20];
    int n ,i;
    cout<<"enter the size of an array"<<endl;
    cin>>n;
    cout<<"enter the element"<<endl;
    for (i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"arrays are"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}