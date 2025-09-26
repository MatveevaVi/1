#include <iostream>
using namespace std;

int main() {
    int textChoice, bgChoice;
    cout << "Выберите цвет текста:\n";
    cout << "1 - красный\n2 - зеленый\n3 - синий\n";
    cin >> textChoice;

    cout << "Выберите цвет фона:\n";
    cout << "1 - красный\n2 - желтый\n3 - белый\n";
    cin >> bgChoice;
    string textColor, bgColor;

    if (textChoice == 1) textColor = "31"; 
    else if (textChoice == 2) textColor = "32"; 
    else if (textChoice == 3) textColor = "34"; 

    if (bgChoice == 1) bgColor = "41"; 
    else if (bgChoice == 2) bgColor = "43"; 
    else if (bgChoice == 3) bgColor = "47"; 

    string code = "\033[" + textColor + ";" + bgColor + "m";
    cout << code;
    cout << "куку";
    return 0;
}
