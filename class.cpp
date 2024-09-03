#include <iostream>
int main(){
    int num1 = 2;
    int num2 = 1;
    int temp;
    std :: cout << num1 << " " << num2;
    temp = num1;
    num1 = num2;
    num2 = temp;
    std :: cout << num1 << " " << num2;

    return 0;
}