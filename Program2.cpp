// #include <iostream>
// using namespace std;

// int main(){

//     string month[] = {"January", "February", "March", "April", "May", "Jun", "July", "August", "September", "October", "November", "December"};
//     int rainfall[12];
//     int total_rainfall=0;

//     for (int i=0; i<12; i++){
//         cout << "Enter rainfall " << month[i] << ": ";
//         cin >> rainfall[i];
//     }

//     for (int i=0; i<12; i++){
//         total_rainfall = total_rainfall + rainfall[i];
//     } 

//     double average = total_rainfall/12;


//     int largest=rainfall[0];
//     int smallest=rainfall[0];
//     string maxIndex=month[0];
//     string minIndex=month[0];

//     for (int i=0; i<10; i++){
//     if(largest<rainfall[i]){
//         largest = rainfall[i];
//         maxIndex=month[i];
//     }

    
// }
//     for (int i=0; i<10; i++){
//     if(smallest>rainfall[i]){
//         smallest = rainfall[i];
//         minIndex=month[i];
//     }
//     }

//     cout << endl;
//     cout << "Average monthly rainfall: " << average << endl;
//     cout << "Total rainfall for a year: " << total_rainfall << endl;
//     cout << "Month with the highest amount: " << maxIndex << endl;
//     cout << "Month with the lowest amount: " << minIndex << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

void modifyArray(dpuble []);

int main (){
    const int MONTH = 5;
    double rainfall[MONTH];
    double total=0.0;
    double average;
    int highestMonth = 0, lowestMonth = 0;

    //input rainfall data with validation
    for(int i=0; i<MONTH ; i++){
        cout << endl;
        do{
            cout << "Enter rainfall for month " << (i+1) << ": ";
            cin >> rainfall[i];

            if (rainfall[i] < 0){
                cout << "Cannot be negative number." << endl;

            }
        } while (rainfall[i] <0);
        total += rainfall[i];
    }

    //find the highest and lowest rainfall month
    for (int i=0; i<MONTH; i++){
        if (rainfall[i] > rainfall[highestMonth])
        highestMonth = i;
        if (rainfall[i] < rainfall[lowestMonth])
        lowestMonth = i;
    }

    //Calculate average
    average = total/MONTH;

    //Displayy result
    cout << "Total rainfall: " << total << endl;
    cout << "Average rainfall: " << average << endl;
    cout << "Lowest rainfall: Month " << (lowestMonth + 1) << " (" << rainfall[lowestMonth] << ") " << endl;

    cout << rainfall[0] << endl;
    modifyArray(rainfall);
    cout << rainfall[0] << endl;

    return 0;
}

void modifyArray(double array[]){
    array[0] = 999;
}

