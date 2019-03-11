#include <iostream>
using namespace std;
int main(void)
{
int num = 10; //加總至10
int sum = 0; //紀錄總和&初始化
for (int i = 1; i <= num; i++) {
sum = sum + i; //加總運算
}
cout << "the sum of integers from 1 to " << num;
cout << " is "<< sum << endl;
system("PAUSE"); //結束
return 0;
}
