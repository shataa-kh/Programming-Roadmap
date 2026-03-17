#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

enum enCharType
{
    SamllLetter = 1,
    CapitalLetter = 2,
    SpecialChar = 3,
    Digit = 4
};

int GetRandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {
    case enCharType::SamllLetter:
        return GetRandomNumber(97, 122);

    case enCharType::CapitalLetter:
        return GetRandomNumber(65, 90);

    case enCharType::SpecialChar:
        return GetRandomNumber(33, 47);

    case enCharType::Digit:
        return GetRandomNumber(48, 57);
    }

    return ' ';
}

int main()
{
    srand((unsigned)time(NULL));

    cout << GetRandomCharacter(enCharType::SamllLetter) << endl;
    cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;
    cout << GetRandomCharacter(enCharType::SpecialChar) << endl;
    cout << GetRandomCharacter(enCharType::Digit) << endl;

    return 0;
}