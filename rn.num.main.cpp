#include<iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

int main() 
{
    int randomNum;

    srand(time(0));
    randomNum = rand() % 36;
    cout << randomNum << endl;
}