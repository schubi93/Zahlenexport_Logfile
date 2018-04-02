#include <iostream>
#include <fstream>
#include <string.h>
#include <string>

using namespace std;

int main()
{
    string line;
    ifstream eingabe("eingabe.txt");
    size_t found = string::npos;

    int i = 0;  //Nummer Testdurchlauf
    int m = 0;	//Zeilenumbruch

    if (!eingabe.is_open())
    {
        cout << "Eingabe-Datei Fehler!\n";
        cin.get();
        return 0;
    }


    ofstream logmatrix("Zahlenmatrix.txt");
    ofstream logzahlen("Zahlenliste.csv");

    while (getline(eingabe, line))
    {
        found = string::npos;
        found = line.find("Picture RxEx_ins_uni");
        if (found != string::npos)
        {
            line[found + 9] = '0';
        }


        found = string::npos;
        found = line.find("Picture RxE");
        if (found == string::npos)
        {
            found = line.find("Picture end_inst");
        }

        if (i <= 21 && found != string::npos)
        {
            if (i <= 20)
            {
                logzahlen << "\n--------------" << i + 1 << "-------------\n";
                logmatrix << "\n\n--------------" << i + 1 << "-------------\n";
            }

            if (i != 0)
            {
                logmatrix << "\n";
                line = "";
            }
            i++;
        }


        found = string::npos;
        found = line.find("Response");	//Prüfung auf Eingabe
        if (found != string::npos && (line[found + 10] != '0')) //Auslesen der Eingabe
        {
            logzahlen << line[found + 9] << ";";
            logmatrix << line[found + 9] << "  |  ";
            m++;
            if (m == 10)
            {
                logmatrix << "\n";
                m = 0;
            }
        }
    }

    //Dateiverwaltun schliessen
    eingabe.close();
    logzahlen.close();
    logmatrix.close();

    cout << "Programmablauf erfolgreich.\n";
    cin.get();//Beenden durch Taste
    return 0;//Programmende
}
