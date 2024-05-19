#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int main(){
    string input;
    vector<int>angka;
    vector<int>angkatampil;
    int mulai;
    
    cout << "Input (pisahkan dengan koma, ex: 1,2,3 :";
    getline(cin, input);
    cout << "Indeks mulai output: ";
    cin>>mulai;
    
    stringstream bacastring(input);
    string angkastring;
    
    while(getline(bacastring, angkastring, ',')){
        angka.push_back(stoi(angkastring));
    }
    
    int panjang;
    panjang=size(angka);
    int tampil=0;
    
    if(mulai>=panjang){
        cout << "Indeks salah!";
    }
    else{
        for(int a=mulai;a<panjang;){
            if(a==panjang-1){
                //indeks terakhir tampil terakhir
                if(tampil==panjang-1){
                    angkatampil.push_back(angka[a]);
                    a=panjang+1;
                    tampil++;
                    a++;
                }
                //indeks terakhir bukan tampil terakhir
                else
                {
                    angkatampil.push_back(angka[a]);
                    tampil++;
                    a=0;
                }
            }
            else{
                //bukan indeks terakhir tampil terakhir
                if(tampil==panjang-1){
                    angkatampil.push_back(angka[a]);
                    a=panjang+1;
                    tampil++;
                    a++;
                }
                //bukan indeks terakhir bukan tampil terakhir
                else{
                    angkatampil.push_back(angka[a]);
                    tampil++;
                    a++;
                }
            }
        }
    }
    for(int b:angkatampil){
        cout<<b;
    }
}
