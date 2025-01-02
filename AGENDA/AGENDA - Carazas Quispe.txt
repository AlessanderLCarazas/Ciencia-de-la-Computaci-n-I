#include <iostream>

using namespace std;

class Persona
{
    string nombres, direccion, correo;
    int celular;
public:
    Persona(string,string,string,int);
    void setNOMRES(string);
    void setDIRECCION(string);
    void setCORREO(string);
    void setCELULAR(int);
    string getNOMRES();
    string getDIRECCION();
    string getCORREO();
    int getCELULAR();
};

Persona::Persona(string n,string d,string c,int num)
{
    nombres=n;
    direccion=d;
    correo=c;
    celular=num;
}

void Persona::setNOMRES(string x)
{
    nombres=x;
}
void Persona::setDIRECCION(string y)
{
    direccion=y;
}
void Persona::setCORREO(string z)
{
    correo=z;
}
void Persona::setCELULAR(int xx)
{
    celular=xx;
}

string Persona::getNOMRES()
{
    return nombres;
}
string Persona::getDIRECCION()
{
    return direccion;
}
string Persona::getCORREO()
{
    return correo;
}
int Persona::getCELULAR()
{
    return celular;
}

int main()
{
    Persona *Listacontactos[100];
    int opc,i=0;
    do
    {
        cout<<"\n============================================";
        cout<<"\n[1]Crear un nuevo Contacto\n";
        cout<<"[2]Modificar o actualizar Contacto\n";
        cout<<"[3]Listar Agenda\n";
        cout<<"[4]Buscar Contacto\n";
        cout<<"[5]Salir\n";
        cout<<"Ingrese lo que desea hacer: \n";
        cin>>opc;
        cout<<"============================================\n";
        if(opc==1)
        {
            string nom,direcc,corr;
            int cel;
            cin.ignore();
            cout<<"\nIngrese Nombres: ";
            getline(cin,nom);
            cout<<"Ingrese Direccion: ";
            getline(cin,direcc);
            cout<<"Ingrese Correo: ";
            cin >> corr;
            cout<<"Ingrese Celular: ";
            cin >> cel;
            Listacontactos[i]=new Persona(nom,direcc,corr,cel);
            i++;
        }
        else if(opc==2)
        {
            if (i==0)
                cout<<"Aun no se tiene ningun Contacto.";
            else
            {
                int opc3;
                cout<<"\nEL CONTACTO QUE DESEA ACTUALIZAR LO DESEA BUSCAR POR: \n[1]Nombres.\n[2]Direccion.\n[3]Correo.\n[4]Celular.\n";
                cin>>opc3;
                if (opc3==1)
                {
                    string nombre1;
                    cin.ignore();
                    cout<<"Ingrese el Nombre que desea actualizar: ";
                    getline(cin,nombre1);
                    for(int j=0; j<i; j++)
                    {
                        if (Listacontactos[j]->getNOMRES()==nombre1)
                        {
                            int opc4;
                            cout<<"============================================\n";
                            cout<<"\nQUE DESEA ACTUALIZAR?: \n[1]Nombres.\n[2]Direccion.\n[3]Correo.\n[4]Celular.\n";
                            cin>>opc4;
                            if(opc4==1)
                            {
                                string nuevonombre;
                                cin.ignore();
                                cout<<"Ingrese el NUEVO NOMBRE: ";
                                getline(cin,nuevonombre);
                                Listacontactos[j]->setNOMRES(nuevonombre);
                            }
                            else if (opc4==2)
                            {
                                string nuevadireccion;
                                cin.ignore();
                                cout<<"Ingrese LA NUEVO DIRECCION: ";
                                getline(cin,nuevadireccion);
                                Listacontactos[j]->setDIRECCION(nuevadireccion);
                            }
                            else if (opc4==3)
                            {
                                string nuevocorreo;
                                cout<<"Ingrese el NUEVO CORREO: ";
                                cin>>nuevocorreo;
                                Listacontactos[j]->setCORREO(nuevocorreo);
                            }
                            else if (opc4==4)
                            {
                                int nuevocelular;
                                cout<<"Ingrese el NUEVO NUMERO: ";
                                cin>>nuevocelular;
                                Listacontactos[j]->setCELULAR(nuevocelular);
                            }
                            else
                            {
                                cout<<"============================================\n";
                                cout<<"\tINGRESE UNA OPCION VALIDA."<<endl;
                            }
                        }
                    }
                }
                else if(opc3==2)
                {
                    string direccion1;
                    cin.ignore();
                    cout<<"Ingrese La Direccion que desea actualizar: ";
                    getline(cin,direccion1);
                    for(int j=0; j<i; j++)
                    {
                        if (Listacontactos[j]->getDIRECCION()==direccion1)
                        {
                            int opc4;
                            cout<<"============================================\n";
                            cout<<"\nQUE DESEA ACTUALIZAR?: \n[1]Nombres.\n[2]Direccion.\n[3]Correo.\n[4]Celular.\n";
                            cin>>opc4;
                            if(opc4==1)
                            {
                                string nuevonombre;
                                cin.ignore();
                                cout<<"Ingrese el NUEVO NOMBRE: ";
                                getline(cin,nuevonombre);
                                Listacontactos[j]->setNOMRES(nuevonombre);
                            }
                            else if (opc4==2)
                            {
                                string nuevadireccion;
                                cin.ignore();
                                cout<<"Ingrese LA NUEVO DIRECCION: ";
                                getline(cin,nuevadireccion);
                                Listacontactos[j]->setDIRECCION(nuevadireccion);
                            }
                            else if (opc4==3)
                            {
                                string nuevocorreo;
                                cout<<"Ingrese el NUEVO CORREO: ";
                                cin>>nuevocorreo;
                                Listacontactos[j]->setCORREO(nuevocorreo);
                            }
                            else if (opc4==4)
                            {
                                int nuevocelular;
                                cout<<"Ingrese el NUEVO NUMERO: ";
                                cin>>nuevocelular;
                                Listacontactos[j]->setCELULAR(nuevocelular);
                            }
                            else
                            {
                                cout<<"============================================\n";
                                cout<<"\tINGRESE UNA OPCION VALIDA."<<endl;
                            }
                        }
                    }
                }
                else if(opc3==3)
                {
                    string correo1;
                    cout<<"Ingrese El Correo que desea actualizar: ";
                    cin>>correo1;
                    for(int j=0; j<i; j++)
                    {
                        if (Listacontactos[j]->getCORREO()==correo1)
                        {
                            int opc4;
                            cout<<"============================================\n";
                            cout<<"\nQUE DESEA ACTUALIZAR?: \n[1]Nombres.\n[2]Direccion.\n[3]Correo.\n[4]Celular.\n";
                            cin>>opc4;
                            if(opc4==1)
                            {
                                string nuevonombre;
                                cin.ignore();
                                cout<<"Ingrese el NUEVO NOMBRE: ";
                                getline(cin,nuevonombre);
                                Listacontactos[j]->setNOMRES(nuevonombre);
                            }
                            else if (opc4==2)
                            {
                                string nuevadireccion;
                                cin.ignore();
                                cout<<"Ingrese LA NUEVO DIRECCION: ";
                                getline(cin,nuevadireccion);
                                Listacontactos[j]->setDIRECCION(nuevadireccion);
                            }
                            else if (opc4==3)
                            {
                                string nuevocorreo;
                                cout<<"Ingrese el NUEVO CORREO: ";
                                cin>>nuevocorreo;
                                Listacontactos[j]->setCORREO(nuevocorreo);
                            }
                            else if (opc4==4)
                            {
                                int nuevocelular;
                                cout<<"Ingrese el NUEVO NUMERO: ";
                                cin>>nuevocelular;
                                Listacontactos[j]->setCELULAR(nuevocelular);
                            }
                            else
                            {
                                cout<<"============================================\n";
                                cout<<"\tINGRESE UNA OPCION VALIDA."<<endl;
                            }
                        }
                    }
                }
                else if (opc3==4)
                {
                    int celular1;
                    cout<<"Ingrese El Celular que desea actualizar: ";
                    cin>>celular1;
                    for(int j=0; j<i; j++)
                    {
                        if (Listacontactos[j]->getCELULAR()==celular1)
                        {
                            int opc4;
                            cout<<"============================================\n";
                            cout<<"\nQUE DESEA ACTUALIZAR?: \n[1]Nombres.\n[2]Direccion.\n[3]Correo.\n[4]Celular.\n";
                            cin>>opc4;
                            if(opc4==1)
                            {
                                string nuevonombre;
                                cin.ignore();
                                cout<<"Ingrese el NUEVO NOMBRE: ";
                                getline(cin,nuevonombre);
                                Listacontactos[j]->setNOMRES(nuevonombre);
                            }
                            else if (opc4==2)
                            {
                                string nuevadireccion;
                                cin.ignore();
                                cout<<"Ingrese LA NUEVO DIRECCION: ";
                                getline(cin,nuevadireccion);
                                Listacontactos[j]->setDIRECCION(nuevadireccion);
                            }
                            else if (opc4==3)
                            {
                                string nuevocorreo;
                                cout<<"Ingrese el NUEVO CORREO: ";
                                cin>>nuevocorreo;
                                Listacontactos[j]->setCORREO(nuevocorreo);
                            }
                            else if (opc4==4)
                            {
                                int nuevocelular;
                                cout<<"Ingrese el NUEVO NUMERO: ";
                                cin>>nuevocelular;
                                Listacontactos[j]->setCELULAR(nuevocelular);
                            }
                            else
                            {
                                cout<<"============================================\n";
                                cout<<"\tINGRESE UNA OPCION VALIDA."<<endl;
                            }
                        }
                    }
                }
            }
        }
        else if(opc==3)
        {
            if (i==0)
                cout<<"Aun no se tiene ningun Contacto.";
            else
            {
                cout<<"\nAGENDA: \n";
                for(int j=0; j<i; j++)
                {
                    cout<<endl;
                    cout<<"Nombres: "<<Listacontactos[j]->getNOMRES()<<endl;
                    cout<<"Direccion: "<<Listacontactos[j]->getDIRECCION()<<endl;
                    cout<<"Correo: "<<Listacontactos[j]->getCORREO()<<endl;
                    cout<<"Celular: "<<Listacontactos[j]->getCELULAR()<<endl;
                }
            }
        }
        else if(opc==4)
        {
            if (i==0)
                cout<<"Aun no se tiene ningun Contacto.";
            else
            {
                int opc2;
                cout<<"Desea buscar por: \n[1]Nombres.\n[2]Direccion.\n[3]Correo.\n[4]Celular.\n";
                cin>>opc2;
                if (opc2==1)
                {
                    string bus;
                    cin.ignore();
                    cout<<"Ingrese el nombre que desea buscar: ";
                    getline(cin,bus);
                    for(int j=0; j<i; j++)
                    {
                        cout<<"============================================\n";
                        if (Listacontactos[j]->getNOMRES()==bus)
                        {
                            cout<<endl;
                            cout<<"\tCONTACTO ENCONTRADO: "<<endl;
                            cout<<"Nombres: "<<Listacontactos[j]->getNOMRES()<<endl;
                            cout<<"Direccion: "<<Listacontactos[j]->getDIRECCION()<<endl;
                            cout<<"Correo: "<<Listacontactos[j]->getCORREO()<<endl;
                            cout<<"Celular: "<<Listacontactos[j]->getCELULAR()<<endl;
                        }
                    }
                }
                else if(opc2==2)
                {
                    string bus;
                    cin.ignore();
                    cout<<"Ingrese la direccion que desea buscar: ";
                    getline(cin,bus);
                    for(int j=0; j<i; j++)
                    {
                        cout<<"============================================\n";
                        if (Listacontactos[j]->getDIRECCION()==bus)
                        {
                            cout<<endl;
                            cout<<"\tCONTACTO ENCONTRADO: "<<endl;
                            cout<<"Nombres: "<<Listacontactos[j]->getNOMRES()<<endl;
                            cout<<"Direccion: "<<Listacontactos[j]->getDIRECCION()<<endl;
                            cout<<"Correo: "<<Listacontactos[j]->getCORREO()<<endl;
                            cout<<"Celular: "<<Listacontactos[j]->getCELULAR()<<endl;
                        }
                    }
                }
                else if(opc2==3)
                {
                    string bus;
                    cout<<"Ingrese el correo que desea buscar: ";
                    cin>>bus;
                    for(int j=0; j<i; j++)
                    {
                        cout<<"============================================\n";
                        if (Listacontactos[j]->getCORREO()==bus)
                        {
                            cout<<endl;
                            cout<<"\tCONTACTO ENCONTRADO: "<<endl;
                            cout<<"Nombres: "<<Listacontactos[j]->getNOMRES()<<endl;
                            cout<<"Direccion: "<<Listacontactos[j]->getDIRECCION()<<endl;
                            cout<<"Correo: "<<Listacontactos[j]->getCORREO()<<endl;
                            cout<<"Celular: "<<Listacontactos[j]->getCELULAR()<<endl;
                        }
                    }
                }
                else if(opc2==4)
                {
                    int bus;
                    cout<<"Ingrese el celular que desea buscar: ";
                    cin>>bus;
                    for(int j=0; j<i; j++)
                    {
                        cout<<"============================================\n";
                        if (Listacontactos[j]->getCELULAR()==bus)
                        {
                            cout<<endl;
                            cout<<"\tCONTACTO ENCONTRADO: "<<endl;
                            cout<<"Nombres: "<<Listacontactos[j]->getNOMRES()<<endl;
                            cout<<"Direccion: "<<Listacontactos[j]->getDIRECCION()<<endl;
                            cout<<"Correo: "<<Listacontactos[j]->getCORREO()<<endl;
                            cout<<"Celular: "<<Listacontactos[j]->getCELULAR()<<endl;
                        }
                    }
                }
                else
                {
                    cout<<"============================================\n";
                    cout<<"\tINGRESE UNA OPCION VALIDA."<<endl;
                }
            }
        }
    }while(opc!=5);

    return 0;
}
