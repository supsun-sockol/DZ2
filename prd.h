#ifndef __PRD_H_
#define __PRD_H_
#include "otd.h"
#include <string>
#include <set>

using namespace std;

class prd
{
private:
    int id;
    string nm;
    int mxid;
    set <otd> bd;
    int co;
public:
    prd();
    prd(string nm);
    otd& fno(int ido);
    sot& fns(int ido, int ids);
    void ado(otd o);
    void ads(int ido, sot s);
    friend ostream& operator <<(ostream&out, const prd& p);
    void pra();
    void pro(int ido);
    void prs(int ido, int ids);
    void dlo(int ido);
    void dls(int ido, int ids);
    ~prd();
};



#endif
