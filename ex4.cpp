#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    int *arr = new int[n];
    
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

    }
    
    cout << endl;
    cout << "The top of the stack is at the address " <<&arr[n - 1];
     
    delete[] arr;

    return 0;
}
