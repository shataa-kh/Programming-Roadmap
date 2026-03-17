#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int GetRandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

char GetRandomCharacter()
{
    return (char)GetRandomNumber(65, 90);
}

string GenerateWord()
{
    string Word = "";

    for (int i = 1; i <= 4; i++)
    {
        Word = Word + GetRandomCharacter();
    }

    return Word;
}

string GenerateKey()
{
    string Key = "";

    for (int i = 1; i <= 4; i++)
    {
        Key = Key + GenerateWord();
        if (i < 4)
            Key = Key + "-";
    }
    return Key;
}

int main()
{
    srand((unsigned)time(NULL));

    int NumberOfKeys = ReadPositiveNumber("Please enter how many keys you want to generate:");

    for (int i = 1; i <= NumberOfKeys; i++)
    {
        cout << "Key [" << i << "] : " << GenerateKey() << endl;
    }

    return 0;
}