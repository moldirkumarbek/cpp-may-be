// string::empty
#include <iostream>
#include <string>
using namespace std;

void empty(string* line1, string* line2){
	char string;
	int temp;
	string* temp =line1*
    line1* = line2*
    line2* = temp
}

int main ()
{
  string content;
  string line1,line2;
  cout << "Please introduce a text. Enter an empty line to finish:\n";
  do {
    getline(cin,line1);
    content += line1 + '\n';
  } while (!line2.empty());
  cout << "The text you introduced was:\n" << content;
  return 0;
}
// string::find
#include <iostream>       // std::cout
#include <string>         // std::string

int main ()
{
  std::string str ("There are two needles in this haystack with needles.");
  std::string str2 ("needle");

  // different member versions of find in the same order as above:
  std::size_t found = str.find(str2);
  if (found!=std::string::npos)
    std::cout << "first 'needle' found at: " << found << '\n';

  found=str.find("needles are small",found+1,6);
  if (found!=std::string::npos)
    std::cout << "second 'needle' found at: " << found << '\n';

  found=str.find("haystack");
  if (found!=std::string::npos)
    std::cout << "'haystack' also found at: " << found << '\n';

  found=str.find('.');
  if (found!=std::string::npos)
    std::cout << "Period found at: " << found << '\n';

  // let's replace the first needle:
  str.replace(str.find(str2),str2.length(),"preposition");
  std::cout << str << '\n';

  return 0;
}
// string::push_back
#include <iostream>
#include <fstream>
#include <string>
void (string* fiel){
	char string;
	string* temp = * file;
	temp++;
}

int main ()
{
  std::string str;
  std::ifstream file ("test.txt",std::ios::in);
  if (file) {
    while (!file.eof()) str.push_back(file.get());
  }
  std::cout << str << '\n';
  return 0;
}
