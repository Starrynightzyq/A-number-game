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
	srand(unsigned(time(0)));			//��ʼ�����飬�ţ���û�뵽�õķ���
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

	cout << "������4����ͬ������" << endl;

	int flag = 0;
	int innum[4];								//��������
	int count_a = 0;
	int count_b = 0;
	for (int i = 0; i < 8; i++)			//ѭ��8�ζ�ȡ���Ƚ�
	{
		count_a = 0;
		count_b = 0;

		cout << "�� " << i + 1 << " �β²⣺";

/*		for (int innum_i = 0; innum_i < 4; innum_i++) {		//����,������
			cin >> innum[innum_i];
		}
*/
		int temp;																	//���룬�е����⣬�Ƿ�����Ż���
		cin >> temp;															//���⣺û���жϲ�ͬ
		for (int i = 3; i >= 0; i--) {
			innum[i] = temp%10;
			temp /= 10;
		}
/*		for (int i = 0; i < 4; i++) {
			cout << innum[i] << " ";
		}
		cout << endl;	*/

		for (int m = 0; m < 4; m++) {									//�ж�
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

	if (flag == 1) {																			//������
		cout << "�����¶��ˣ���ð���" << endl;
	}
	else {
		cout << "��ȷ����ǣ�";
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