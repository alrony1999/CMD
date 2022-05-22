


#include<iostream>
#include<dir.h>
#include<windows.h>
#include<sstream>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<fstream>

using namespace std;

int makefil_11( string &command_6 ,string &command_7,string &m){
	
	cin>>m;
	 ostringstream buffer;
        buffer<<".\\Outputs"<<"\\"<<command_6<<"\\"<<command_7<<"\\"<<m;
     if(ifstream(buffer.str().c_str())){
        cout << "Error:File '"<<m<<"' already exists in current directory" <<endl;cout<<endl;
         return false;}
         ofstream file(buffer.str().c_str());
        if(!file){
        cout<<"Error in creating file\n"<<endl;cout<<endl;
        }else if(file){
        cout<<"File '"<<m<<"' created"<<endl;cout<<endl;}
        file.close();
}


