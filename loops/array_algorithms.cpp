#include<iostream>
#include<string>

using namespace std;

bool arrayEquals(int arr1[], int arr2[], int size) {
    for(int i = 0; i < size; i++) {
        if(arr1[i] != arr2[i])
            return false;
    }
    return true;
}

int getSum(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

float getAverage(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return 1.0*sum/size;
}

int getMinimum(int arr[], int size) {
    int min = arr[0];
    for(int i = 1; i < size; i ++){
        if(min > arr[i]) {
            min = arr[i];
        }
    }
    return min;
}

void dobleValues(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        arr[i] = 2* arr[i];
    }
}

int main() {

    int numbers[] = {2, 4, 6, 14, 10, 12, 13, 15};
    int num_copy[8];

    for(int i = 0; i < 8; i++) {
        num_copy[i] = numbers[i];
    }

    cout << "Original array:" << endl;
    for(int num: numbers) 
        cout << num << " ";
    cout << endl;
    // num_copy[3] = 90;
    cout << "Copy array:" << endl;
    for(int num: num_copy) 
        cout << num << " ";

    cout << boolalpha;
    cout << "\nAre these arrays equals? " << arrayEquals(numbers, num_copy, 8);

    cout << endl << "Sum of values: " << getSum(numbers, 8) << endl;
    cout << endl << "Average of values: " << getAverage(numbers, 8) << endl;
    cout << endl << "Minimum of values: " << getMinimum(numbers, 8) << endl;

    dobleValues(numbers, 8);
    for(int num: numbers) 
        cout << num << " ";

}