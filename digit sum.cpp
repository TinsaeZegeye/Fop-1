#include<iostream>
using namspace std;

int main(){

    int number, reminder, sum = 0, quotient;

    cout <<"Enter a positive number: ";
    cin>>number;
    int temp = number;

    while(number != 0 ){
        quotient = number / 10;

            if (quotient >= 0){
                reminder = number / 10;
                sum += reminder;
            }
            number /= 10;

    }
    cout <<"The sum of the digits of "<<temp<<"is: "<<sum;

    return 0;
}