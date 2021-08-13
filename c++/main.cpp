//
//  main.cpp
//  c++
//
//  Created by mac on 12/08/2021.
//

#include<iostream>
using namespace std;

class Shape {
public:
    virtual int GetAre() = 0;
    virtual int setAre() = 0;
};
class Rectangle : public Shape {
private:
    int dai;
    int rong;
public:
    Rectangle(int dai,int rong){
        this -> dai = dai;
        this -> rong = rong;
    }
    int setdai() {
        return dai;
    }
    int setrong() {
        return rong;
    }
    int GetAre() {
        return dai * rong;
    }
    int setAre() {
        return (dai + rong) * 2;
    }
};
class Circle : public Shape {
private:
    double d;
public:
    Circle(int d){
        this -> d = d;
    }
    int setD(){
        return d;
    }
    int  GetAre() {
        return d * d * 3.14;
    }
    int setAre() {
        return d * 2 * 3.14;
    }
};
int main() {
    int dai,rong,d;
    cin >> dai >> rong;
    cin >> d;
    Rectangle x(dai,rong);
    Circle y(d);
    cout << "dien tich rectangle: " << x.GetAre() << " chu vi: " << x.setAre() << endl;
    cout << "dien tich: " << y.GetAre() << " chu vi: " << y.setAre() << endl;
    return 0;
    
}
