// COMSC-210 | Lab 7 | Diksha Tara Natesan
// IDE used: Vim

#include <iostream>
#include <string>
using namespace std;

const int SIZE = 5;

*string reverseArray(string *arr){
    string *reverse = nullptr;
    reverse = new string[SIZE];
    for (int i = 0; i < SIZE; i++){
        *(reverse + i) = *(arr + (SIZE - i));
    }
    delete [] arr;
    return reverse;
}

int main(){

}
