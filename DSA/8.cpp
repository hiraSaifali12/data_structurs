#include <iostream> 
using namespace std;
int main(){
   
   int n;
   cout<<"enter value"<<endl;
   cin>>n;
   char start= 'A';
   for (int i = 1; i<=n ; i++){
    for (int j = 1; j<=n; j++){
        //char ch = 'A'+i-1;
        cout<<start<< " ";
        start++;
        
    }
    cout<<endl;
   }
    return 0;

}