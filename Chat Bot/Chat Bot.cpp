#include <iostream>
#include <string>
#include <Windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand(time(NULL));

    string rep[] = {
        "Я не знаю данной команды",
        "Команда не распознана",
        "Можете уточнить ваш запрос?",
        "Не понимаю, что вы имеете в виду",
        "Это выше моих возможностей"
    };

    while (true) {
        string message = "";
        cout << "Введите команду: " << endl;
        getline(cin, message);
        int indexRandom = rand() % size(rep);

        if (message == "Привет") {
            cout << "Привет, кожанный мешок" << endl;
        }
        else if (message == "Пока") {
            cout << "Пока!" << endl;
            break;
        }
        else {
            cout << rep[indexRandom] << endl;
        }
    }

    return 0;
}
