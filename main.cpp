#include "prd.h"
#include <thread>
#include <functional>
#include <iostream>
#include <vector>

using namespace std;
void clear() {
    std::cout << "\x1B[2J\x1B[H";
}
//template<typename T>
void stop(){
    //T i;
    std::cout<<"Press any key to continue...";
    cin.ignore();
    cin.get();
}
void f0(sot s){}
void f1(sot s){
    string nm;
    cout << "Enter the employee's name: "; cin >> nm;
    s.chnm(nm);
}
void f2(sot s){
    string dl;
    cout << "Enter the employee's position: "; cin >> dl;
    s.chdl(dl);
}
void f3(sot s){
    int zp;
    cout << "Enter the employee's salary: "; cin >> zp;
    s.chzp(zp);
}
std::vector<std::function<void (sot)>> f = {f0, f1, f2, f3};
prd P;
void F0(){}
void F1(){

    string nm;
    cout << "Enter a department name: ";
    cin >> nm;
    otd o(nm);
    P.ado(o);
}
void F2(){

    int zp, ido;
    string nm;
    string dl;
    cout << "Enter the department id: "; cin >> ido;
    cout << "Enter the employee's name: "; cin >> nm;
    cout << "Enter the employee's position: "; cin >> dl;
    cout << "Enter the employee's salary: "; cin >> zp;
    sot s(nm, dl, zp);
    P.ads(ido, s);
}
void F3(){
    int i, ido, ids;
    cout << "Enter the department id: "; cin >> ido;
    cout << "Enter the employee's id: "; cin >> ids;
    sot s = P.fns(ido, ids);
    cout << "What do you want to change?\n1)The employee's name\n2)The employee's position\n3)The employee's salary\n0)Exit\n";
    cin >> i;
    if ((i>=0)&& (i<=3)){
        system("cls");
        f[i](s);
    } else{
        cout << "You entered an incorrect number";
    }
}


void F4(){
    cout << P;
    stop();
}
void F5(){
    P.pra();
    stop();
}
void F6(){}
void F7(){}
void F8(){}
std::vector<std::function<void()>> F= {F0, F1, F2, F3, F4, F5, F6, F7, F8};
int main(){


    int i=1;
    while (i!=0){
        clear();
        cout << "1)Add a department\n2)Add an employee\n3)Edit an employee\n4)Print all departments\n5)Print all employees in the department\n6)Search for an employee\n7)Delete a department\n8)Delete a employee\n0)Exit\n";
        cin >> i;
        if ((i>=0)&& (i<=8)){
            clear();
            F[i]();
        } else{
            cout << "You entered an incorrect number";
        }
    }
};
/* Добавить отдел
 * Добавить сотрудника
 * Редактировать сотрудника
 * Вывести список всех отделов
 * Высвести всех людей в отпределенном отделе
 * Вычислить человека по чему-нибудь
 * Удалить отдел
 * Удалить сотрудника
 */
