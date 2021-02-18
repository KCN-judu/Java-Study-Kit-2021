#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
string strin;
string Head = "java",Mid = "c",Space = " ",Tail = ".java";
  int main (){
 	cin>>strin;
    string SysA = Head + Mid + Space + strin + Tail;
	string SysB = Head + Space + strin;  
	const char* strsysA = SysA.c_str();	
	const char* strsysB = SysB.c_str();	
 	system(strsysA);
 	system(strsysB);
 	cout<<"This Java Project has been successfully compiled"<<endl;
 	cin.get();
 	cin.get();
 	return 0;
}
