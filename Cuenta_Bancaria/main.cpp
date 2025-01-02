#include <iostream>
#include <sstream>

using namespace std;

class Cuenta
{
    string nro;
    float monto;
public:
    Cuenta(string,float);
    void setNro(string);
    void setMonto(float);
    string getNro();
    float getMonto();
};

Cuenta::Cuenta(string n, float m)
{
    nro=n;
    monto=m;
}
void Cuenta::setNro(string x)
{
    nro=x;
}
void Cuenta::setMonto(float y)
{
    monto=y;
}
string Cuenta::getNro()
{
    return nro;
}
float Cuenta::getMonto()
{
    return monto;
}
int main()
{
    Cuenta *ListaCuentas[10];
    int opc,i=0;
    do
    {
        cout<<"(1)Ingresar una nueva cuenta automática\n";
        cout<<"(2)Ingresar una nueva cuenta con monto inicial\n";
        cout<<"(3)Listar Cuentas\n";
        cout<<"(4)Salir\n";
        cout<<"Opción? ";
        cin>>opc;
        if(opc==1)
        {
            int a = i+1;
            stringstream ss;
            ss << a;
            string str = ss.str();
            str="00"+str;
            cout<<str<<endl;
            ListaCuentas[i]=new Cuenta(str,0);
            i++;
        }
        else if(opc==2)
        {
            string num;
            float inicial;
            cout<<"Numero de Cuenta? ";
            cin>>num;
            cout<<"Monto Inicial? ";
            cin>>inicial;
            ListaCuentas[i]=new Cuenta(num,inicial);
            i++;
        }
        else if(opc==3)
        {
            cout<<"Listado de Cuentas\n";
            for(int j=0; j<i; j++)
            {
                cout<<ListaCuentas[j]->getNro();
                cout<<" - "<<"Saldo= "<<ListaCuentas[j]->getMonto()<<endl;
            }
        }
    }while(opc!=4);

    return 0;
}
