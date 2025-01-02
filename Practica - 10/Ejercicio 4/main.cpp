#include <iostream>

using namespace std;

float resul(float(*func)(float,float), float a, float b)
{
    return (*func)(a,b);
}

float suma(float a, float b)
{
    return a+b;
}

float resta(float a, float b)
{
    return a-b;
}
float multiplicacion(float a, float b)
{
    return a*b;
}
float division(float a, float b)
{
    return a/b;
}
int main()
{
    float (*p[4])(float,float)={suma,resta,multiplicacion,division};
    int opc;
    float a, b;
    cout<<"\nIntroduzca A y B: ";
    cin>>a>>b;
    cout<<"\nIntroduzca \n0:Sumar\n1:.Restar\n2:Multiplicar\n3:Dividir"<<endl;
    cin>>opc;
    if(opc==0)
        cout<<resul(suma, a, b);
    else if(opc==1)
        cout<<resul(resta, a, b);
    else if(opc==2)
        cout<<resul(multiplicacion, a, b);
    else if(opc==3)
        cout<<resul(division, a, b);
    return 0;
}
