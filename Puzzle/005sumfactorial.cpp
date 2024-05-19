#include <iostream>
using namespace std;

int main(){
    int input;
    cout << "Input: ";
    cin >> input;
    int sum = 1;
    for (int a=1; a<=input; a++){
        sum *= a;
    }
    cout << "Sum of Factorial: "<<sum;
}
