#include <iostream>

using namespace std;

void ingresar(int A[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout << "Ingrese " << i+1 << " valor: ";
        cin >> A[i];
    }
}

void mostrar(int A[],int n)
{
    for(int i=0; i<n; i++)
        cout << A[i] << " ";
    cout << endl;
}

void copiar(int A[],int B[],int m,int n)
{
    int C[20],x=0,b,c=0;
    for(int i=0;i<m;i++)
    {
        b=0;
        for(int j=0;j<=i;j++)
        {
            if (A[i]==A[j])
            {
                b++;
            }
        }
        if (b==1)
        {
            C[x]=A[i];
            x++;
            c++;
        }
    }
    for(int i=0;i<n;i++)
    {
        b=0;
        for(int j=0;j<=i;j++)
        {
            if (B[i]==B[j])
            {
                b++;
            }
        }
        if (b==1)
        {
            C[x]=B[i];
            x++;
            c++;
        }
    }
    cout << endl;

    for(int i=0;i<c;i++)
    {
        b=0;
        for(int j=0;j<=i;j++)
        {
            if (C[i]==C[j])
            {
                b++;
            }
        }
        if (b==1)
        {
            cout << C[i] << " ";
        }
    }
}

int main()
{
    int A[10],B[10],C[20],n,m;
    cout << "Ingrese Cantidad de Elementos del Primer Arreglo: ";
    cin >>m;
    ingresar(A,m);
    mostrar(A,m);
    cout << "Ingrese Cantidad de Elementos del Segundo Arreglo: ";
    cin >>n;
    ingresar(B,n);
    mostrar(B,n);
    copiar(A,B,m,n);
    return 0;
}
