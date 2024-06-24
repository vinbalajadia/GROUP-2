#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

int H_Q_Seq(int n);
void displayH_Q_Seq(int n);

int main(){
    int c, n;

    do{
        cout << " ----------------------------------" << endl;
        cout << "|            MENU                   |" << endl;
        cout << " -----------------------------------" << endl;
        cout << "| [1] Display Hofstadter Q-Sequence |" << endl;
        cout << "| [2] Exit                          |" << endl;
        cout << " -----------------------------------" << endl;
        cout << endl;
        cout << "Enter your choice: ";
        cin >> c;
        system("cls");

        switch(c){
            case 1:
                cout << "Enter the number of terms to generate a Hofstadter Q-Sequence: ";
                cin >> n;
                displayH_Q_Seq(n);
                break;
                system("cls");
            case 2:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please input numbers (1-2) only." << endl;
                break;
                system("cls");
        }
    }while(c != 2);
}

int H_Q_Seq(int n){
    if (n <= 2)
        return 1;

    return H_Q_Seq(n - H_Q_Seq(n - 1)) + H_Q_Seq(n - H_Q_Seq(n - 2));
}
void displayH_Q_Seq(int n){
    cout << "Hofstadter Q-Sequence up to " << n << " terms: "<< endl;
    for (int i = 1; i <=n; i++){
        cout << H_Q_Seq(i) << " ";
    }
    cout << endl;
}