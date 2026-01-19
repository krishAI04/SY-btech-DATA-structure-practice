//  wap to find the sum of all the elements in the array, consider the size of array to be 10

#include <iostream>
using namespace std;
int main(){
    int arr[10] = {1,3,5,6,4,3,2,6,5,43};
    int sum = 0;
    
    for(int i = 0; i < 10; i++){
        sum += arr[i];      
    }
    
    cout << "Sum: " << sum << endl;
    
    return 0;
}
