#include <iostream>
#include <fstream>
#include <string.h>
#include <Windows.h>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <math.h>
#include <string>
#include <time.h>
#include <string>
#include<locale>
#include <string.h>
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;


struct man {

	string surname;
	string name;
	int age;
	int birthday;

};




int main() {

    setlocale(LC_ALL, "Russian");

    ifstream inf("in.txt");
    setlocale(LC_ALL, "");
    srand(time(NULL));
    int n = 4;
    int size = 5;

    man* immenenik = new man[size];

    for (int i = 0; i < n; i++)
    {
        inf >> immenenik[i].name >> immenenik[i].surname >> immenenik[i].age >> immenenik[i].birthday ;

    }

    cout << "Ваши контакты: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << immenenik[i].name << " " << immenenik[i].surname <<" " <<immenenik[i].age << " " << immenenik[i].birthday << endl;
    }
    cout << endl;
    cout << "Вывести всех людей на экран нажмите 5" << endl;
    cout << "Для добавления нового нажмите 2 " << endl;
    cout << "Для удаления нажмите 3" << endl;
    cout << "Для поиска по фамилии или имени нажмите 1 " << endl;
    cout << "Редактирование абонента нажмите 4" << endl;
    cout << "Для выхода нажмите 0" << endl;
    cout << endl;

    int choise = -5;
    while (choise != 0)
    {
        cin >> choise;
        switch (choise)
        {
        case 1:
        {
            cout << endl;
            cout << "Для поиска человека по имени нажмите 1" << endl;
            cout << "Для поиска абонента по фамилии нажмите 2" << endl;
            int search;
            cin >> search;
            switch (search)
            {
            case 1:
            {
                cout << endl;
                cout << "Введите имя" << endl;
                bool flag = false;
                string namesearch;
                cin >> namesearch;
                for (int i = 0; i < n; i++)
                {
                    if (namesearch == immenenik[i].name)
                    {
                        cout << immenenik[i].name << " " << immenenik[i].surname << endl;
                        flag = true;
                    }

                }
                if (flag == false)
                    cout << "Такого имени нет" << endl;
                break;
            }
            case 2:
            {
                cout << endl;
                cout << "введите фамилию" << endl;
                bool flag = false;
                string surname_search;
                cin >> surname_search;
                for (int i = 0; i < n; i++)
                {
                    if (surname_search == immenenik[i].surname) {
                        cout << immenenik[i].surname << " " << immenenik[i].name << endl;
                        flag = true;
                    }
                    if (flag == false) {
                        cout << "такой фамилии нет" << endl;
                        break;


                    }
                }
            }

            }
        }

        case 2:
        {
            n++;
            if (n < size) {
                cout << endl;
                cout << "введите имя и фамилию  " << endl;
                cin >> immenenik[n].surname >> immenenik[n].name >> immenenik[n].age >> immenenik[n].birthday;
                cout << " добавлен !" << endl;
            }
            if (n == size)
            {
                size = size * 2;
                man* temp;

                temp = new man[n - 1];

                for (int i = 0; i < n - 1; i++)
                {

                    temp[i] = immenenik[i];
                }

                delete[] immenenik;
                immenenik = new man[size];

                for (int i = 0; i < n - 1; i++)
                {

                    immenenik[i] = temp[i];
                }

                cout << endl;
                cout << "Введите имя , фамилию , возраст и дату рождения" << endl;

                cin >> immenenik[n - 1].name >> immenenik[n - 1].surname >> immenenik[n - 1].age >> immenenik[n - 1].birthday;

                cout << " добавлен !" << endl;
                delete[] temp;
            }
            break;

        }

        case 3:
        {
            bool flag2 = false;
            int numb;
            string namedelete;
            cout << "Введите имя , которое хотите удалить" << endl;
            cin >> namedelete;

            for (int i = 0; i < n; i++)
            {
                if (immenenik[i].name, immenenik[i].surname == namedelete) { n--; numb = i; flag2 = true; }

            }
            if (flag2 == true)
            {
                man* temp;

                temp = new man[n];

                for (int i = 0; i < numb; i++)
                {
                    temp[i] = immenenik[i];
                }

                for (int i = numb + 1; i < n + 1; i++)
                {
                    temp[i - 1] = immenenik[i];
                }

                for (int i = 0; i < n; i++)
                {
                    immenenik[i] = temp[i];
                }


                delete[] temp;

            }
            else
            {
                cout << "Имя не найдено" << endl;
            }
            break;
        }


        case 4: {

            cout << "Введите данные, который нужно редактировать" << endl;
            string nameredakt;
            
            bool flag2 = false;
            int num;

            for (int i = 0; i < n; i++)
            {

                if (nameredakt == immenenik[i].name) { flag2 = true; num = i; }

            }

            if (flag2 == true) {
                int choiseredakt;
                cout << endl;
                cout << "Для редактирования имени нажмите 1" << endl;
                cout << "Для редактирования фамилии  нажмите 2" << endl;
                cout << "Для редактирования возраста нажмите 3" << endl;
                cout << "Для редактирования даты рождения нажмите 4" << endl;
                cin >> choiseredakt;
                if (choiseredakt == 1)
                {
                    cout << endl;
                    cout << "Введите новое имя" << endl;
                    cin >> immenenik[num].name;
                    cout << "Имя изменено" << endl;
                }
                if (choiseredakt == 2)
                {
                    cout << endl;
                    cout << "Введите новые данные" << endl;
                    cin >> immenenik[num].surname;
                    cout << "данные  изменены" << endl;
                }

                if (choiseredakt == 3)
                {
                    cout << endl;
                    cout << "Введите новый возраст" << endl;
                    cin >> immenenik[num].name;
                    cout << "возраст изменен" << endl;
                }
                if (choiseredakt == 4)
                {
                    cout << endl;
                    cout << "Введите новую дату рождения" << endl;
                    cin >> immenenik[num].name;
                    cout << "дата рождения изменена" << endl;
                }
                else if (choiseredakt != 1 && choiseredakt != 2 && choiseredakt != 3 && choiseredakt != 4) cout << "Неправильные данные" << endl;

            }

            if (flag2 == false) cout << "Имя не найдено" << endl;



            break;
        }

        case 5:
        {
            cout << endl;
            cout << "Ваши присутствующие:" << endl;
            cout << endl;

            for (int i = 0; i < n; i++)
            {

                cout << immenenik[i].name << " " << immenenik[i].surname << " " << immenenik[i].age << " " <<immenenik[i].birthday << endl;
            }

            break;
        }

        default: cout << "Неправильно введены данные" << endl;
        }

    }
    delete[] immenenik;
    system("pause");
}
