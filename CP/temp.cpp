#include <string>
#include <iostream>
int main()
{
   int occurrences = 0;
   std::string::size_type pos = 0;
   std::string s = "aaaaa";
   std::string target = "aa";
   while ((pos = s.find(target, pos )) != std::string::npos) {
          ++ occurrences;
          pos ++;
   }
   std::cout << occurrences << std::endl;

}