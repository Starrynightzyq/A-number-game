#include<iostream>
#include<string>
#include<stdlib.h>
#include<time.h>
using  namespace std;

class Numgame
{
protected:
	int num[4] = { 1,3,5,8 };
public:
	Numgame();
	
};

Numgame::Numgame()
{
	srand(unsigned(time(0)));			//初始化数组，嗯，还没想到好的方法
	num[0] = rand() % 10;
	for (int i = 1; i < 4; i++) {
		for (int j = 0; j < i; j++) {
			int t = rand() % 10;
			if (t != num[j]) {
				num[i] = t;
			}
		}
	} 

	for (int i = 0; i < 4; i++) {
		cout << num[i];
	}
	cout << endl;

	cout << "请输入4个不同的数：" << endl;

	int flag = 0;
	int innum[4];								//输入数组
	int count_a = 0;
	int count_b = 0;
	for (int i = 0; i < 8; i++)			//循环8次读取，比较
	{
		count_a = 0;
		count_b = 0;

		cout << "第 " << i + 1 << " 次猜测：";

/*		for (int innum_i = 0; innum_i < 4; innum_i++) {		//输入,有问题
			cin >> innum[innum_i];
		}
*/
		int temp;																	//输入，有点问题，是否可以优化？
		cin >> temp;															//问题：没有判断不同
		for (int i = 3; i >= 0; i--) {
			innum[i] = temp%10;
			temp /= 10;
		}
/*		for (int i = 0; i < 4; i++) {
			cout << innum[i] << " ";
		}
		cout << endl;	*/

		for (int m = 0; m < 4; m++) {									//判断
			for (int n = 0; n < 4; n++) {
				if (innum[m] == num[n]) {
					if (n == m) {
						count_a++;
					}
					else {
						count_b++;
					}
				}
			}
		}

		if (count_a != 4) {
			cout << count_a << "A" << count_b << "B" << endl;
		}
		else {
			flag = 1;
			break;
		}
	}

	if (flag == 1) {																			//输出结果
		cout << "哈！猜对了，你好棒！" << endl;
	}
	else {
		cout << "正确结果是：";
		for (int i = 0; i < 4; i++) {
			cout << num[i];
		}
		cout << endl;
	}

}


int main()
{
	Numgame n1;
	return 0;
}