#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void writeToFile(const string &filename, const string &content)
{
    ofstream file(filename);
    if (file.is_open())
    {
        file << content;
        file.close();
        cout << "Content written to file successfully." << endl;
    }
    else
    {
        cout << "Unable to open file for writing." << endl;
    }
}

void displayFileContent(const string &filename)
{
    ifstream file(filename);
    string line;
    if (file.is_open())
    {
        cout << "Content of" << filename << ":" << endl;
        while (getline(file, line))
        {
            cout << line << endl;
        }
        file.close();
    }
    else
    {
        cout << "Unable to open file for reading." << endl;
    }
}
int main()
{
    string filename = "test.txt";
    string content = "I love OOPs";
    writeToFile(filename, content);
    displayFileContent(filename);
    return 0;
}