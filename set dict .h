#ifndef setDict_h
#define setDict_h
using namespace std;
ifstream src("words_alpha.txt") ;
vector<string> Words ;
void setDict(){
  if (!src)
  {
    cout<< "error opening file" <<endl ;
    exit(1) ;
  }
string word;
while (src>>word)
{
  Words.push_back(word);
}
}
#endif