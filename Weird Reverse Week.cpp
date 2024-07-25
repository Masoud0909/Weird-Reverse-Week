// Write a program that declares an array of strings, initialized to the days of the week, then prints the contents of the array in reverse
//

#include <iostream>
#include <array>
using namespace std;

void reverse(string array[]) {
    string* ptr = array;
    for (int i = 6; i >= 0; i--) {
        cout << " " << ptr[i];
    }
}

int main()
{
    string week[]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    reverse(week);
}
