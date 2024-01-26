#include "rational.h"
#include <iostream>

using std::cout; using std::cin; using std::endl; using std::string;
// Justin Jiang

long long Rational::gcf(){
    long  long y = std::abs(num);
    long long x = std::abs(den);
    while (y!=0) {
        long long temp = y;
    y = x % y;
    x = temp;
    }
    return x;
}

void Rational::reduce(){
    if(den == -1){
        den *= -1;
        num *= -1;
    }
    long long temp = gcf();
    den /= temp;
    num /= temp;
}

Rational Rational::operator+=(const Rational &x){
    long long temp = (this->den) * x.den;
    (this->num) = (this->num)*x.den;
    long long xtemp = x.num * (this->den);
    (this->num)+=xtemp;
    (this->den)=temp;
    this->reduce();
    return *this;
}

Rational Rational::operator-=(const Rational &x){
    long long temp = (this->den) * x.den;
    (this->num) = (this->num)*x.den;
    long long xtemp = x.num * (this->den);
    (this->num)-=xtemp;
    (this->den)=temp;
    this->reduce();
    return *this;
}

Rational Rational::operator*=(const Rational &x){
    this->den *= x.den;
    this->num *= x.num;
    this-> reduce();
    return *this;
}

Rational Rational::operator/=(const Rational &x){
    this->den = x.den*(this->num);
    this->num /= x.num*(this->den);
    this-> reduce();
    return *this;
}

std::ostream& operator<<(std::ostream &x, const Rational &y){
    x << y.num << " / " << y.den;
    return x;
}

std::istream& operator>>(std::istream &x, Rational &y){
    char dump_d;
    x >> y.num >> dump_d >> y.den;
    return x;
}

Rational operator+(const Rational &x, const Rational &y){
    long long dent = x.den * y.den;
    long long numt = x.num * y.den + y.num * x.den;
    Rational add(numt, dent);
    add.reduce();
    return add;
}

Rational operator-(const Rational &x, const Rational &y){
    long long dent = x.den * y.den;
    long long numt = x.num * y.den - y.num * x.den;
    Rational subtract(numt, dent);
    subtract.reduce();
    return subtract;
}

Rational operator*(const Rational &x, const Rational &y){
    long long dent = x.den*y.den;
    long long numt = x.num*y.num;
    Rational multiply(numt, dent);
    multiply.reduce();
    return multiply; 
}

Rational operator/(const Rational &x, const Rational &y){
    long long dent = x.den*y.num;
    long long numt = x.num*y.den;
    Rational divide(numt, dent);
    divide.reduce();
    return divide; 
}

bool operator==(const Rational &x, const Rational &y){
    double xt = (double) x.num/x.den;
    double yt = (double) y.num/y.den;
    return (xt==yt);
}

bool operator!=(const Rational &x, const Rational &y){
    double xt = (double) x.num/x.den;
    double yt = (double) y.num/y.den;
    return (xt!=yt);
}

bool operator>=(const Rational &x, const Rational &y){
    double xt = (double) x.num/x.den;
    double yt = (double) y.num/y.den;
    return (xt>=yt);
}

bool operator<=(const Rational &x, const Rational &y){
    double xt = (double) x.num/x.den;
    double yt = (double) y.num/y.den;
    return (xt<=yt);
}

bool operator<(const Rational &x, const Rational &y){
    double xt = (double) x.num/x.den;
    double yt = (double) y.num/y.den;
    return (xt<yt);
}

bool operator>(const Rational &x, const Rational &y){
    double xt = (double) x.num/x.den;
    double yt = (double) y.num/y.den;
    return (xt>yt);
}