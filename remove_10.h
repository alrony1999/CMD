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

void destroy_10(string &command_4, string &command_5,string &h){

 cin>>h;
      ostringstream buff;
   buff<<".\\Outputs\\"<<command_4<<"\\"<<command_5<<"\\"<<h;
    remove(buff.str().c_str());
   if (remove(buff.str().c_str())!= 0){
   cout<<"File deleted"<<endl;cout<<endl;}else{
   cout<<"Error: File '"<<h<<"' does not exist in current directory"<<endl;cout<<endl;}}
