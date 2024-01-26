#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

using std::cout; using std::cin; using std::endl; using std::string;
// Justin Jiang

class Rational{
private:
    long long num;
    long long den; 
    long long gcf();

public:
    Rational(int a, int b): num{a}, den{b} {}
    Rational(int n): num{n}, den{1} {}
    Rational(): num{0}, den{1} {}
    
    void reduce();

    Rational operator+=(const Rational &x);
    Rational operator-=(const Rational &x);
    Rational operator*=(const Rational &x);
    Rational operator/=(const Rational &x);

    friend Rational operator+(const Rational &x, const Rational &y);
    friend Rational operator-(const Rational &x, const Rational &y);
    friend Rational operator*(const Rational &x, const Rational &y);
    friend Rational operator/(const Rational &x, const Rational &y);

    friend bool operator==(const Rational &x, const Rational &y);
    friend bool operator!=(const Rational &x, const Rational &y);
    friend bool operator>=(const Rational &x, const Rational &y);
    friend bool operator<=(const Rational &x, const Rational &y);
    friend bool operator>(const Rational &x, const Rational &y);
    friend bool operator<(const Rational &x, const Rational &y);

    friend std::ostream& operator<<(std::ostream &x, const Rational &y);
    friend std::istream& operator>>(std::istream &x, Rational &y);
    
};

# endif