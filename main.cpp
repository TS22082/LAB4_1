//
//  main.cpp
//  _1_sphereVolumeAreaCalc
//
//  Created by Thomas Smith on 5/2/17.
//  Copyright © 2017 ts22082. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <memory>
using namespace std;

//funtion for spacing between data in console
void dblBrk();

//class to create, show, and calculate elements of a sphere 
class Sphere{
    private:
        double x;
        double y;
        double z;
        double radius;
    
    public:
        void setX(double);
        void setY(double);
        void setZ(double);
        void setRadius(double);
    
        double showX() const;
        double showY() const;
        double showZ() const;
        double showRadius() const;
    
        double showVolume() const;
        double showSurfaceArea() const;
};



int main() {
    
    unique_ptr<Sphere> sphere(new Sphere);
    
    sphere -> setX(4);
    sphere -> setY(4);
    sphere -> setZ(4);
    sphere -> setRadius(4);
    
    cout << "Sphere X: " << sphere -> showX() << endl;
    cout << "Sphere Y: " << sphere -> showY() << endl;
    cout << "Sphere Z: " << sphere -> showZ() << endl;
    cout << "Sphere radius: " << sphere -> showRadius();
    dblBrk();
    
    cout << "The volume of the sphere is: " << sphere -> showVolume() << endl;
    cout << "The surface area of the sphere is: " << sphere -> showSurfaceArea();
    dblBrk();
}

// functions to set X, Y, Z and radius
void Sphere::setX(double xIn){
    x = xIn;
}
void Sphere::setY(double yIn){
    y = yIn;
}
void Sphere::setZ(double zIn){
    z = zIn;
}
void Sphere::setRadius(double rIn){
    radius = rIn;
}

// functions to show X, Y, Z and radius
double Sphere::showX() const{
    return x;
}
double Sphere::showY() const{
    return y;
}
double Sphere::showZ() const{
    return z;
}
double Sphere::showRadius() const{
    return radius;
}

// functions for showSurfaceArea, and showVolume
double Sphere::showVolume() const {
    
    return (4 * 3.14) * (pow(radius, 3)) / 3;
}
double Sphere::showSurfaceArea() const {
    
    return (4 * 3.14) * (pow(radius, 2));
}

void dblBrk(){
    cout << endl << endl;
}

