#include <iostream>
#include <cmath>

// Justin Jiang

using std::cout; using std::cin; using std::endl; 

// Returns true if n is a prime integer, false otherwise.
// Precondition: n >= 0
bool is_prime (int n) {
	if (n <= 1) {
		return false;
	} 
	for (int factor = 2; factor <= std::sqrt(n); ++factor) {
		if (n % factor == 0) {
			return false;
		}
	}
	return true;
}

// count how many terms are in green tao if first two terms are  i and j
// end if next number in sequence is not prime (num2);
int numterms(int a, int b){
	int temp = a-b, num=2;
	bool endseq = false;
	int num2 = a + temp;
	while(endseq == false){
		if(is_prime(num2) == false){
			endseq = true;
		}
		else{
			num += 1;
			num2 += temp;
		}
	}
	return num;
}

// print longest sequence in green-tao with first 2 terms less than 1000
// end sequence when num2 is not prime
void printnumbers(int a, int b){
	int temp = a-b;
	bool endseq = false;
	int num2 = a + temp;
	cout << "Difference in prime numbers: " << temp << endl;
	while(endseq == false){
		if(is_prime(num2) == false){
			endseq = true;
		}
		else{
			cout << num2 << endl;
			num2 += temp;
		}
	}
}

int main(){
	int count = 2, tcount, num1, num2;
	// terms under 1000
	for(int i = 997; i > 4; i--){
		for(int j = 3; j < i; j++){
			if(is_prime(i)==true && is_prime(j)==true){
				tcount = numterms(i,j);
				if(tcount > count){
					count = tcount;
					num1 = i;
					num2 = j;}
			}
		}
	}
	cout << "There are " << count << " terms" << endl;
	printnumbers(num1, num2);
}