#include "StringUtils.h"


namespace StringUtils{


std::string Slice(const std::string &str, ssize_t start, ssize_t end) noexcept{
   // Replace code here
   std::string result = str;
   if (start > end){
       return "";


   }
   //so basically the start determines which letter or output to start from and then end is where it ends
   for (int i = start; i < end; i++){
       result[i] = str[i];
   }


   return result;
}


std::string Capitalize(const std::string &str) noexcept{
   // Replace code here
   std::string result = str;
   result[0] = toupper(result[0]);
   return result;
}


std::string Upper(const std::string &str) noexcept{
   // Replace code here
   std::string result = str;
   for(int i =0; i < result.length() ;i++){
       result[i] = toupper(result[i]);
   }
  
   return result;
}


std::string Lower(const std::string &str) noexcept{
   // Replace code here
   std::string result = str;
   for(int i =0; i < result.length();i++){
       result[i] = tolower(result[i]);
   }
   return result;
}


std::string LStrip(const std::string &str) noexcept{
   // Replace code here
   // for this one
   std::string result = str;
   for(int i = 0; i < result.length(); i++){
       if(result[i] != ' '){
           result = result.substr(i);
           break;
       }
   }
   return result;
}


std::string RStrip(const std::string &str) noexcept{
   // Replace code here
   std::string result = str;
   for(int i = result.length()-1; i >= 0; i--){
       if(result[i] != ' '){
           result = result.substr(0,i+1);
           break;
       }
   }
   return result;
}


std::string Strip(const std::string &str) noexcept{


   // Replace code here
   std::string result = str;
   for(int i = 0; i < result.length(); i++){
       if(result[i] != ' '){
           result = result.substr(i);
           break;
       }
   }
   for(int i = result.length()-1; i >= 0; i--){
       if(result[i] != ' '){
           result = result.substr(0,i+1);
           break;
       }
   }
   return result;
}


std::string Center(const std::string &str, int width, char fill) noexcept{
   // Replace code here
   std::string result = str;
   int leftWidth = (width - result.length())/2;
   int rightWidth =(width - result.length())/2;
   for(int i =0; i < leftWidth; i++){
       result = fill + result;
   }
   for(int i =0; i < rightWidth; i++){
       result = result + fill;
   }
  
  
   return result;
}


std::string LJust(const std::string &str, int width, char fill) noexcept{
   // Replace code here
   std::string result = str;
   width = width - result.length();
   for(int i =0; i < width; i++){
       result = result + fill;
   }
   return result;
  
}


std::string RJust(const std::string &str, int width, char fill) noexcept{
   // Replace code here
    std::string result = str;
   width = width - result.length();
   for(int i =0; i < width; i++){
       result = fill + result;
   }
   return result;
}


std::string Replace(const std::string &str, const std::string &old, const std::string &rep) noexcept{
   // Replace code here
   std::string result = str;
   for(int i = 0; i < result.length(); i++){
       if(result[i] == old[0]){
           result = result.substr(0,i) + rep + result.substr(i+1);
       }
   }
   return result;
}


std::vector< std::string > Split(const std::string &str, const std::string &splt) noexcept{
   // Replace code here
   std::vector<std::string> result;
   std::string temp = str;
   for(int i = 0; i < temp.length(); i++){
       if(temp[i] == splt[0]){
           result.push_back(temp.substr(0,i));
           temp = temp.substr(i+1);
       }
   }
  
  
   return result;
}


std::string Join(const std::string &str, const std::vector< std::string > &vect) noexcept{
   // Replace code here
   return "";
}


std::string ExpandTabs(const std::string &str, int tabsize) noexcept{
   // Replace code here
   return "";
}


int EditDistance(const std::string &left, const std::string &right, bool ignorecase) noexcept{
   // Replace code here
   return 0;
}


};