#include<bits/stdc++.h>
using namespace std;
class person{
    public:
 string name;
 int age;
 person( string name, int age ){
  this->name = name;
  this->age = age;
 }
};
int main(){
person * sajib = new person("sajib",23);
person *uddin = new person("uddin",25);
*sajib= *uddin;
delete uddin;
cout<<sajib->name<<" "<<sajib->age<<endl;
}
