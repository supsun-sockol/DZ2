#include "sot.h"
#include <string>
#include <iostream>
using namespace std;
sot::sot(){
    this->id = 0;
    this->zp = 0;
    this->nm = "";
    this->dl = "";
}
sot::sot(string nm, string dl, int zp){
    this->id = 0;
    this->zp = zp;
    this->nm = nm;
    this->dl = dl;
}
void sot::chid(int id){
    this->id = id;
}
void sot::chidto(int ch){
    this->id+=ch;
}
void sot::chnm(string nm){
    this->nm =nm;
}
void sot::chdl(string dl){
    this->dl =dl;
}
void sot::chzp(int zp){
    this->zp =zp;
}
int sot::gtid(){
    return this->id;
}
int sot::gtzp(){
    return this->zp;
}
string sot::gtnm(){
    return this->nm;
}
string sot:: gtdl(){
    return this->dl;
}
bool operator <(const sot& s1, const sot& s2){
    return s1.id<s2.id;
}
ostream& operator <<(ostream&out, const sot& s){
    out << s.id << endl << s.zp << endl << s.nm << endl << s.dl << endl;
    return out;
}
sot::~sot(){}
