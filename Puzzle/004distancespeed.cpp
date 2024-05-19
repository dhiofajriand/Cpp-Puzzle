#include <iostream>

using namespace std;

int main(){
    int posisistart1, posisistart2, kecepatan1, kecepatan2;
    bool deltadistance;
    
    cout << "Rabbit 1 Position:";
    cin >> posisistart1;
    cout << "Rabbit 1 Velocity:";
    cin >> kecepatan1;
    cout << "Rabbit 2 Position:";
    cin >> posisistart2;
    cout << "Rabbit 2 Velocity:";
    cin >> kecepatan2;
    
    int posisi1, posisi2, distancebefore, distanceafter;
    
    posisi1=posisistart1+kecepatan1;
    posisi2=posisistart2+kecepatan2;
    distancebefore=abs(posisistart1-posisistart2);
    distanceafter=abs(posisi1-posisi2);
    
    if(distancebefore>=distanceafter){
        deltadistance=true;
    }
    else if(distancebefore<distanceafter){
        cout << "No";
    }
    
    while(deltadistance){
        if(posisi1==posisi2){
            cout << "Yes";
            deltadistance=false;
        }
        else{
            distancebefore=abs(posisi1-posisi2);
            posisi1+=kecepatan1;
            posisi2+=kecepatan2;
            distanceafter=abs(posisi1-posisi2);
            if(distancebefore>=distanceafter){
                deltadistance==true;
            }
            else if(distancebefore<distanceafter){
                cout << "NO";
                deltadistance=false;
            }
        }
    }
}
