#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;
int mcd(int a , int b){
    int t;
    a = (a < 0) ? -a:a;
    b = (b < 0) ? -b:b;
    t = (a < b) ? a : b;
    while ( (a % t) || (b % t)) --t;
    return t;
    } 
int main ()
{
	system("color ff");
  HANDLE hConsole;
  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hConsole, 1);
  cout << "\tDigite los valores correspondientes a las variables a,b y c" << endl;
  SetConsoleTextAttribute(hConsole, 7);
    int a,b,c,aux1[100],aux2[100],aux3[100],p1,p2,t1,t2,i,j,x,y; 
    cout << "a: "; 
    cin >> a; 
    cout << "b: "; 
    cin >> b; 
    cout << "c: "; 
    cin >> c;
	SetConsoleTextAttribute(hConsole, 14);	
    cout<<"\t\t\t\t "<<a<<"x +"<<b<<"y"<<"="<<c<<endl;
    cout<<"\t\t\t\t"<<"("<<a<<","<<b<<")="<<mcd(a,b)<<endl<<endl; 
    SetConsoleTextAttribute(hConsole, 7);
 	 if((c%(mcd(a,b)))==0) { 
 	 	SetConsoleTextAttribute(hConsole, 10);
        cout<<"como:"<<endl<<mcd(a,b)<<"|"<<a<<" y "<<mcd(a,b)<<"|"<<b<<endl<<" y tambien "<<endl<<mcd(a,b)<<"|"<<c<<endl;
        cout<<"la ecu. tiene solucion en los enteros "<<endl<<endl; 
        SetConsoleTextAttribute(hConsole, 7);
        } 
    else { 
    	SetConsoleTextAttribute(hConsole, 12);
        cout<<"como:"<<endl<<mcd(a,b)<<"|"<<a<<" y "<<mcd(a,b)<<"|"<<b<<endl<<" pero "<<endl<<mcd(a,b)<<"~|"<<c<<endl;
        cout<<"la ecu. no tiene solucion en los enteros "<<endl<<endl;
        SetConsoleTextAttribute(hConsole, 7);
        } 
    p2=1; 
    if((c%(mcd(a,b)))==0) { 
    for(i=0;p2!=0;i++){ 	
        aux1[i]=0; 	
        aux2[i]=0; 
        	aux3[i]=0;		
        a = (a < 0) ? -a:a; 	
        b = (b < 0) ? -b:b;	 
        t1 = (a < b) ? b : a;	 
        t2 = (a < b) ? a : b;	
        	aux1[i]+=t2;		
        aux3[i]+=t1;	 
        p1=int(t1/t2);		
        p2=t1%t2;		
        aux2[i]+=p2;
        cout<<t1<<"="<<t2<<"("<<p1<<") +"<<p2<<endl; 	 
        a=t2;	 
        b=p2; 	
        }
	cout<<endl; 
	SetConsoleTextAttribute(hConsole, 11);	
    for (i=0;aux2[i]!=0;i++)
    {
        cout<<aux2[i]<<"="<<aux3[i]<<"+"<<aux1[i]<<"("<<int(-(aux3[i]/aux1[i]))<<")"<<endl; 	 
    }
    SetConsoleTextAttribute(hConsole, 7);	
    for (i=1;aux2[i]!=0;i++)
    {
    	int d=1;
    	cout<<aux2[i]<<"="<<aux3[i]<<"+"<<aux1[i]<<"("<<int(-(aux3[i]/aux1[i]))<<")"<<endl;
    	cout<<aux2[i]<<"="<<aux3[i]<<"+"<<"["<<aux3[i-1]<<"+"<<aux1[i-1]<<"("<<int(-(aux3[i-1]/aux1[i-1]))<<")"<<"]"<<"("<<int(-(aux3[i]/aux1[i]))<<")"<<endl;
    	cout<<aux2[i]<<"="<<aux3[i]<<"+"<<aux3[i-1]<<"("<<d*(int(-(aux3[i]/aux1[i])))<<")+"<<aux1[i-1]<<"("<<(int(-(aux3[i-1]/aux1[i-1]))*(int(-(aux3[i]/aux1[i]))))<<")"<<endl;
		cout<<aux2[i]<<"="<<aux3[i-1]<<"("<<d*(int(-(aux3[i]/aux1[i])))<<")+"<<aux1[i-1]<<"("<<(int(-(aux3[i-1]/aux1[i-1]))*(int(-(aux3[i]/aux1[i]))))+1<<")"<<endl;
	}

}
	getch();
    return 0;
}

