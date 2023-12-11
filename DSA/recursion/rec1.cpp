#include <iostream>
using namespace std;
void recursion( int n){
    if (n==0){
        return;
    }
     cout<<"hello"<< " "<<n<<endl;
    recursion( n - 1);
     // for backtracking , write after the function  not above the function , --> for  above  is normal recursion
     //  cout<<"hello"<< " "<<n<<endl;
}
main()
{
    recursion(10);

}