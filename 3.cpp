// wap to create an array of creating an array of odd number between 1 to 50

#include <iostream>
using namespace std;
int main(){
    int arr[25];
    int index = 0;
    for (int i= 1; i<=50;i++){
        if (i%2 != 0){
            arr[index++] = i;
        }
    }
    for (int i = 0; i < index; i++){
        cout << arr[i] << " ";
    }
    return 0;

}
