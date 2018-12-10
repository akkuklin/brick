#include <iostream>
using namespace std;

int main() {
    int a, b, c, n, m, x;
    cout << "Введите длину окна: ";
    cin >> m;
    cout << "Введите ширину окна: ";
    cin >> n;
    cout << "Введите длину кирпича: ";
    cin >> a;
    cout << "Введите ширину кирпича: ";
    cin >> b;
    cout << "Введите высоту кирпича: ";
    cin >> c;
    if (a > b){
        x = b;
        b = a;
        a = x;
    }
    if (b > c){
        x = c;
        c = b;
        b = x;
    }
    if (a > b){
        x = b;
        b = a;
        a = x;
    }
    if (n > m){
        x = n;
        n = m;
        m = x;
    }
    if (a <= n && b <= m){
        cout << "Кирпич поместится";
    }
    else
        cout << "Кирпич не поместится";
    return 0;
}