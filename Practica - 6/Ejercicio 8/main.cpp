#include <iostream>

using namespace std;

void ingresar(float M[][10],int f,int c)
{
    for(int i=0;i<f;i++)
    {
        for (int j=0; j<f; j++)
            M[i][0]=i;
        int x=1;
        float s=0;
        cout << "\nIngrese los datos del " << i << " participante: " << endl;
        cout << "Puntaje en Pelea: ";
        cin >> M[i][x];
        s=s+M[i][x];
        x++;
        cout << "Puntaje en Kata: ";
        cin >> M[i][x];
        s=s+M[i][x];
        x++;
        cout << "Puntaje en Rotura de Maderas: ";
        cin >> M[i][x];
        s=s+M[i][x];
        M[i][4]=s;
    }
}
void mostrar_matriz(float M[][10],int f,int c)
{
    for(int i=0;i<f;i++)
    {
        for(int j=0;j<c;j++)
            cout<<M[i][j]<<"\t";
        cout<<endl;
    }
}
void ganador_fila(float M[][10],int v[],int f,int c)
{
    int x=0;
    for(int j=1; j<5; j++)
    {
        int a=M[0][j],cont=0;
        for(int i=1;i<f;i++)
        {
            if (M[i][j]>a)
            {
                a=M[i][j];
                cont=i;
            }
        }
        v[x]=cont;
        x++;
    }
    cout << "El gandor en Pelea es: " << v[0] << endl;
    cout << "El gandor en Kata es: " << v[1] << endl;
    cout << "El gandor en Rotura de Maderas es: " << v[2] << endl;
    cout << "El gandor General del Torneo es: " << v[3] << endl;
}
int main()
{
    int f,c=5;
    float M[10][10];
    cout<<"Cantidad de Participantes? ";
    cin>>f;
    cout<<"Ingreso de datos a la Tabla:"<<endl;
    ingresar(M,f,c);
    string titulos[5]={"Participantes", "Puntaje Peleas", "Puntaje Kata", "Puntaje Rotura de Maderas", "Total Puntaje"};
    for (int i=0; i<5; i++)
        cout << titulos[i] << " ";
    cout << endl;
    cout<<"\nContenido de la Tabla:"<<endl;
    mostrar_matriz(M,f,c);
    int v[4];
    ganador_fila(M,v,f,c);
    return 0;
}
