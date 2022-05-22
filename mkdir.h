 
 #include <iostream>
#include<dir.h>
#include  <windows.h>
#include<sstream>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include <fstream>

using namespace std;
 void make_directory(){
 string dir;
cin>>dir;
std::ostringstream buffer;
buffer<<".\\Outputs\\"<<dir,
CreateDirectory(buffer.str().c_str(),NULL);
if(CreateDirectory(buffer.str().c_str(),NULL)!=0){
cout<<"Folder"<<"'"<<dir<<"'"<<" does not exist"<<endl;}else{cout<<"Folder"<<"'"<<dir<<"'"<<"created \n\n";}
}
