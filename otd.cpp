#include "otd.h"
#include <iostream>
otd::otd(){
    this->id = 0;
    this->nm = "";
    set <sot> bd;
    this->mxid = 0;
    this->bd = bd;
    this->co=0;
}
otd::otd(string nm){
    this->id = 0;
    this->nm = nm;
    set <sot> bd;
    this->mxid = 0;
    this->bd = bd;
    this->co=0;

}

void otd::ad(sot s){
    this->co+=1;
    s.chid(mxid+1);
    this->mxid+=1;
    this->bd.insert(s);
}
void otd::chid(int id){
    this->id=id;
}
int otd::gtid(){
    return this->id;
}
void otd::prl(){
    for (auto pos=this->bd.begin(); pos!=this->bd.end(); ++pos){
        sot a=*pos;
        cout << a.gtid() << endl;
    }
}
void otd::pra(){
    for (auto pos=this->bd.begin(); pos!=this->bd.end(); ++pos){
        sot a=*pos;
        cout << a << endl;
    }
}
sot& otd::fnid(int id){
    for (auto pos=this->bd.begin(); pos!=this->bd.end(); ++pos){
        sot a = *pos;
        if (a.gtid()==id){
            return a;
        }
    }
}
void otd::prfnid(int id){
    for (auto pos=this->bd.begin(); pos!=this->bd.end(); ++pos){
        sot a = *pos;
        if (a.gtid()==id){
            cout << a;
        }
    }
}
void otd::prfnzp(int zp){
    for (auto pos=this->bd.begin(); pos!=this->bd.end(); ++pos){
        sot a = *pos;
        if (a.gtzp()==zp){
            cout << a;
        }
    }
}
void otd::prfnnm(string nm){
    for (auto pos=this->bd.begin(); pos!=this->bd.end(); ++pos){
        sot a = *pos;
        if (a.gtnm()==nm){
            cout << a;
        }
    }
}
void otd::prfndl(string dl){
    for (auto pos=this->bd.begin(); pos!=this->bd.end(); ++pos){
        sot a = *pos;
        if (a.gtdl()==dl){
            cout << a;
        }
    }
}
void otd::dl(int id){
    for (auto pos=this->bd.begin(); pos!=this->bd.end(); ++pos){
        sot a = *pos;
        if (a.gtid()==id) {
            this->bd.erase(a);
        }
    }
}
bool operator <(const otd& o1, const otd& o2){
    return o1.id<o2.id;
}

ostream& operator <<(ostream&out, const otd& o){
    out << o.id << endl << o.nm << endl << o.co << endl;
    return out;
}
otd::~otd(){}
