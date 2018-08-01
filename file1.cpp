#include<iostream>
#include<fstream>
#include<cstdio>
using namespace std;
int main()
{
int i,j,res;
FILE *f;
f=fopen("stor.txt","w");
cout<<"Enter the numbers\n";
cin>>i>>j;
fprintf(f,"%d%d",i,j);
fclose (f);
f=fopen("stor.txt","r");
if(f==NULL)
cout<<"File doesn't exist\n";
cout<<"The numbers are:\n";
while(!feof(f))
{
fscanf(f,"%d%d",i,j);
}
fclose (f);
return 0;
}


