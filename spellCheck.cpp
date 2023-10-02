#include <string>
#include <regex>
#include <cctype>
#include "spellCheck.h"
std::string spellCheck(std::string recLetter, std::string studentName){
  std::string low (1,(char)tolower(studentName[0]));
  std::string regstr = ("("+low +"|"+ studentName[0]+")"+studentName.substr(1,3)+"[a-zA-Z]*");
  std::regex reg (regstr);
  std::smatch m;
  std::string search = recLetter;
  
  
  return regex_replace(recLetter, reg, studentName);


}
