// power of the elements of the array
#include <iostream>
using namespace std;
int main(){
    int arr[] = {5,7,3,11,15};
    int powarr[5];
    for (int i = 0; i < 5; i++){
        powarr[i] = arr[i]*arr[i];
        cout<< powarr[i]<<" ";
    }
}
