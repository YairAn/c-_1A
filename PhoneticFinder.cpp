#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
 #include <vector>
#include <stdexcept>



 namespace phonetic{

 using namespace std;

//split function taken from http://www.martinbroadhurst.com/how-to-split-a-string-in-c.html
template <class Container>
void split1(const std::string& str, Container& cont)
{
    std::istringstream iss(str);
    std::copy(std::istream_iterator<std::string>(iss),
         std::istream_iterator<std::string>(),
         std::back_inserter(cont));
}

string Smalleter (string s){
int len=s.size();
string ans="";
for(int i =0;i<len;i++)
{
  char c =tolower(s.at(i));
 ans= ans+ c;
 }
 //cout <<"testing------" << ans << endl;
return ans;


}

int cmpString (string s,string word){
string s1= Smalleter ( s);
string s2 =Smalleter ( word);
// cout<<"testing---"<<s1<<endl;
// cout<<"testing---"<<s2<<endl;

if(s1.size()!=s2.size()) return -1;
if((s1.compare(s2)) == 0) return 0;
for(int i=0;i<s1.size();i++){
    if(
        (s1.at(i)==s2.at(i) )
      ||  (s1.at(i)=='v'   &&  s2.at(i)=='w' )
      ||  (s1.at(i)=='w'   &&  s2.at(i)=='v' )
      ||  (s1.at(i)=='j'   &&  s2.at(i)=='g' )
      ||  (s1.at(i)=='g'   &&  s2.at(i)=='j')
      ||  (s1.at(i)=='s'   &&  s2.at(i)=='z' )
      ||  (s1.at(i)=='z'   &&  s2.at(i)=='s'  ) 
      ||  (s1.at(i)=='d'   &&  s2.at(i)=='t' )
      ||  (s1.at(i)=='t'   &&  s2.at(i)=='d')
      ||  (s1.at(i)=='o'   &&  s2.at(i)=='u' )
      ||  (s1.at(i)=='u'   &&  s2.at(i)=='o' )
      ||  (s1.at(i)=='i'   &&  s2.at(i)=='y' )
      ||  (s1.at(i)=='y'   &&  s2.at(i)=='i' )
      ||  (s1.at(i)=='b'   &&  s2.at(i)=='f' )
      ||  (s1.at(i)=='f'   &&  s2.at(i)=='b' )
      ||  (s1.at(i)=='f'   &&  s2.at(i)=='p' )
      ||  (s1.at(i)=='p'   &&  s2.at(i)=='f' )
      ||  (s1.at(i)=='b'   &&  s2.at(i)=='p' )
      ||  (s1.at(i)=='p'   &&  s2.at(i)=='b' )
      ||  (s1.at(i)=='c'   &&  s2.at(i)=='k' )
      ||  (s1.at(i)=='k'   &&  s2.at(i)=='c' )
      ||  (s1.at(i)=='k'   &&  s2.at(i)=='q' )
      ||  (s1.at(i)=='q'   &&  s2.at(i)=='k' )
      ||  (s1.at(i)=='c'   &&  s2.at(i)=='q' )
      ||  (s1.at(i)=='q'   &&  s2.at(i)=='c') 
        ) { ;}
  else return -2;
}
return 0;
}



string find(string text,string word)
{
  vector<string> Words;
  split1(text, Words);
  
  for ( int i=0 ;i<Words.size();i++) {
  string s=Words.at(i); 
   if(cmpString(s,word) == 0) return s;

  }
  throw logic_error{"word not found"};
 // return "word not found "; 
}
 }