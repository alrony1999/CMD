 
 #include <iostream>
#include<dir.h>
#include  <windows.h>
#include<sstream>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include <fstream>

using namespace std;
 void mkdir_4(){
 string dir;
cin>>dir;
std::ostringstream buffer;
buffer<<"C:\\"<<dir,
CreateDirectory(buffer.str().c_str(),NULL);
if(CreateDirectory(buffer.str().c_str(),NULL)!=0){
cout<<"Folder"<<"'"<<dir<<"'"<<" does not exist"<<endl;}else{cout<<"Folder"<<"'"<<dir<<"'"<<"created ";}
}
