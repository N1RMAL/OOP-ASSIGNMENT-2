#include <iostream>
#include <string.h>
using std::cin;
using std::cout; 

int max=0,min=1000000,num,i,arr[100];

void MAX(int *a)
{
    if(*a > max)
    max = *a;
}

void MIN(int *b)
{
    if(*b < min)
    min = *b;
}

int main()
{
    cout << "Enter the total number of students:\n";
    cin >> num;
    cout << "Enter the marks of the students:\n";
    
    for(i=0; i<num; i++)
    {
        cin >> arr[i];
    }
    
     for(i=0; i<num; i++)
     {
          MAX(&arr[i]);
          MIN(&arr[i]);
     }
     cout << "The highest marks achieved was " << max << "\n";
     cout << "The lowest marks achieved was " << min << "\n";
}
