#include <iostream>
using namespace std;
int main()
{

    // Lecture 04 Q# 01
    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A';
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << ch;
    //         ch += 1;
    //     }
    //     cout << endl;
    // }

    // Lecture 04 Q# 02
    // int n = 3;
    // int val = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << val;
    //         val++;
    //     }
    //     cout << endl;
    // }
    // return 0;

    // Lecture 04 Q#03
    // int n = 3;
    // char ch = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << ch;
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // // Lecture 04 Q#04
    // int n = 3;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // Lecture 04 Q#05
    // int n = 3;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << i + 1;
    //     }
    //     cout << endl;
    // }

    // Lecture 04 Q#06
    int n = 4;
    char ch = 65;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch;
        }
        ch++;
        cout << endl;
    }
}