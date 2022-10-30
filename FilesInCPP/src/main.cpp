#include <iostream>
#include <vector>
// Inlcude this for File Operations
#include <fstream>

using namespace std;

int main() {
    /*
    There are three classes in the fstream library
    1. ofstream: Creates and writes to files
    2. ifstream: Reads from files
    3. fstream: A combination of ofstream and ifstream: creates, reads, and writes to files
    */
    ofstream OpenFile("test.txt");

    OpenFile << "This is test data inserted into the text file.\nThis is a second line\n";

    OpenFile.close();

    // Read the file line by line and store in variable
    string text;
    ifstream ReadingFile("test.txt");
    while(getline(ReadingFile, text)) {
        cout << text << "\n";
    }

    ReadingFile.close();

    return 0;
}
