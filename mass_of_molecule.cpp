/* g++ (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0  

Hóa chất chỉ gồm các nguyên tố C, H, O có trọng lượng 12,1, 16 tương ứng. Nó được biểu diễn dạng "nén", ví dụ COOHHH là CO2H3 hay CH (CO2H) (CO2H) (CO2H) là CH(CO2H)3. Nếu ở dạng nén thì số lần lặp >=2 và <=9.
Tính khối lượng hóa chất.

Input : Gồm một dòng mô tả hóa chất không quá 100 kí tự chỉ gồm C, H, O, (, ), 2,..,9.
Output : Khối lượng của hóa chất, luôn <=10000. 
*/

/*_____________________________________*********************_______________________________________*/

#include<bits/stdc++.h>
using namespace std ;
map<char,int> cho={{'C',12},{'H',1},{'O',16},{'(',0}};
int mass_of(string const& melecule)
{
stack<int> total;
int len=melecule.length();
int i=0;
int sum=0;
do{

if(melecule[i]!=')' && !isdigit(melecule[i]))
 {
  
  total.push(cho[melecule[i]]);
 } 
if(isdigit(melecule[i]))
 {
  int temp=total.top();total.pop();
  temp=temp*(int(melecule[i])-48); total.push(temp);
 }
if(melecule[i]==')')
 {
  int temp=0;
  while(total.top()!=0)
   {
    temp+=total.top();total.pop();
   };
  total.pop();
  total.push(temp);
 }
i++;
}while(i<len);
while(!total.empty())
{
 sum+=total.top();total.pop();
};
return sum;
}
int main()
{
 cout<<mass_of("((CHO3)7((H8O9)7)8)9");// mass =80451 
 return 0;
}
