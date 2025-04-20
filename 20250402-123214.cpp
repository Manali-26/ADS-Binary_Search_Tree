#include<iostream>
#include <vector>
using namespace std;

int main()
{ vector <int> vec ={ 4,2,7,8,1,2,5};
 int target = 8;
int  index =0;
  for (int val : vec)
    {
      if (val == target )
         {
          cout<<" target "<< target << " at index "<< index <<endl;
               }
          index++;

}
    
    return 0;
}