#include <iostream>
using namespace std;
struct Remelis
{
    string base,outer,inner;
};
int main()
{
    Remelis vard;
    string vardas;
    int n=0, tarpai=-1;
    vard.base="Sveikas, ";
    cin>>vardas;
    cout<<"Parasykite eiluciu skaiciu"<<endl;
    while(n<3)
    {
        cin>>n;
        if(n<3)
        {
            cout<<"Eiluciu skaicius per mazas"<<endl;
        }
    }
    cout<<"Parasykite tarpu skaiciu"<<endl;
    while(tarpai<0)
    {
        cin>>tarpai;
        if(tarpai<0)
        {
            cout<<"Negalimas tarpu skaicius"<<endl;
        }
    }
    system("cls");
    if(vardas[vardas.size()-1]=='a'||vardas[vardas.size()-1]=='e')
    {
        vard.base="Sveika, ";
    }
    vard.base+=vardas+"!";

    //cout<<base<<endl;
    for(int i=0;i<vard.base.size()+2+tarpai*2;i++)
    {
        vard.outer+="*";
    }
    vard.outer+='\n';
    vard.inner+="*";
    for(int i=0;i<vard.base.size()+tarpai*2;i++)
    {
        vard.inner+=" ";
    }
    vard.inner+="*";
    vard.inner+='\n';
    string tarpaiToAdd;
    for(int i=0;i<tarpai;i++)
    {
        tarpaiToAdd+=" ";
    }
    vard.base="*"+tarpaiToAdd+vard.base+tarpaiToAdd+ "*";
    vard.base+='\n';
    //cout<<vard.outer;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            cout<<vard.outer;
        }
        else if(i==n-1)
        {
            cout<<vard.outer;
        }
        else if(i!=n/2)
        {
            cout<<vard.inner;
        }

        else
        {
            cout<<vard.base;
        }
    }
    //cout<<vard.outer;
}
