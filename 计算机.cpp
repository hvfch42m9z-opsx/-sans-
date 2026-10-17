#include <iostream>
using namespace std;
int main(){ //明天改报错
    cout <<"你要使用什么运算？" <<endl;
    int wj = 0;
    cin >> wj;
    if(wj == '+'){
    int xp = 0;
    cout << "第一个数" <<endl;
    cin >> xp;
    int sans = 0;
    cout <<"第二个数" <<endl;
    cin >> sans;
    cout << xp += sans << endl;
    }
    else if (wj == '-'){
    int xp = 0;
    cout << "第一个数" <<endl;
    cin >> xp;
    int sans = 0;
    cout <<"第二个数" <<endl;
    cin >> sans;
    cout << xp -= sans << endl;
    }
    else if (wj =='*'){
    int xp = 0;
    cout << "第一个数" <<endl;
    cin >> xp;
    int sans = 0;
    cout <<"第二个数" <<endl;
    cin >> sans;
    cout << xp *= sans << endl;
    }
    else if (wj =='%'){
    int xp = 0;
    cout << "第一个数" <<endl;
    cin >> xp;
    int sans = 0;
    cout <<"第二个数" <<endl;
    cin >> sans;
    cout << xp %= sans << endl;
    }
    return 0;
}