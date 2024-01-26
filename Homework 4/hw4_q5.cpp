#include <iostream>

using std::cout; using std::cin; using std::endl; 

// Prints the contents of the int array `*ptr`, with `length` entries, 
// all on one line of output, with spaces in between. 
void print(int *ptr, int length) {
    for(int i=0; i<length; ++i){
        cout << ptr[i] << " ";
    }
}

// Justin Jiang

int main(){
    cout << "How many entries?";
    int num_entries;
    cin >> num_entries;
    int *arr;
    arr = new int[num_entries];
    for(int i=0; i<num_entries; ++i){
        cout << "Num? ";
        int x;
        cin >> x;
        arr[i] = x;
    }
    print(arr, num_entries);

    return 0;
}