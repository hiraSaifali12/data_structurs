#include <iostream>
using namespace std;
int main(){
    int arr[20];
    int size,sum=0;
    cout<<"enter the size"<<endl;
    cin>>size;
    cout<<"enter th element"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0;i<size;i++){
        sum = sum +arr[i];
    }
    cout<<"the sum of an array is = "<<sum;
    return 0;
}