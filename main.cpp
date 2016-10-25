#include <iostream>
#include <string>

using namespace std;

bool hexValidation (string str){
    int size =  str.size();
    int citac = 0;
    for (int i = 0; i < size; i++){
        if ( isxdigit(str.at(i))){
            citac++;
        }
    }
    if (citac == i){
        return 1;
    } else {
        return 0;
    }

}

int main(){

cout << "Zadejte cislo:" << endl;
string input;
    cin >> input;
    if ( cin.fail() || (cin.peek() != '\r' && cin.peek() != '\n')){
        cout << "Chybne zadani." << endl;
    } else if (hexValidation(input)){
        cout << input << " : Spravne zadane cislo."<< endl;
    } else {

    }
return 0;
}
