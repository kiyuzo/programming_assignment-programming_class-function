#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int checkOdd(int arr[], int n) {
    int oddCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            oddCount++;
        }
    }
    return oddCount;
}

void printOdd(int arr[], int n){
    cout << "The Numbers are : ";
    for(int i = 0; i < n; i++){
        if (arr[i] % 2 != 0) {
            cout << arr[i] << ", ";
        }
    }
    cout << endl;
}

int checkEven(int arr[], int n) {
    int evenCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        }
    }
    return evenCount;
}

void printEven(int arr[], int n){
    cout << "The Numbers are : ";
    for(int i = 0; i < n; i++){
        if (arr[i] % 2 == 0) {
            cout << arr[i] << ", ";
        }
    }
    cout << endl;
}

int checkIncreasing(int arr[], int n) {
    int increasingCount = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] > arr[i]) {
            increasingCount++;
        }
    }
    return increasingCount;
}

void printIncreasing(int arr[], int n){
    cout << "The Numbers are : ";
    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] > arr[i]) {
            cout << arr[i] << " to " << arr[i+1] << ", ";
        }
    }
    cout << endl;
}

int checkDecreasing(int arr[], int n) {
    int decreasingCount = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] < arr[i]) {
            decreasingCount++;
        }
    }
    return decreasingCount;
}

void printDecreasing(int arr[], int n){
    cout << "The Numbers are : ";
    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] < arr[i]) {
            cout << arr[i] << " to " << arr[i+1] << ", ";
        }
    }
    cout << endl;
}

int maxOdd(int arr[], int n) {
    int max = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
    }
    return max;
}

int maxEven(int arr[], int n) {
    int max = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
    }
    return max;
}

int maxIncreasing(int arr[], int n) {
    int max = -1;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] > arr[i]) {
            if (arr[i + 1] - arr[i] > max) {
                max = arr[i + 1] - arr[i];
            }
        }
    }
    return max;
}

void printMaxIncreasing(int arr[], int n){
    int num1 = 0, num2 = 0;
    int max = -1;
        for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] > arr[i]) {
            if (arr[i + 1] - arr[i] > max) {
                max = arr[i + 1] - arr[i];
                num1 = arr[i];
                num2 = arr[i+1];
            }
        }
    }
    cout << "The increasing number is : " << num1 << " to " << num2 << endl;
}

int maxDecreasing(int arr[], int n) {
    int max = -1;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] < arr[i]) {
            if (arr[i] - arr[i + 1] > max) {
                max = arr[i] - arr[i + 1];
            }
        }
    }
    return max;
}

void printMaxDecreasing(int arr[], int n){
    int num1 = 0, num2 = 0;
    int max = -1;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] < arr[i]) {
            if (arr[i] - arr[i + 1] > max) {
                max = arr[i] - arr[i + 1];
                num1 = arr[i];
                num2 = arr[i+1];
            }
        }
    }
    cout << "The increasing number is : " << num1 << " to " << num2 << endl;
}

void printSeparatingLine(){
    cout << "-----------------------------------------------------" << endl;
}

int main(){
    //inputting the n and array

    //inputs the max value(n) of array/numbers
    int n;
    cout << "Please insert the max value of your numbers : ";
    cin >> n;

    //input the elements of each array (the numbers)
    int arr[n];
    cout << "Please insert your numbers below :" << endl;
    for(int i = 0; i < n; i++){
        cout << "Num " << i+1 << " : ";
        cin >> arr[i];
    }
    cout << endl;

    printSeparatingLine();

    //outputting your numbers
    cout << "Your Numbers are : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;

    //outputting each function
    printSeparatingLine();

    // Odd Numbers
    cout << "The Numbers of Odd : " << checkOdd(arr, n) << endl;
    printOdd(arr, n);

    printSeparatingLine();

    // Even Numbers
    cout << "The Numbers of Even : " << checkEven(arr, n) << endl;
    printEven(arr, n);

    printSeparatingLine();

    // Increasing Numbers
    cout << "The Numbers of Increasing : " << checkIncreasing(arr, n) << endl;
    printIncreasing(arr, n);

    printSeparatingLine();

    // Decreasing Numbers
    cout << "The Numbers of Decreasing : " << checkDecreasing(arr, n) << endl;
    printDecreasing(arr, n);

    printSeparatingLine();

    // Max Odd Number
    if(maxOdd(arr, n) < 0){
        cout << "Your array doesnt have any Odd numbers" << endl;
    }
    else{
        cout << "The Max Value of Odd : " << maxOdd(arr, n) << endl;
    }

    printSeparatingLine();

    // Max Even Number
    if(maxEven(arr, n) < 0){
        cout << "Your array doesnt have any Even numbers" << endl;
    }
    else{
        cout << "The Max Value of Even : " << maxEven(arr, n) << endl;
    }

    printSeparatingLine();

    // Max Increasing Number
    if(maxIncreasing(arr, n) < 0){
        cout << "Your array doesnt have any Increasing numbers" << endl;
    }
    else{
        cout << "The Max Value of Increasing : " << maxIncreasing(arr, n) << endl;
        printMaxIncreasing(arr, n);
    }

    printSeparatingLine();

    // Max Decreasing Number
    if(maxDecreasing(arr, n) < 0){
        cout << "Your array doesnt have any Decreasing numbers" << endl;
    }
    else{
        cout << "The Max Value of Decreasing : " << maxDecreasing(arr, n) << endl;
        printMaxDecreasing(arr, n);
    }

    printSeparatingLine();
}
