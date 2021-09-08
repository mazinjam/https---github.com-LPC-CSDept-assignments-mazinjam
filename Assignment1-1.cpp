#include <iostream>
#include <fstream>

using namespace std;

struct Student {
  int id;
  string sname;
  double score[2];
  double sum;
  double avg;
};

int main()
{
  ifstream ifs;
  Student s;
  ifs.open("student.bin");
  ifs.read( (char *)&s, sizeof(s));
  cout << "Id " << s.id << "\t";
  cout << "Name " << s.sname << "\t";
  cout << "Score1 " << s.score[0] << "\t";
  cout << "Score2 " << s.score[1] << "\t";
  cout << "Sum " << s.sum << "\t";
  cout << "Avg " << s.avg << "\t";
  //h


}