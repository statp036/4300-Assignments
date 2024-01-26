/*
1) 
a. A = D = E
   B = Z

b) A: 12345
   B: 8
   C: 32
   D: 12345
   E: 12345
   F: 35

2)
0x34f9dff8b4
0x34f9dff8b8
0x34f9dff8bc
0x34f9dff8b0

3)
void next_collatz(int & x){
    if(x == 1){
        int a = 1;
    }
    else if(x%2==0){
        int temp = x/2;
        x = temp;
    }
    else{
        int temp = 3*x+1;
        x = temp;
    }
}

4) 
void copy(int x[], int y[]){
    for(int i; i < 10; ++i){
         y[i] = x[i];        
    }
}

int main() {
    int arr[10] = {4, 7, 3, 0, -1, 2, 8, 5, 1, 2};
    int arr2[10];
    copy(arr, arr2);
}

5)
int expN(double x, int n){
    if(n <= 1){
        return 1;
    }
    else{
        return x*expN(x,n-1);
    }
}

6)
int log_floor(int n){
    if(n <= 1){
        return 0;
    }
    else{
        return 1+log_floor(n/2);
    }
}

7)
void reverse_range(int arr[], int i, int j){
  if(i >= j){

  }
  else{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    reverse_range(arr,i+1,j-1);
  }
}

8)



*/

#include <iostream>
using namespace std;


int ceiling_range(int arr[], int x, int i, int j){
  
    if(i>j){
        return x-1;
    }
    else{
        int y = ceiling_range(arr, x, i+1, j);
        if(arr[i] > x){
            if(arr[i] > y && y == x-1){
                return arr[i];
            }
            else if(arr[i] < y && y != x-1){
                return arr[i];
            }
            else{
                return y;
            }
        }
        else{
            return y;
        }
    }
}

int main() {
    int z[] =  {17, 29, 31, 14, 85, 60};
    int num = ceiling_range(z, 67, 0, 5); 
    cout << num << endl;
}





