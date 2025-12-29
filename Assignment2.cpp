//NUR FARIZA ADLINA BINTI MOHAMMAD FAIZAL (A25CS0310)
//NUR HANANI SAZWANI BINTI MUHAMMAD HELMI WAN (A25CS0313)
//29/12/2025
//SET 2 - PROTON CAR LOAN CALCULATOR

#include <iostream>
#include <iomanip>
using namespace std;


void CarModel(int&);
void CarVariant(int&);
void CarRegion(int&);
double CarPrice(int&, int&, int&);
double LnAMOUNT(double&, double);
double MonthlyPayment(double, double, int);


int main(){
    int model, variant, region, LoanPeriod;
    double carPrice, downPayment, interestRate;
    char choice;

    do{
    cout << endl;
    cout << "Proton Car Loan Calculator" << endl << endl;
    cout << "Model [1-X50, 2-Exora, 3-Persona]: ";
    cin >> model;
    cout << "Variants [1-1.6L Standard CVT, 2-1.6L Premium CVT]: ";
    cin >> variant;
    cout << "Region [1-Peninsular Malaysia, 2-East Malaysia]: ";
    cin >> region;

    carPrice = CarPrice(model, variant, region);

    cout << endl;
    cout << "Car Info" <<  endl;
    cout << "Model : " ;
    CarModel(model);
    cout << endl;

    cout << "Variant : " ;
    CarVariant(variant);
    cout << endl;
    
    cout << "Region : " ;
    CarRegion(region);
    cout << endl;

    cout << "Paint Type:  Metallic" << endl;
    cout << fixed << setprecision(2);
    cout << "Price (MYR): " << carPrice;
   
    cout << endl << endl;
    
    MonthlyPayment(LnAMOUNT(carPrice, downPayment), interestRate, LoanPeriod);
    cout << endl;

    cout << "Do you want to enter other data? [Y @ N]: ";
    cin >> choice;

    }while(choice == 'Y' || choice == 'y');
    cout << endl;
    cout << "Thank you :)" << endl;


    
    return 0;

}


void CarModel(int& model){
    switch(model){
        case 1:
            cout << "X50";
            break;
        case 2:
            cout << "Exora";
            break;
        case 3:
            cout << "Persona";
            break;
    }
}

void CarVariant(int& variant){
    switch(variant){
        case 1:
            cout << "1.6L Standard CVT";
            break;
        case 2:
            cout << "1.6L Premium CVT";
            break;
    }
}

void CarRegion(int& region){
    switch(region){
        case 1: 
            cout << "Peninsular Malaysia";
            break;
        case 2:
            cout << "East Malaysia";
            break;
    }
}

double CarPrice(int& model, int& variant, int& region){
    double carPrice;
    if (model == 1 && variant == 1 && region == 1){
        carPrice = 75800; //car price if model X50, variant 1, region 1
    } else if (model == 1 && variant == 1 && region == 2){
        carPrice = 85800;//car price if model X50, variant 1, region 2
    } else if (model == 1 && variant == 2 && region == 1){
        carPrice = 95800;//car price if model X50, variant 2, region 1
    } else if (model == 1 && variant == 2 && region == 2){
        carPrice = 105800;//car price if model X50, variant 2, region 2
    } else if (model == 2 && variant ==1 && region == 1){
        carPrice = 64600;//car price if model Exora, variant 1, region 1
    } else if (model == 2 && variant == 2 && region == 1){
        carPrice = 71800;//car price if model Exora, variant 2, region 1
    } else if (model == 2 && variant ==1 && region == 2){
        carPrice = 74600;//car price if model Exora, variant 1, region 2
    } else if (model == 2 && variant == 2 && region == 2){
        carPrice = 81800;//car price if model Exora, variant 2, region 2
    } else if (model == 3 && variant == 1 && region ==1){
        carPrice = 49429;//car price if model Persona, variant 1, region 1
    } else if (model == 3 && variant == 1 && region ==2){  
        carPrice = 59429;//car price if model Persona, variant 1, region 2
    } else if (model == 3 && variant == 2 && region == 1){
        carPrice = 54600;//car price if model Persona, variant 2, region 1
    } else if (model == 3 && variant == 2 && region == 2){
        carPrice = 64600;//car price if model Persona, variant 2, region 2
    } else {
        cout << "Invalid selection. Please try again. " << endl;
    }
    return carPrice;
}


double LnAMOUNT(double& carPrice, double downPayment){
    cout << "Down payment (MYR): ";
    cin >> downPayment;
    return carPrice - downPayment;

}

double MonthlyPayment(double loanAmount, double interestRate, int LoanPeriod){
    double totalInterest, totalPayment, monthlyPayment;

    cout << "Interest rate (%): ";
    cin >> interestRate;
    cout << "Repayment period (in years): ";
    cin >> LoanPeriod;

    totalInterest = loanAmount * (interestRate/100) * LoanPeriod;
    totalPayment = loanAmount + totalInterest;
    monthlyPayment = totalPayment / (LoanPeriod * 12);

    cout << "MONTHLY INSTALLMENT (MYR): " << monthlyPayment << endl;
    
    return monthlyPayment;
}
