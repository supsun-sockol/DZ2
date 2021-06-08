#include "prd.h"
#include <iostream>
prd::prd(){
    this->id = 0;
    this->nm = "";
    set <otd> bd;
    this->mxid = 0;
    this->bd = bd;
    this->co=0;
}
prd::prd(string nm){
    this->id = 0;
    this->nm = nm;
    set <otd> bd;
    this->mxid = 0;
    this->bd = bd;
    this->co=0;
}
otd& prd::fno(int ido){
    for (auto pos=this->bd.begin(); pos!=this->bd.end(); ++pos){
        otd a=*pos;
        if (a.gtid()==ido){
            return *pos;
        }
    }
    throw invalid_argument("ido");
}
sot& prd::fns(int ido, int ids){
    try{
        return (this->fno(ido)).fnid(ids);
    }
    catch(const invalid_argument&Eido){
        if (Eido.what()=="ido"){
            throw invalid_argument("This department does not exist");
        }else if(Eido.what()=="ids"){
            throw invalid_argument("This employee does not exist");
        }
    }
}
void prd::ado(otd o){
    o.chid(mxid+1);
    this->bd.insert(o);
    this->mxid+=1;
    this->co+=1;
}
void prd::ads(int ido, sot s){
    otd a;
    try{
        a=this->fno(ido);
        a.ad(s);
        (this->fno(ido)).ad(s);
    }
    catch(const invalid_argument&Eido){
        cout << Eido.what();
        std::cout<<"Press any key to continue...";
        cin.ignore();
        cin.get();
    }

}
ostream& operator <<(ostream&out, const prd& p){
    for (auto pos=(p.bd).begin(); pos!=(p.bd).end(); ++pos){
        otd a=*pos;
        out << a << endl;
    }
    return out;
}
void prd::pra()
{
    for (auto pos=(this->bd).begin(); pos!=(this->bd).end(); ++pos){
        otd a=*pos;
        a.pra();
    }
}
void prd::pro(int ido){
    (this->fno(ido)).pra();
}
void prd::prs(int ido, int ids){
    cout << this->fns(ido, ids) << endl;
}
void prd::dlo(int ido){
    bd.erase(this->fno(ido));
}
void prd::dls(int ido, int ids){
    (this->fno(ido)).dl(ids);
}
prd::~prd(){}
