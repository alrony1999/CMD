#include <iostream>
#include<dir.h>
#include<dirent.h>
#include  <windows.h>
#include<sstream>
#include <string>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include <fstream>  

using namespace std;

void destroy_9(string &command_4,string &d){
cin>>d;
      ostringstream buff;
   buff<<".\\Outputs\\"<<command_4<<"\\"<<d;
   
   if (remove(buff.str().c_str())== 0){
   cout<<"File "<<d<<" deleted"<<endl;cout<<endl;}else{
   cout<<"Error: File '"<<d<<"' does not exist in current directory"<<endl;cout<<endl;}}
