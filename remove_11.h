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

void destroy_11(string &command_6,string &command_7,string &o){

  cin>>o;
      ostringstream buff;
   buff<<".\\Outputs\\"<<command_6<<"\\"<<command_7<<"\\"<<o;
    remove(buff.str().c_str());
   if (remove(buff.str().c_str())!= 0){
   cout<<"File deleted"<<endl;cout<<endl;}else{
   cout<<"Error: File '"<<o<<"' does not exist in current directory"<<endl;cout<<endl;}}
