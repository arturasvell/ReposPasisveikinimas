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
    int n;
    vard.base="Sveikas, ";
    cin>>vardas;
    cout<<"Parasykite eiluciu skaiciu"<<endl;
    while(n<3)
    {
        cin>>n;
        if(n<3)
        {
            cout<<"Eiluciu skaicius per mazas";
        }
    }
    system("cls");
    if(vardas[vardas.size()-1]=='a'||vardas[vardas.size()-1]=='e')
    {
        vard.base="Sveika, ";
    }
    vard.base+=vardas+"!";

    //cout<<base<<endl;
    for(int i=0;i<vard.base.size()+4;i++)
    {
        vard.outer+="*";
    }
    vard.outer+='\n';
    vard.inner+="*";
    for(int i=0;i<vard.base.size()+2;i++)
    {
        vard.inner+=" ";
    }
    vard.inner+="*";
    vard.inner+='\n';
    vard.base="* "+vard.base+" *";
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
