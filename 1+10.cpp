#include <iostream>
using namespace std;
int main(void)
{
int num = 10; //�[�`��10
int sum = 0; //�����`�M&��l��
for (int i = 1; i <= num; i++) {
sum = sum + i; //�[�`�B��
}
cout << "the sum of integers from 1 to " << num;
cout << " is "<< sum << endl;
system("PAUSE"); //����
return 0;
}
