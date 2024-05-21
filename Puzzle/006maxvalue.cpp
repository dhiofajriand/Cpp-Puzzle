#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main(){
    string input;
    cout << "Input number divided by comma (1,2,3): ";
    getline(cin, input);
    vector<int>a;
    stringstream inputstream(input);
    string input2;
    while(getline(inputstream, input2, ',')){
        a.push_back(stoi(input2));
    }
    int max=a[0];
    for(int b=0; b<size(a); b++){
        if(a[b]>max){
            max=a[b];
        }
    }
    cout << "Max: "<<max;
}