#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cstring>
const char* fileName=”Employee.txt”;

Class Employee
{
private;
int cl,el,vac,lea;
char EmpName[50],Post[50];
public;
void ReadData();
int getcl();
int getel();
void DisplayRecord();
};

void Employee::ReadData()
{
cout<<“Employee ID:”<<endl;
cin>>EmpID;
cout<<“Employee Name:”<<endl;
cin>>EmpName;
cout<<“Employee’s Post:”;
cin>>Post;
}

void Employee::DisplayRecord()
{
cout<<endl<<“_______________________________”;
cout<<endl<<setw(5)<<EmpID<<setw(5)<<EmpName<<setw(5)<<Post<<setw(5)<<setw(5)<<cl<<setw(5)<<el;
}

int Employee::getcl()
{
return cl;
}
int Employee::getel()
{
return el;
}

void main()
{
Employee emp,e;
char option,ch;
int ID,isFound;
clrscr();
fstream file;
file.open(fileName,ios::ate|ios::in|ios::out|ios::binary);
do
{
cout<<********Menu********;
cout<<endl<<“Enter your option”;
cout<<endl<<“1 => Add a new record”;
cout<<endl<<“2 => Search record from employee id”;
cout<<endl<<“3 => Display all employee”;
cout<<endl<<“4 => Update record of an employee”;
cout<<endl<<“5 => Exit from the program”<<endl;
cout<<“********************”<<endl;
cin>>option;
switch(option)
{
case ‘1’:
emp.ReadData();
file.seekg(0,ios::beg);
isFound=0;
file.read((char*)&e,sizeof(e));
while(!file.eof())
{
if(e.GetID()==emp.GetID())
{
cout<<“This ID already exist…Try for another ID”;
isFound=1;
break;
}
file.read((char*)&e,sizeof(e));
}
if(isFound==1)
break;
file.clear();
file.seekp(0,ios::end);
file.write((char*)&emp, sizeof(emp));
cout<<endl<<“New record has been added successfully…”;
break;

case ‘2’:
isFound=0;
cout<<endl<<“Enter ID of an employee to be searched:”;
cin>>ID;
file.seekg(0,ios::beg);
file.read((char*)&e,sizeof(e));
while(!file.eof())
{
if(e.GetID()==ID)
{
cout<<endl<<“The record found….”<<endl;
cout<<endl<<setw(5)<<“ID”<<setw(15)<<“Name”<<setw(15)<<“Post”<<setw(15)<<“cl”<<setw(8)<<“el”;
e.DisplayRecord();
isFound=1;
break;
}
file.read((char*)&e,sizeof(e));
}
file.clear();
if(isFound==0)
cout<<endl<<“Data not found for employee ID#”<<ID;
break;

case ‘3’:
cout<<endl<<“Record for employee”;
file.clear();
file.seekg(0,ios::beg);
int counter=0;
file.read((char*)&e,sizeof(e));
while(!file.eof())
{
counter++;
if(counter==1)
{
cout<<endl<<setw(5)<<“ID”<<setw(15)<<“Name”<<setw(15)<<“Post”<<setw(15)<<“Department”<<setw(8)<<“Salary”;
}
e.DisplayRecord();
file.read((char*)&e,sizeof(e));
}
cout<<endl<<counter<<“records found……”;
file.clear();
break;

case ‘4’:
int recordNo=0;
cout<<endl<<“File is being modified….”;
cout<<endl<<“Enter employee ID to be updated:”;
cin>>ID;
isFound=0;
file.seekg(0,ios::beg);
file.read((char*)&e,sizeof(e));
while(!file.eof())
{
recordNo++;
if(e.GetID()==ID)
{
cout<<“The old record of employee having ID”<<ID<< “is:”;
e.DisplayRecord();
isFound=1;
break;
}
file.read((char*)&e,sizeof());
}

if(idFound==0)
{
cout<<endl<<“Data not found for employee ID#”<<ID;
break;
}
file.clear();
int location=(recordNo-1)*sizeof(e);
file.seekp(location,ios::beg);
cout<<endl<<“Enter new record for employee having ID”<<ID;
e.ReadData();
file.write((char*)&e, sizeof(e));
break;

#include<iostrem.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
#include<iomanip.h>
#include<string.h>
#include<stdio.h>
const char* fileName=”Employee.txt”;

Class Employee
{
private;
int EmpID;
char EmpName[50],Post[50],Department[10];
float Salary;
public;
void ReadData();
int GetID();
void DisplayRecord();
char* GetDepartment();
};

void Employee::ReadData()
{
cout<<endl<<“Employee ID:”;
cin>>EmpID;
cout<<“Employee Name:”;
cin>>EmpName;
cout<<“Employee’s Post:”;
cin>>Post;
cout<<“Employee’s Department:”;
cin>>Department;
cout<<“Salary:”;
cin>>Salary;
}

void Employee::DisplayRecord()
{
cout<<endl<<“_______________________________”;
cout<<endl<<setw(5)<<EmpID<<setw(15)<<EmpName<<setw(15)<<Post<<setw(15)<<Department<<setw(8)<<Salary;
}

int Employee::GetID()
{
return EmpID;
}

char* Employee::GetDepartment()
{
return Department;
}

void main()
{
Employee emp,e;
char option,ch,Dept[50];
int ID,isFound;
clrscr();
fstream file;
file.open(fileName,ios::ate|ios::in|ios::out|ios::binary);
do
{
cout<<********Menu********;
cout<<endl<<“Enter your option”;
cout<<endl<<“1 => Add a new record”;
cout<<endl<<“2 => Search record from employee id”;
cout<<endl<<“3 => List Employee of particular department”;
cout<<endl<<“4 => Display all employee”;
cout<<endl<<“5 => Update record of an employee”;
cout<<endl<<“6 => Delete record of particular employee”;
cout<<endl<<“7 => Exit from the program”<<endl;
cout<<“********************”<<endl;
cin>>option;
switch(option)
{
case ‘1’:
emp.ReadData();
file.seekg(0,ios::beg);
isFound=0;
file.read((char*)&e,sizeof(e));
while(!file.eof())
{
if(e.GetID()==emp.GetID())
{
cout<<“This ID already exist…Try for another ID”;
isFound=1;
break;
}
file.read((char*)&e,sizeof(e));
}
if(isFound==1)
break;
file.clear();
file.seekp(0,ios::end);
file.write((char*)&emp, sizeof(emp));
cout<<endl<<“New record has been added successfully…”;
break;

case ‘2’:
isFound=0;
cout<<endl<<“Enter ID of an employee to be searched:”;
cin>>ID;
file.seekg(0,ios::beg);
file.read((char*)&e,sizeof(e));
while(!file.eof())
{
if(e.GetID()==ID)
{
cout<<endl<<“The record found….”<<endl;
cout<<endl<<setw(5)<<“ID”<<setw(15)<<“Name”<<setw(15)<<“Post”<<setw(15)<<“Department”<<setw(8)<<“Salary”;
e.DisplayRecord();
isFound=1;
break;
}
file.read((char*)&e,sizeof(e));
}
file.clear();
if(isFound==0)
cout<<endl<<“Data not found for employee ID#”<<ID;
break;
case ‘3’:
isFound=0;
cout<<“Enter department name to list employee within it:”;
cin>>Dept;
file.seekg(0,ios::beg);
file.read((char*)&e,sizeof(e));
while(!file.eof())
{
if(strcmp(e.GetDepartment(),Dept)==0)
{
cout<<endl<<“The record found for this department”<<endl;

cout<<endl<<setw(5)<<“ID”<<setw(15)<<“Name”<<setw(15)<<“Post”<<setw(15)<<“Department”<<setw(8)<<“Salary”;
e.DisplayRecord();
isFound=1;
break;
}
file.read((char*)&e,sizeof(e));
}
file.clear();
if(isFound==0)
cout<<endl<<“Data not found for department”<<Dept;
break;

case ‘4’:
cout<<endl<<“Record for employee”;
file.clear();
file.seekg(0,ios::beg);
int counter=0;
file.read((char*)&e,sizeof(e));
while(!file.eof())
{
counter++;
if(counter==1)
{
cout<<endl<<setw(5)<<“ID”<<setw(15)<<“Name”<<setw(15)<<“Post”<<setw(15)<<“Department”<<setw(8)<<“Salary”;
}
e.DisplayRecord();
file.read((char*)&e,sizeof(e));
}
cout<<endl<<counter<<“records found……”;
file.clear();
break;

case ‘5’:
int recordNo=0;
cout<<endl<<“File is being modified….”;
cout<<endl<<“Enter employee ID to be updated:”;
cin>>ID;
isFound=0;
file.seekg(0,ios::beg);
file.read((char*)&e,sizeof(e));
while(!file.eof())
{
recordNo++;
if(e.GetID()==ID)
{
cout<<“The old record of employee having ID”<<ID<< “is:”;
e.DisplayRecord();
isFound=1;
break;
}
file.read((char*)&e,sizeof());
}

if(idFound==0)
{
cout<<endl<<“Data not found for employee ID#”<<ID;
break;
}
file.clear();
int location=(recordNo-1)*sizeof(e);
file.seekp(location,ios::beg);
cout<<endl<<“Enter new record for employee having ID”<<ID;
e.ReadData();
file.write((char*)&e, sizeof(e));
break;

case ‘7’:
exit(0);
break;

default:
cout<<“Invalid Options”;
}
cout<<“\nDo you want to continue…..?y/n”;
cin>>ch;
}while(ch!=’n’);
}
