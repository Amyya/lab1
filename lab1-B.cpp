#include <iostream>

using namespace std;

int n;

int main()
{
    cout<<"Please input an integer n : ";
    cin>>n;
    while(true){
    cout<<"n = "<<n<<"\n";
    if(n == 1){
        break;
    }
    else if(n % 2 != 0){
        n = 3*n+1;
    }
    else{
        n = n/2;
    }
    }
    return 0;
}
