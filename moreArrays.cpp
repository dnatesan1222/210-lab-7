// COMSC-210 | Lab 7 | Diksha Tara Natesan
// IDE used: Vim

#include <iostream>
#include <string>
using namespace std;

const int SIZE = 5;

// reverseArray() reverses the elements of the received dynamic string array and returns a pointer to the modified string array w/o output
// arguments: string *arr (a dynamic string array)
// returns: a pointer to the reversed dynamic string array
string* reverseArray(string *arr){
    string *reverse = nullptr;
    reverse = new string[SIZE];
    for (int i = 0; i < SIZE; i++){
        *(reverse + i) = *(arr + (SIZE - i - 1));
    }
    delete [] arr;
    return reverse;
}

// displayArray() outputs the elements of the received dynamic string array
// arguments: string *arr (a dynamic string array)
// returns: nothing
void displayArray(string *arr){
    for (int i = 0; i < SIZE; i++)
        cout << *(arr + i) << " ";
    cout << endl;
}

// main() creates a dynamic string array and populates it with 5 names, then calls the functions to reverse and output the array
// arguments: nothing
// returns: nothing
int main(){
    string *strArr = nullptr;
    strArr = new string[SIZE];
    *strArr = "Bo";
    *(strArr+1) = "Jo";
    *(strArr+2) = "Mo";
    *(strArr+3) = "Ro";
    *(strArr+4) = "Zo";
    
    cout << "Original array: ";
    displayArray(strArr);
    strArr = reverseArray(strArr);
    cout << "Reversed array: ";
    displayArray(strArr);
}
