#include <iostream>
#include <cmath>
#include "Vector2.h"

Vector2::Vector2(): x(0.0), y (0.0) {};
Vector2::Vector2(double _x, double _y): x(_x), y (_y) {};

void Vector2::setX(double _x){
    x = _x;
}
void Vector2::setY(double _y){
    y = _y;
}

double Vector2::getX(){
    return x;
}
double Vector2::getY(){
    return y;
}

double Vector2::getR(){
    return std::sqrt(x*x + y*y);
}

double Vector2::getPhi(){
    return std::atan2(y, x);
}
double Vector2::getA() {
    return std::atan2(y, x)*180/3.1415;
}

Vector2 Vector2::operator+(const Vector2& vector) const{
    return Vector2(x + vector.x, y + vector.y);
}
Vector2 Vector2::operator-(const Vector2& vector) const{
    return Vector2(x - vector.x, y - vector.y);
}
Vector2 Vector2::operator*(const double & b) const{
    return Vector2(x * b, y * b);
}
Vector2 Vector2::operator/(const double& b) const {
    return Vector2(x / b, y / b);
}
double Vector2::operator*(const Vector2& vector) const{
    return (x*vector.x + y*vector.y);
}

double Vector2::operator&(const Vector2& vector) const{ //
    return acos((x*vector.x + y*vector.y)/(sqrt(x*x + y*y)*sqrt(vector.x*vector.x + vector.y*vector.y)))
}
bool Vector2::operator==(const Vector2& vector) const{
    return ( x == vector.x && y == vector.y);
}
bool Vector2::operator!=(const Vector2& vector) const{
    return ( x != vector.x || y != vector.y);
}

Vector2 Vector2::getPolar(){
    auto Phi = getA();
    auto R = getR();
    return Vector2(x = R,y = Phi);
}
Vector2 Vector2::getNorm(){
    auto R = getR();
    return Vector2(x = x/R, y = y/R);
}
Vector2 Vector2::changePhi(double a){
    auto Phi = getA();
    auto R = getR();
    return Vector2(x = R,y = Phi*a );
}
Vector2 Vector2::changeR(double a){
    auto Phi = getA();
    auto R = getR();
    return Vector2(x = R*a,y = Phi);
}


