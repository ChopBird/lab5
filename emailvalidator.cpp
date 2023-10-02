#include <string>
#include<iostream>
#include <regex>
#include "emailvalidator.h"

#ifndef emailvalid_h
#define emailvalid_h
bool emailValidator(std::string str){
  std::regex reg1 ("[A-Za-z0-9]{1,20}.[A-Za-z!$&]+@[a-z]{1,20}.[a-z]{1,3}");
 return std::regex_match(str,reg1);
}  


#endif
