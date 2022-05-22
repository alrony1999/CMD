#include<iostream>
#include<dir.h>
#include<windows.h>
#include<sstream>
#include<dirent.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<fstream>

using namespace std;

int mkdir_2(string &command , string &command_1){
	
         string dire;
	     cin>>dire;
        ostringstream buffer;
        buffer<<".\\Outputs\\"<<command<<"\\"<<command_1<<"\\"<<dire,
        CreateDirectory(buffer.str().c_str(),NULL);
        if(CreateDirectory(buffer.str().c_str(),NULL)!=0){
        cout<<"Directory"<<"'"<<dire<<"'"<<" already exist"<<endl;}
		else{cout<<"Directory"<<"'"<<dire<<"'"<<"created "<<"\n"<<endl;}}
