#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string;

// Justin Jiang

//
class Student{
public:
    string name;
    int num_submitted;
    int scores[10];
    Student();
    Student(string s);
    void add_score(int num);
    double average() const;
    void display() const;
};
//

int main() {
    Student x;
    Student y("Evan");

    x.display();  // Should display "Name: ?, Average: 0"

    y.add_score(3);
    y.add_score(4);
    y.add_score(6);
    y.display();  // Should display "Name: Evan, Average: 4.33333"

    for(int i = 1; i <= 20; ++i){
        // Even though I attempt to add twenty scores of 1, only the first seven should get recorded.
        // The last thirteen should silently be discarded.
        y.add_score(1);
    }
    y.display(); // Should display "Name: Evan, Average: 2" (exactly 2!)

    return 0;
}

Student::Student() {
	name = "?";
	num_submitted=0;
}

Student::Student(string s) {
	name = s;
    num_submitted=0;
}

void Student::add_score(int num){
    if(num < 10 && num_submitted<10){
        scores[num_submitted] = num;
        num_submitted+=1;
    }
    else{
        cout << "Can't input score" << endl;;
    } 
}

double Student::average() const{
    double temp=0;
    if(num_submitted == 0){
        return 0;
    }
    else{
        for(int i = 0; i< num_submitted; ++i){
                temp+=scores[i];
        }
        return temp/num_submitted;
    }
}

void Student::display() const{
    double x = this->average();
    cout << "Name: " << name << " ";
    cout << "Average: " << x << endl;
}