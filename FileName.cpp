#include <iostream>
#include <string>

using namespace std;

void str(string str1, string str2) 
{
    string str3 = '('+str2+')';
    size_t begin(str1.find(str2));
    while (begin != string::npos) 
    {
        str1.replace(begin, str2.length(), str3);
        begin = str1.find(str2, begin + str3.length());
    }
    cout << str1;

}

int main()
{
    str("abaracadab", "ab");
}