#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool hexValidation (string str){
    int size =  str.size();
    int citac = 0;
    for (int i = 0; i < size; i++){
        if ( isxdigit(str.at(i))){
            citac++;
        }
    }
    if (citac == size){
        return 1;
    } else {
        return 0;
    }

}

int main(){
    cout << "Zadejte cislo:" << endl;
    string input;
    int decNumber;
        cin >> input;
        if ( cin.fail() || (cin.peek() != '\r' && cin.peek() != '\n')){
            cout << "Nespravny vstup." << endl;
        } else if (hexValidation(input)){
            stringstream(input) >> std::hex >> decNumber;
            cout << decNumber << endl;
        }else {
            cout << "Nespravny vstup." << endl;
        }
    return 0;
}
