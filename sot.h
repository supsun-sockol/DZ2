#ifndef __SOT_H_
#define __SOT_H_
#include <string>
using namespace std;
class sot
{
private:
    int id;
    int zp;
    string nm;
    string dl;
public:
    sot();
    sot(string nm, string dl, int zp);
    void chid(int id);
    void chidto(int ch);
    void chnm(string nm);
    void chdl(string dl);
    void chzp(int zp);
    int gtid();
    int gtzp();
    string gtnm();
    string gtdl();
    friend bool operator <(const sot& s1, const sot& s2);
    friend ostream& operator <<(ostream&out, const sot& s);
    ~sot();
};



#endif
