#include<cstdlib>
#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int num);
bool isEven(int num);
bool isFactorial(int num);
bool isPreSum(int num);
bool isAverage(int num);

int main(){
    srand(time(0));
    int random_num = rand() % 10000;

    if(isPrime(random_num)){
        cout<<random_num<<" is a Prime Number"<<endl;
    }
    else{
        cout<<random_num<<" is not a Prime Number"<<endl;
    }
    
    if(isEven(random_num)){
        cout<<random_num<<" is an Even Number"<<endl;
    }
    else{
        cout<<random_num<<" is an Odd Number"<<endl;
    }

    if(isFactorial(random_num)){
        cout<<random_num<<" is a Factorial of a Number"<<endl;
    }
    else{
        cout<<random_num<<" is not a Factorial of any Number"<<endl;
    }

    if(isPreSum(random_num)){
        cout<<random_num<<" has a Prefix Sum"<<endl;
    }
    else{
        cout<<random_num<<" does not have a Prefix Sum"<<endl;
    }

    if(isAverage(random_num)){
        cout<<random_num<<" is an Average of Sum of n Numbers"<<endl;
    }
    else{
        cout<<random_num<<" is not an Average of Sum of n Numbers"<<endl;
    }
}


bool isPrime(int num){
    for(int i = 2; i<=sqrt(num); i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

bool isEven(int num){
    if(num % 2 == 0){
        return true;
    }
    return false;
}

bool isFactorial(int num){
    int temp = 1;
    for(int i = 1; temp<num; i++){
        temp = temp*i;
    }
    
    if(temp == num){
        return true;
    }
    else{
        return false;
    }
}

bool isPreSum(int num){
    int temp = 0;
    for(int i = 1; temp<num; i++){
        temp = temp+i;
    }

    if(temp == num){
        return true;
    }
    else{
        return false;
    }
}

bool isAverage(int num){
    float temp = 0;
    int i = 1;
    for(; temp < num; i++){
        temp = (i+1)/2.0;      
    }

    if(temp == num){
        return true;
    }
    else{
        return false;
    }
}

