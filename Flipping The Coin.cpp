#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main ( ) {
    string side;
    string on1="face";
    string tw2="back";
    cout<<"Flip the coin Program "<<endl<<endl;
    cout<< " Choose the coin side (back OR face) "<<endl;
    cin>>side;
    srand (time(0));
    rand();
    
    
if (rand()%2==0 && side==on1)
{
    cout<<"the side is ' "<<on1<<"' "<<endl;
    cout<<"YOU WIN ! :)";
    return 0;
}
if (rand()%2==0 && side == tw2)
{
    cout<<"the side is ' "<<on1<<"' "<<endl;
    cout<<"YOU lose ! :()";
    return 0;
}
if (rand()%2 != 0 && side==tw2)
    {
    cout<<"the side is ' "<<tw2<<"' "<<endl;
    cout<<"YOU WIN ! :)";
    return 0;
}
  if (rand()%2 != 0 && side==on1)
    {
    cout<<"the side is ' "<<tw2<<"' "<<endl;
    cout<<"YOU Lose ! :)";
    return 0;
}
return 0;
}
