#include<iostream>
using namespace std;
int main(){
  int x;
cin >>x;
cout << "Value of x is:" << x;
return 0;
}
//i learnt how to take basic input and output in cpp. i learnt using namespace std makes it such that we dont have to use std :: again.

//let us take multiple inputs.
#include<iostream>
using namespace std;
int main(){
  int x, y;
cin >>x >> y;
cout << "Value of x is:" << x << "value of y is:" << y <<;
return 0;
}  

//DAY 2
#include <iostream>
using namespace std;
int main(){
  cout << "Hello world";
return 0;
}

#include<iostream>
using namespace std;
int main(){
  int var =10;
cout<< var;
return 0;
}

#include <iostream>
using namespace std;
int main(){
  char c = 'S';
cout<< c;
  return 0;
}

#include <iostream>
using namespace std;
int main(){
  int num = 10;
  cout << num <<endl; //endl after the cout command just gives the output a new line.
num = 0x15;
cout<< num;
  return 0;
}

#include <iostream>
using namespace std;
int main(){
  bool haha = true;
  cout<< haha;
return 0;
}

//type checking in cpp
//we assign a boolean variable a data that we specify as its data type, and 
//if it is correctly assigned, the boolean variable stores the value 1 and gives it as the output.
#inlcude <iostream>
using namespace std;
int main(){
  bool heheh = 1.205f;
cout <<heheh;
return 0;
}

//convert data types in cpp
//when we convert characters into integers, they will give ascii value of that character.
#include <iostream>
using namespace std;
int main(){
  int wow = 3;
char lol = 'C';
cout << int(lol) << endl;
int lmao = wow+lol;
 cout<< lmao;
return 0;
}

#include <iostream>
using namespace std;
int main(){
cout << "size int in bytes:" << sizeof(int)<<endl;
cout << "size float in bytes:" << sizeof(float)<<endl;
cout << "size char in bytes:" << sizeof(char)<<endl;
cout << "size double in bytes:" << sizeof(double)<<endl;
return 0;
}

#include <iostream>
using namespace std;
int main(){
int num =7;
cout<< num <<endl;
num=77;
cout<<num;
return 0;
}

#include <iostream>
using namespace std;
int main(){
int num1 =3,woww;
woww = num1;
cout<<woww;
return 0;
}

//loops! finally!!
#include<iostream>
using namespace std;

.....car 1