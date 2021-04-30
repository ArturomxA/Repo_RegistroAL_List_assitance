#include<iostream>

using namespace std;

int main()
{
    int n;
    int numeros[100];
    cout<<"\tTOMA DE ASISTENCIA"<<endl;
    cout<<"Total de alumnos en Lista ==32"<<endl;
    cout<<"La asistencia se creara con los valores de:"<<endl;
    cout<<"Asistencia=1"<<endl;
    cout<<"Falta=0"<<endl;
    cout<<" "<<endl;
    for(int i=1;i<=32;i++)
    {
    	do{
        cout<<"Digita alumno n.-"<<i<<endl;
        cin>>numeros[i];
        }while(numeros[i]>1);
    }
    for(int i=1 ; i<=32 ; i++)
    {
    	cout<<"Alumno.-"<<i<<"--->"<<numeros[i]<<endl;
	}

    return 0;
}

