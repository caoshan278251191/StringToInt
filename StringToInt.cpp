/* 
 * File:   main.cpp
 * Author: caoshan
 *
 * Created on August 21, 2015, 10:28 AM
 */

#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

/*
 * design a cpp that do the following thing. take string and cout the same integer
 "123" -> 123
"45"  -> 45
 */


int stringLength(const char* s)
{
	int len = 0, i = 0;
	while( s[i] != '\0' ) len++;
	return len;
}


int CharToInteger(const char* s)
{
    int integerValue;
   int len= stringLength(s);
   for (int i = 0; i < len; i++) {
       integerValue=integerValue+(*(s+i)-'0')*pow(10, len-i-1);
    }
   //cout<<len<<endl;
   return  integerValue; 
}

int myatoi(const char* str)
{   
    int result=0; //innitalize the result;
    for (int i=0; str[i]!='\0'; ++i)
    {
        result=result*10+(str[i]-'0');
    }
    return result;
}

/*
 * 
 */
int main(int argc, char** argv) {
   // char * input;
   // cin>> *input;  

    std::string strtmp;
    cin >> strtmp;
    const char* tmp = strtmp.c_str();
    int a= myatoi(tmp);
    cout<<a<<endl;
    
//    int strLength;
//    strLength=stringLength(tmp);
//    int integerOutput=CharToInteger(tmp);
//    cout<<integerOutput<<endl;
    

    return 0;
}




