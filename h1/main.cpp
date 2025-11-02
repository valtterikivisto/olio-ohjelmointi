#include <iostream>
using namespace std;

void calcSum(int a, int b);
void calcDiv(int a, int b);
int retSum(int a, int b);
float retDiv(int a, int b);

int main() {
    int a, b, result;
    float divResult;
    cout << "Anna numero: " << endl;
    cin >> a;
    cout << "Anna toinen numero: " << endl;
    cin >> b;
    calcSum(a, b);
    result = retSum(a, b);
    cout << a << " + " << b << " = " << result << endl;
    try {
        divResult = retDiv(a, b);
        cout << a << " / " <<  b << " = " << divResult << endl;
    } catch (runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}


void calcSum(int a, int b)
{
    cout << a << " + " << b << " = " << a + b << endl;
}


void calcDiv(int a, int b)
{
    if (b == 0)
    {
        cout << "Nollalla ei voi jakaa!" << endl;
    }
    else
    {
        cout << a << " / " << b << " = " << a / b << endl;
    }
}


int retSum(int a, int b)
{
    return a + b;
}


float retDiv(int a, int b)
{
    if (b == 0)
    {
        throw runtime_error("Jakaja ei saa olla negatiivinen");
    }
    else
    {
        return a / b;
    }

}
