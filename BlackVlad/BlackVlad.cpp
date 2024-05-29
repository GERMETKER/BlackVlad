#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>
void AddNames();
void AddCounts();
void AddPrises();
void PrintAll();
void Menu();
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));
    Menu();
}
void Menu()
{
    int choose;
    std::cout << "Выберите: в какой файл заполнять информацию?\n1 - Название товара \n2 - Количество \n3 - Цена \n4 - Вывести все данные\n";
    std::cin >> choose;
    if (choose == 1)
    {
        AddNames();
    }
    else if (choose == 2)
    {
        AddCounts();
    }
    else if (choose == 3)
    {
        AddPrises();
    }
    else if (choose == 4)
    {
        PrintAll();
    }
}

void AddNames()
{
    std::ifstream Name;
    Name.open("Names.txt");
    if (!Name.is_open())
    {
        std::cerr << "Error\n";
    }
    else
    {
        std::cout << "Open\n";
        std::string stroka;
        int some = 0;
        while (!Name.eof())
        {
            stroka = "";
            std::getline(Name, stroka);
            if (stroka != "")
            {
                some++;
            }
        }
        if (some > 0)
        {
            int answ = 0;
            std::cout << "Файл уже чем-то заполнен. Пропустить зполнение файла?\n1 - Да \n2 - Нет \n";
            std::cin >> answ;
            if (answ == 1)
            {
                Menu();
            }
        }
        std::ofstream Name2;
        Name2.open("Names.txt");
        int schet;
        while (true)
        {
            std::string answer;
            std::cin.ignore(32000, '\n');
            std::cout << "Введите имя товара:\n";
            std::getline(std::cin, answer, '\n');
            Name2 << answer << "\n";
            std::cout << "Хотите ввести название следующего товара?\n1 - да\n 2 - Нет\n";
            std::cin >> schet;
            if (schet == 2)
            {
                break;
            }
        }
        Name2.close();
    }
    Name.close();
    Menu();
}
void AddCounts()
{
    std::ifstream Count;
    Count.open("Counts.txt");
    if (!Count.is_open())
    {
        std::cerr << "Error\n";
    }
    else
    {
        std::cout << "Open\n";
        std::string stroka;
        int some = 0;
        while (!Count.eof())
        {
            stroka = "";
            std::getline(Count, stroka);
            if (stroka != "")
            {
                some++;
            }
        }
        if (some > 0)
        {
            int answ = 0;
            std::cout << "Файл уже чем-то заполнен. Пропустить зполнение файла?\n1 - Да \n2 - Нет \n";
            std::cin >> answ;
            if (answ == 1)
            {
                Menu();
            }
        }
        std::ofstream Count2;
        Count2.open("Counts.txt");
        int schet;
        while (true)
        {
            int answer;
            std::cout << "Введите имя товара:\n";
            std::cin >> answer;
            Count2 << answer << "\n";
            std::cout << "Хотите ввести количество следующего товара?\n1 - да\n 2 - Нет\n";
            std::cin >> schet;
            if (schet == 2)
            {
                break;
            }
        }
        Count2.close();
    }
    Count.close();
    Menu();
}
void AddPrises()
{
    std::ifstream Prise;
    Prise.open("Prises.txt");
    if (!Prise.is_open())
    {
        std::cerr << "Error\n";
    }
    else
    {
        std::cout << "Open\n";
        std::string stroka;
        int some = 0;
        while (!Prise.eof())
        {
            stroka = "";
            std::getline(Prise, stroka);
            if (stroka != "")
            {
                some++;
            }
        }
        if (some > 0)
        {
            int answ = 0;
            std::cout << "Файл уже чем-то заполнен. Пропустить зполнение файла?\n1 - Да \n2 - Нет \n";
            std::cin >> answ;
            if (answ == 1)
            {
                Menu();
            }
        }
        std::ofstream Prise2;
        Prise2.open("Prises.txt");
        int schet;
        while (true)
        {
            double answer;
            std::cout << "Введите имя товара:\n";
            std::cin >> answer;
            Prise2 << answer << "\n";
            std::cout << "Хотите ввести цену следующего товара?\n1 - да\n 2 - Нет\n";
            std::cin >> schet;
            if (schet == 2)
            {
                break;
            }
        }
        Prise2.close();
    }
    Prise.close();
    Menu();
}
void PrintAll()
{
    std::ofstream tabl;
    tabl.open("Exel.txt");
    std::ifstream prName;
    std::ifstream prCount;
    std::ifstream prPrise;
    prName.open("Names.txt");
    prCount.open("Counts.txt");
    prPrise.open("Prises.txt");
    int id = 1;
    while (!prName.eof())
    {
        
    }
}
