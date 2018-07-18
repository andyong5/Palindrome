#include <iostream>

bool checker(int num)
{
  std::string check=std::to_string(num);
  if(check==std::string(check.rbegin(),check.rend()))
  {
    return true;
  }
  return false;
}
int main() {
  using namespace std;

  int start,end;
  int highestPal=0;
  int palNum1,palNum2;
  cout<<"Enter a range to find the highest palindrome";
  cin>>start>>end;

  for(int i=start;i<=end;i++)
  {
    int num;
    for(int g=start; g<=end;g++)
    {
        num = i * g;
        if (checker(num)) {
          palNum1 = i;
          palNum2 = g;
          if (palNum1 * palNum2 > highestPal)
            highestPal = palNum1 * palNum2;
        }
    }
  }
  cout<<"Highest palindrome number is = "<<highestPal<<" which is "<<palNum1<<" times "<<palNum2;
  return 0;
}
