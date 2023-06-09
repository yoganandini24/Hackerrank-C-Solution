/*

You are given two strings a and b separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

Output Format

In the first line print two space-separated integers, representing the length of  and  respectively.
In the second line print the string produced by concatenating  and  ().
In the third line print two strings separated by a space,  and .  and  are the same as  and , respectively, except that their first characters are swapped.*/
#include <iostream>
#include <string>
using namespace std;


int main() {
	string a, b;
    cin >> a;
    cin >> b;

    // calculate size
    const int size_a = a.size();
    const int size_b = b.size();

    // concatenate
    const string conate_a_b = a + b;

    // swap
    const char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    // Output
    cout << size_a << " " << size_b << endl;
    cout << conate_a_b << endl;
    cout << a << " " << b << endl;

    return 0;
}
