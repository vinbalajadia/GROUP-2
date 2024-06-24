#include <iostream>

using namespace std;

int successor(int n);
int add(int a, int b);
int multiply(int a, int b);

int main(){
    int c, a, b;

    do{
        cout << " ------------------------------" << endl;
        cout << "|            MENU              |" << endl;
        cout << " ------------------------------" << endl;
        cout << "| [1] Successor of Number      |" << endl;
        cout << "| [2] Add Two Numbers          |" << endl;
        cout << "| [3] Multiply Two Numbers     |" << endl;
        cout << "| [4] Exit                     |" << endl;
        cout << " ------------------------------" << endl;
        cout << endl;
        cout << "Enter a choice: ";
        cin >> c;
        system("cls");

        switch(c){
            case 1: 
                cout << "Enter a number: ";
                cin >> a;
                cout << "Successor of " << a << " is " << successor(a) << endl;
                break;
                system("cls");
            case 2:
                cout << "Enter a value for a: ";
                cin >> a;
                cout << "enter a value for b: ";
                cin >> b;
                cout << a << " + " << b << " = " << add(a,b) << endl; 
                break;
                system("cls");
            case 3: 
                cout << "Enter a value for a: ";
                cin >> a;
                cout << "Enter a value for b: ";
                cin >> b;
                cout << a << " * " << b << " = " << multiply(a,b) << endl;
                break;
                system("cls");
            case 4: 
                cout << "Exiting Program...";
                break;
            default:
                cout << "Invalid choice. Please type numbers from (1-4) only." << endl;
                break;
        }
    }while(c != 4);
}

int successor(int n){
    return n + 1;
}
int add(int a, int b){
    if (b == 0)
        return a;
    else
        return successor(add(a, b - 1));
}
int multiply(int a, int b){
    if (b == 0)
        return a;
    else
        return add(a, multiply(a, b -1));
}