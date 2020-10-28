#ifndef pullDict_h
#define pullDict_h
using namespace std ;
string pullDict(){
  int x;
  cout<< "inout number to find in the dictionary"<< endl;
  cin >> x;
  cout<< Words.at(x-1)<< endl;
  return Words.at(x-1) ;
}
#endif