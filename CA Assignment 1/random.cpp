#include<cstdlib>
#include<iostream>
#include<cmath>
long long int mod = 1e9+7;
using namespace std;

bool isPrime(int num);
bool isEven(int num);
bool isFactorial(int num);
void listPreSumArr(int *arr);
float average(int *arr);
void listPrimes(int *arr);
void listOdds(int *arr);
void listEvens(int *arr);
int preSum(int *arr, int n);
int factorial(int num);
void listFact(int *arr);

int main(){
    srand(time(0));
    int random_num[100];
    cout<<"Numbers : ";
    for(int i = 0; i<100; i++){
        random_num[i] = rand() % 10000;
        cout<<random_num[i]<<" ";
    }
    cout<<endl<<endl;
    listEvens(random_num);
    cout<<endl;
    listOdds(random_num);
    cout<<endl;
    listPrimes(random_num);
    cout<<endl;
    listPreSumArr(random_num);
    cout<<endl;
    //listFact(random_num);
    cout<<endl;
    cout<<"Average = "<<average(random_num);
    cout<<endl;
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

int preSum(int *arr, int n){
    int sum = 0;

    for(int i = 0; i<n; i++){
        sum = sum + arr[i];
    }

    return sum;
}

void listPreSumArr(int *arr){
    cout<<"Prefix sum Array : ";
    for(int i = 0; i<100; i++){
        cout<<preSum(arr, i)<<" ";
    }
    cout<<endl;
}

float average(int *arr){
    float sum = 0;
    
    for(int i = 0; i<100; i++){
        sum = sum + arr[i];
    }

    return sum/100.0;
}

void listPrimes(int *arr){
    cout<<"Prime : ";
    for(int i = 0; i<100; i++){
        if(isPrime(arr[i])){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}

void listEvens(int *arr){
    cout<<"Evens : ";
    for(int i = 0; i<100; i++){
        if(isEven(arr[i])){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}

void listOdds(int *arr){
    cout<<"Odds : ";
    for(int i = 0; i<100; i++){
        if(!isEven(arr[i])){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}


int factorial(int num){
    int res =1;
    for(int i = 1; i<=num; i++){
        res = ((res % mod) * (i % mod)) % mod;
    }
    return res;
}

void listFact(int *arr){
    cout<<"Factorial Array : ";
    for(int i = 0; i<100; i++){
        cout<<factorial(arr[i])<<" ";
    }
    cout<<endl;
}