#include <iostream> 
using namespace std;
int main(){
   
   int n;
   cout<<"enter value"<<endl;
   cin>>n;
   
   for (int i = 1; i<=n ; i++){
     int value = i;
    for (int j = 1; j<=i; j++){
       cout<<value<<" ";
        value++;
        //cout<<j+i-1<<" ";
    }
    cout<<endl;
   }
    return 0;

}