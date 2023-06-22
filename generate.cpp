#include <iostream>
#include <fstream>
using namespace std;

const int MAX = 100000;

void CPP()
{
    ofstream file("main.cpp");
    file << "#include<iostream>\n";
    file << "using namespace std;\n";
    file << "int main()\n";
    file << "{\n";
    file << "   int n;\n";
    string a = "input number between 1 and " + to_string(MAX);
    file << "   cout << \"" << a << "\" << endl;\n";
    file << "   cin >> n;\n";
    for (int i = 1; i <= MAX; i++)
    {
        file << "   " << (i == 1 ? "" : "else ") << "if(n == " << i << ")\n";
        file << "   {\n";
        file << "       cout << \"" << i << " is " << (i % 2 == 0 ? "even" : "odd") << "\";\n";
        file << "   }\n";
    }
    file << "   else\n";
    file << "   {\n";
    file << "       cout << \"invalid input\";\n";
    file << "   }\n";
    file << "   return 0;\n";
    file << "}\n";
    file.close();
}
void JS()
{
    ofstream file("main.js");
    file << "function evenOddChecker(n)\n";
    file << "{\n";
    file << "   if(n >= 1 && n <= " << MAX << ")\n";
    file << "   {\n";
    for (int i = 1; i <= MAX; i++)
    {
        file << "       " << (i == 1 ? "" : "else ") << "if(n == " << i << ")\n";
        file << "       {\n";
        file << "           console.log(\"" << i << " is " << (i % 2 == 0 ? "even" : "odd") << "\");\n";
        file << "       }\n";
    }
    file << "   }\n";
    file << "   else\n";
    file << "   {\n";
    file << "       console.log(\"invalid input\");\n";
    file << "   }\n";
    file << "}\n";
    file << "evenOddChecker(1);\n";
    file.close();
}

void Python()
{
    ofstream file("main.py");
    file << "n = input(\"" <<  "input number between 1 and " + to_string(MAX) <<"\")\n";
    for (int i = 1; i <= MAX; i++)
    {
        file << "" << (i == 1 ? "if " : "elif ") << "n == " << i << ":\n";
        file << "    print(\"" << i << " is " << (i % 2 == 0 ? "even" : "odd") << "\")\n";
    }
    file << "else:\n";
    file << "    print(\"invalid input\")\n";
    file.close();
}


int main()
{
    CPP();
    JS();
    Python();
    return 0;
}
