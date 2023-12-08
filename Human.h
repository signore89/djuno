

#ifndef PERSON_S_AGE_HUMAN_H
#define PERSON_S_AGE_HUMAN_H

#include "iostream"
#include "string"


using namespace std;

struct Human {
private:
    string surname;
    string name;
    string patronymic;
public:
    short age = 0;

    Human(string surname_duplicate, string name_duplicate, string patronymic_duplicate) {
        surname = surname_duplicate;
        name = name_duplicate;
        patronymic = patronymic_duplicate;
    }


    string GetSurname() {
        return surname;
    }

    string GetName() {
        return name;
    }

    string GetPatronymic() {
        return patronymic;
    }

    string Print() {
        return GetSurname() + " " + GetName() + " " + GetPatronymic() + " " +
                to_string(age) + "\n";
    }

    ~Human() = default;
};


#endif //PERSON_S_AGE_HUMAN_H
