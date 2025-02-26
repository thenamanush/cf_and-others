#include<iostream>
using namespace std;

int main(){
    string nam;
    cin >> nam;

    int count = 0;
    for(int i = 0; i < nam.size(); i++){
        count++;
    }
    if(count % 2 == 1){
        cout << "chat with her" << endl;
    }
    else{
        cout << 'ignore him' << endl;
    }
    return 0;
}