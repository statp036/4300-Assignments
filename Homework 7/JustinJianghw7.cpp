#include <iostream>
#include "list.h"
#include <vector>

using namespace std;

// Question 1

// erase
void List::erase(int n){
    for(int i = n; i<num_entries-1; i++){
        listptr[i] = listptr[i+1];
    }
    num_entries--;
}

// insert
void List::insert(int n, string s){
    if(num_entries+1>=capacity){
        reserve();
    }
    for(int i = num_entries; i>n; i++){
        listptr[i] = listptr[i-1]; 
    }
    listptr[n] = s; 
    num_entries++;
}

// += operator
List& List::operator+=(const List &rhs){
    int temp = capacity;
    int j = 0;
    while(capacity < rhs.capacity + temp){
        reserve();
    }
    for(int i = num_entries; i< num_entries+rhs.num_entries; i++){
        listptr[i] = rhs.listptr[j];
        j++;
    }
    return *this;
}

// Question 2
    std::vector <string> x = {};
    bool stop = false;
    do{
        cout << "Name? ";
        string name;
        cin >> name;
        x.push_back(name);
        if(name == "STOP"){
            stop = true;
        }
    }while(stop == false);
    int duplicate = 0;
    for(int i = 0; i < x.size()-1; ++i){
        for(int j = i; j<x.size()-1;++j){
            if(x[i] == x[j] && i!=j){
                duplicate++;
            }
        }
    }
    int count = x.size()-duplicate;
    cout << (count-1);

//Question 3

// constructor
PointBag::PointBag(){
    size = 0;
    pointarr = new Point[size];
}

// += operator
PointBag& PointBag::operator+=(Point x){
    Point *temp = new Point[size+1];
    for (int idx = 0; idx < size; ++idx){
        temp[idx] = pointarr[idx];
    }
    temp[size] = x;
    delete[] pointarr;
    pointarr = temp;
    size+=1;
    return *this;
}

// diameter
double PointBag::diameter(){
    double temp=0;
    for(int i=0; i<size; ++i){
        for(int j = i; j<size; ++j){
            if(pointarr[i].distance(pointarr[j]) > temp){
                temp = pointarr[i].distance(pointarr[j]);
            }
        }
    }
    return temp;
}

// Question 4

/*

a)
IntArray x(4);  // Ctor1
IntArray y = 5; // Ctor1
IntArray z = y; // Ctor2 
x = y;  // Ctor2 Op= Dtor
for (int i = 1; i <= 3; ++i){
    IntArray zzz(2); // Ctor1 Dtor
}  

b) 
The = operator is already dangerous since there is no reference in the parameter and *this
So when x.print() is called, there is potential danger since the addresses were not being referred 
Because they are not independent, when the destructor gets called, it could have deleted or modify aspects of y affecting x

c) 
Ctar2 won't be printed when x=y is called because a reference is in the parameter so the copy constructor won't be called

d)
There is a error because elements are references so it needs to return a reference to put changes since returning an integer doesn't tell z which address needs to modify
Use int& so it can return an address. This tells z what address to modify.
5 0 0 0 

*/
