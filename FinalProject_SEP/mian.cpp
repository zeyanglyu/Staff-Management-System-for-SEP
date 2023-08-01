#include <iostream>
#include <vector>
#include <string>
#include "login.h"
#include "Database.h"
using namespace std;
string mode;
int main() 
{
    Initialize();
    while (1) 
    {
        cout << "please select the mode\n 1.Login 2.Exit\n";
        cin >> mode;
        if (mode == "Login")
            log_in();
        else if (mode == "Exit")
            break;
        else
        {
            cout << "wrong command try again" << endl;
            exit;
        }
    }

    return 0;
}