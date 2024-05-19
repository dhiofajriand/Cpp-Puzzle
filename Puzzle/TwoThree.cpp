#include <iostream>

using namespace std;

int main(){
    int input;
    cout << "Input: ";
    cin >> input;
    
    for(int a=1; a<=input; a++){
        if(a%2==0||a%3==0){
            if(a%2!=0){
                cout << "Three"<<endl;
            }
            else if(a%3!=0){
                cout << "Two"<<endl;
            }
            else
            cout <<"TwoThree"<<endl;
        }
        else
        cout << a<<endl;
    }
}
