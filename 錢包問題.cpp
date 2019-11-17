#include <iostream>
using namespace std;

int main() {
float cash = 0;

cout <<"請輸入價值";
cin >> cash;

cash = cash * 10;


int cashI = cash;

int i = 1;

do {
    
    if (cashI >= 10000) {
        for (; cashI / (i * 10000) >= 1; i++) {
        }

        cashI = cashI - 10000 * (i - 1);
        cout << "千元" << i - 1 << "\n";
    }else if (cashI >= 1000) {
        int i = 1;
        for (; cashI / (i * 1000) >= 1; i++) {
        }

        cashI = cashI - 1000 * (i - 1);
        cout << "百元" << i - 1 << "\n";
    }else if (cashI >= 100) {
        int i = 1;
        for (; cashI / (i * 100) >= 1; i++) {
        }

        cashI = cashI - 100 * (i - 1);
        cout << "十元" << i - 1 << "\n";
        
    }else if (cashI >= 10) {
        int i = 1;
        for (; cashI / (i * 10) >= 1; i++) {
        }

        cashI = cashI - 10 * (i-1);
        cout << "一元" << i - 1 << "\n";
    }else if (cashI < 10 && cashI >=5) {
        int i = 1;
        for (; cashI / (i * 5) >= 1; i++) {
        }

        cashI = cashI - 5*(i - 1);
        cout << "五角" << i - 1 << "\n";
    }else {
        int i = 1;
        for (; cashI / i >= 1; i++) {
        }

        cashI = cashI - (i - 1);
        cout << "一角" << i - 1; 
    }

}while (cashI > 0);


}
