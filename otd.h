#ifndef __OTD_H_
#define __OTD_H_
#include "sot.h"
#include <string>
#include <set>

using namespace std;

class otd
{
private:
    int id;
    string nm;
    int mxid;
    int co;
    set <sot> bd;
public:
    otd();
    otd(string nm);
    void chid(int id);
    int gtid();
    void ad(sot s);
    void prl();
    void pra();
    sot& fnid(int id);
    void prfnid(int id);
    void prfnzp(int zp);
    void prfnnm(string nm);
    void prfndl(string dl);
    void dl(int id);
    ~otd();
    friend bool operator <(const otd& o1, const otd& o2);
    friend ostream& operator <<(ostream&out, const otd& o);
};



#endif
