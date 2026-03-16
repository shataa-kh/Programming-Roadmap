#include <iostream>
#include <string>

using namespace std;

string ReadName()
{
    string Name = "";
    cout << "Please enter your first name : " << endl;
    getline(cin, Name);
    return Name;
}

string EncryptText(string Name)
{
    for (int i = 0; i < Name.length(); i++)
    {
        Name[i] = Name[i] + 2;
    }
    return Name;
}

string DecryptText(string Name)
{
    for (int i = 0; i < Name.length(); i++)
    {
        Name[i] = Name[i] -2;
    }
    return Name;
}

int main()
{

    string Name = ReadName();
    
    string NameAfterEncryption = EncryptText(Name);
    string NameAfterDecryption = DecryptText(NameAfterEncryption);

    cout << "\nText before Encryption: " << Name << endl;
    cout << "Text after Encryption : " << NameAfterEncryption << endl;
    cout << "Text after Decryption : " << NameAfterDecryption << endl;
    
    return 0;
}