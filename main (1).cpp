#include <iostream>
#include <string>
using std::cin;
using std::cout; 

unsigned short s1,s2;
int i1,i2;
float f1,f2;
double d1,d2;
long double ld1,ld2;
long int li1,li2;
char c1,c2;

unsigned short shortadd(unsigned short s1, unsigned short s2)
{
    return s1 + s2;
}

int intadd(int i1, int i2)
{
    return i1 + i2;
}

float floatadd(float f1, float f2)
{
    return f1 + f2;
}

double doubleadd(double d1, double d2)
{
    return d1 + d2;
}
 
long double longdoubleadd(long double ld1, long double ld2)
{
    return ld1 + ld2;
}

long int longintadd(long int li1, long int li2)
{
    return li1 + li2;
}

char charadd(char c1, char c2)
{
    return c1 + c2;
}
int main()
{
    int j=0;
    while(j!=8)
    {
        cout << "Enter the datatypes that you would like to add:\n";
        cout << "1- SHORT\n";
        cout << "2- INT\n";
        cout << "3- FLOAT\n";
        cout << "4- DOUBLE\n";
        cout << "5- LONG DOUBLE\n";
        cout << "6- LONG INT\n";
        cout << "7- CHAR\n";
        cout << "8- EXIT\n";
        cin >> j;
        
        switch(j)
        {
            case 1:
               cout << "Enter the two values to be added\n";
               cin >> s1 >> s2; 
               system("clear");
               cout << "The sum of the two values is " << shortadd(s1,s2) << "\n \n";
               break;
               
            case 2:
               cout << "Enter the two values to be added\n";
               cin >> i1 >> i2; 
               system("clear");
               cout << "The sum of the two values is " << intadd(i1,i2) << "\n \n";
               break;  
               
            case 3:
               cout << "Enter the two values to be added\n";
               cin >> f1 >> f2; 
               system("clear");
               cout << "The sum of the two values is " << floatadd(f1,f2) << "\n \n";
               break;  
               
            case 4:
               cout << "Enter the two values to be added\n";
               cin >> d1 >> d2; 
               system("clear");
               cout << "The sum of the two values is " << doubleadd(d1,d2) << "\n \n";
               break; 
               
            case 5:
               cout << "Enter the two values to be added\n";
               cin >> ld1 >> ld2; 
               system("clear"); 
               cout << "The sum of the two values is " << longdoubleadd(ld1,ld2) << "\n \n";
               break;  
               
            case 6:
               cout << "Enter the two values to be added\n";
               cin >> li1 >> li2; 
               system("clear"); 
               cout << "The sum of the two values is " << longintadd(li1,li2) << "\n \n";
               break;
               
            case 7:
               cout << "Enter the two values to be added\n";
               cin >> c1 >> c2; 
               system("clear"); 
               cout << "The sum of the two values is " << charadd(c1,c2) << "\n \n";
               break; 
               
            default:
               exit(0);
        }
    }
}


