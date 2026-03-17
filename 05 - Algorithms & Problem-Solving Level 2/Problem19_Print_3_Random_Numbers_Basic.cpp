#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int generateNumbers()
{
    return rand() % 10;
}

void printRandomSequence(int count)
{
    for (int i = 0; i < count; i++)
        cout << generateNumbers() << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    printRandomSequence(3);

    return 0;
}