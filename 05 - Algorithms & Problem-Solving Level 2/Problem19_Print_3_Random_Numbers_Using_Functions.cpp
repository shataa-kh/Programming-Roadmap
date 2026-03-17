#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int GetRandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

int main()
{

    srand((unsigned)time(NULL));

    cout << "First Number : " << GetRandomNumber(1, 100) << endl;
    cout << "Second Number: " << GetRandomNumber(1, 100) << endl;
    cout << "Third Number : " << GetRandomNumber(1, 100) << endl;

    return 0;
}