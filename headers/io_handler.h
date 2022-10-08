#include <iostream>

#include <string>

#include <fstream>
using namespace std;

// Read from file and return as string
string fileReader(string fileName)
{
    string result = "";

    try
    {
        ifstream readFile;
        readFile.open(fileName, ios::in);

        char currentChar;

        while (!readFile.eof())
        {
            currentChar = readFile.get();
            if (currentChar == '\n')
                break;

            result += currentChar;
        }

        readFile.close();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return result;
}

// write on file

void fileWriter(string fileName, string encryptedMessage)
{
    try
    {
        ofstream writeOnFile;

        writeOnFile.open(fileName, ios::out);

        writeOnFile << encryptedMessage;

        writeOnFile.close();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}
