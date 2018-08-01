#include<iostream>
using namespace std;
class lms
{
public:
float el=0,cl=0,vac,cls,els,rh;
float lea,lea1;
char id[10],name[20],a;
virtual void read1()=0;
virtual void read2()=0;
virtual void calc1()=0;
virtual void calc2()=0;
virtual void calc3()=0;
virtual void calc4()=0;
lms(){}
lms(int earned,int casual)
{
el=earned;
cl=casual;
}
void read()
{
cout<<"Enter your name:\n";
cin>>name;
cout<<"Enter ID:\n";
cin>>id;
cout<<"Are you a teaching staff? press Y or N: \n";
cin>>a;
if(a=='Y'||a=='y')
{
read1();
}
else
{
read2();
}
}
};
class lms1:public lms
{
public:
void read1()
{
cout<<"Are you a permanent staff? press Y or N: \n";
cin>>a;
if(a=='Y'||a=='y')
{
calc1();
}
else
calc2();
}
void read2()
{
cout<<"Are you a permanent staff? press Y or N: \n";
cin>>a;
if(a=='Y'||a=='y')
{
calc3();
}
else
calc4();
}
};
class lms2:public lms1
{
public:
void calc1()
{
cout<<"Enter required  casual leaves :\n";
cin>>cl;
cout<<"Enter  required earned leaves:\n";
cin>>el;
cout<<"Enter the celebrated vacation:\n";
cin>>vac;
cout<<"were there restricted holiday? press Y or N: \n";
cin>>a;
if(a=='Y'||a=='y')
{
cout<<"how many restricted leaves \n";
cin>>rh;
lea = cl+el+vac+rh;
}
else
{
lea = cl+el+vac;
}
lea1=cl+el;
cls=15-cl;
els=20-el;
if((cls>=0)&&(els>=0))
{
cout<<"NAME:\t"<<name<<endl;
cout<<"ID:\t"<<id<<endl;
cout<<"Total leaves taken:\t"<<lea<<endl;
cout<<"Please note the remaining casual leaves are \t"<<cls; 
}
else
cout<<"leave cannot be granted \n";
if(lea1>=25)
{
cout<<"Please contact the co-ordinator to enquire about LOS! \n";
}

}
void calc2()
{
cout<<"Enter casual leaves:\n";
cin>>cl;
cout<<"Enter the celebrated vacation:\n";
cin>>vac;
cout<<"Were there restricted holidays? press Y or N: \n";
cin>>a;
if(a=='Y'||a=='y')
{
lea = cl+vac+2;
}
else
{
lea = cl+vac;
}
lea1=cl;
cout<<"NAME:\t"<<name<<endl;
cout<<"ID:\t"<<id<<endl;
cout<<"Total leaves taken:\t"<<lea<<endl;
if(lea1>=36)
{
cout<<"Please contact the co-ordinator to pay the fine! \n";
}

}
void calc3()
{
cout<<"Enter earned leaves:\n";
cin>>el;
cout<<"Were there restricted holidays? press Y or N: \n";
cin>>a;
if(a=='Y'||a=='y')
{
lea = el+2;
}
else
{
lea = el;
}
lea1=el;
cout<<"NAME:\t"<<name<<endl;
cout<<"ID:\t"<<id<<endl;
cout<<"Total leaves taken:\t"<<lea<<endl;
if(lea1>=30)
{
cout<<"Please contact the co-ordinator to pay the fine! \n";
}

}
void calc4()
{
cout<<"Enter earned leaves:\n";
cin>>el;
cout<<"Enter casual leaves:\n";
cin>>cl;
cout<<"Were there restricted holidays? press Y or N: \n";
cin>>a;
if(a=='Y'||a=='y')
{
lea = el+cl+2;
}
else
{
lea = cl+el;
}
lea1=el+cl;
cout<<"NAME:\t"<<name<<endl;
cout<<"ID:\t"<<id<<endl;
cout<<"Total leaves taken:\t"<<lea<<endl;
if(lea1>=41)
{
cout<<"Please contact the co-ordinator to pay the fine! \n";
}

}
int c1()
{
return this->cl;
}
int c2()
{
return this->el;
}
};
int main()
{
cout<<"\t \t \t \t \t Welcome to NMIT employee management system \n";
cout<<"\t \t \t \t \t ------------------------------------------ \n \n \n";
int emp;
cout<<"enter the number of employees \n";
cin>>emp;
lms2 a[emp];

for(int i=0;i<=emp;i++)
{
a[i].read();
}
return 0;
}
