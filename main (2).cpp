#include <iostream>
#include <string.h>
using namespace std;

double volCube, volSphere, volCylinder, volCone, volTotal;
double cube(double);
double sphere(double);
double cylinder(double, double);
double cone(double, double);

int main()
{
    double l, rS, rCy, rCo, hCo, hCy;
    
    cout << "Enter the length of the cube:\n";
    cin >> l;
    cube(l);
    cout << "The volume of the cube is " << volCube << "\n";
    
    cout << "Enter the radius of the sphere:\n";
    cin >> rS;
    sphere(rS);
    cout << "The volume of the sphere is " << volSphere << "\n";
    
    cout << "Enter the radius and the height of the cylinder:\n";
    cin >> rCy >> hCy;
    cylinder(rCy, hCy);
    cout << "The volume of the cylinder is " << volCylinder << "\n";
    
    cout << "Enter the radius and height of the cone:\n";
    cin >> rCo >> hCo;
    cone(rCo, hCo);
    cout << "The volume of the cone is " << volCone << "\n";
    
    volTotal = volCube + volSphere + volCylinder + volCone;
    cout << "The total volume of all the shapes are " << volTotal;
}

double cube(double l)
{
    volCube = l*l*l;
    return(volCube);
}

double sphere(double rS)
{
    volSphere = ((4*3.14*rS*rS*rS)/3);
    return(volSphere);
}

double cylinder(double rCy, double hCy)
{
    volCylinder = (3.14*rCy*rCy*hCy);
    return(volCylinder);
}
double cone(double rCo, double hCo)
{
    volCone = ((3.14*rCo*rCo*hCo)/3);
    return(volCone);
}
