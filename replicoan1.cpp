#include<iostream>
#include<cstring>
using namespace std;
//count words in a given string
int total_words(char *str){
   int count = 0;
   int temp = 0;
   while (*str){
      if (*str == ' ' || *str == '\n' || *str == '\t' || (*str>=48 && *str<=57) || *str=='-'){
         temp = 0;
      }
      else if(temp == 0){
         temp = 1;
         count++;
      }
      *(++str);
   }
   return count;
}
int main(){
   char str[] = "welcome to tutorials point, 1525 tushar-patil software engineer";
  
   cout<<"Count of words in a string are: "<<total_words(str)<<endl;
   return 0;
}