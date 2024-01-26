#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string;

// Justin Jiang

int main(){
    string *arr = new string[5];
    int arr_length = 5, index = -1;
    int temp = 0;

    do{
        ++index;

        if(index >= arr_length){
            arr_length*=2;
            string *tempA = new string[arr_length];
            for(int i=0; i<(arr_length/2); ++i){
                tempA[i] = arr[i];
            }

            delete[] arr;
            arr = tempA;         
        }

        cout << "Enter string ";
        cin >> arr[index]; 

    } while (arr[index] != "STOP");
    return 0;
    delete[] arr;
}