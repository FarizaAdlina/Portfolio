#include <iostream>
using namespace std;

int main(){

    int value[10];

    for (int i=0; i<10; i++){
        cout << "Enter value : " ;
        cin >> value[i];
    }

    int largest=value[0];
    int smallest=value[0];

    for (int i=0; i<10; i++){
    if(largest<value[i]){
        largest = value[i];
    }

    
}
    for (int i=0; i<10; i++){
    if(smallest>value[i]){
        smallest = value[i];
    }
    }

    cout << "Largest value: " << largest << endl;
    cout << "Smallest value: " << smallest << endl;
    return 0;
}