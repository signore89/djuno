//Задание.
//Создать структуру Человек с хранением ФИО и возраста.
// Предусмотреть невозможность редактирования ФИО.
// Предусмотреть возможность изменения возраста
// с проверкой на отрицательное и слишком большое (более 170) значение.



#include <iostream>
#include "Human.h"


short ChengAge();

Human AddPerson();

int main() {
    bool flag;
    auto *person1 = new Human(AddPerson());
    person1->age = ChengAge();
    cout << person1->Print();

    cout << " Do you want chang age?:\n 1 - yes\n 0 - no";
    cin >> flag;
    if (flag) {
        person1->age = ChengAge();
    }
    cout << person1->Print();

    delete person1;

    return 0;
}

Human AddPerson() {

    cout << "Enter surname: \n";
    string surname;
    cin >> surname;

    cout << "Enter  name : \n";
    string name;
    cin >> name;

    cout << "Enter patronymic : \n";
    string patronymic;
    cin >> patronymic;

    return {surname, name, patronymic};
}

short ChengAge() {
    cout << " Enter age: \n";
    short age;
    cin >> age;
    if (age < 0 || age > 170) {
        cout << "Error";
        return 0;
    } else return age;
}
