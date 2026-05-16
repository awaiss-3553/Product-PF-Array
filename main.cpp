#include <iostream>

using namespace std;

int main()
{
    int product=1;
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<=4;i++){
        product=arr[i]*product;
    }
    cout<<product;
    return 0;
}
