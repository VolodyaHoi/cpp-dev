#include <iostream>
#include <unistd.h>
#include <string>

using namespace std;

//int a;
int test;
string test2;

int main()
{
    cout<<"PROGRAMM 0.0.0.0.1"<<endl;

    cin >> test2;

    if(test2 == "cmdd") {
      cout << "testisfive" << endl;
      sleep(5);
      return 0;
    } else {
      cout<<"Program will be completed in 5 second"<<endl; //v2
      sleep(5);
      return 0;
    }

    //cout << "" <<endl; // finish programm v1
    //cout<<"Press any button to continue..."<<endl;
    //cin.get();

    //cout<<"Program will be completed in 5 second"<<endl; //v2
    //sleep(5);

    //return 0;
}
