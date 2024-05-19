#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Input: "; 
    getline(cin, input);
    if (size(input)>3){
        for(int a=size(input)-1; a>=0; a--){
            cout << input[a];
        }
    }
    else
    cout << input;
    return 0;
}
