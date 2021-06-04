#include<iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
/*
2021/06/04
N���� �ڿ����� �ԷµǸ� �� �ڿ����� ������ �� �� ������ ���� �Ҽ��̸� �� ���� ����ϴ� ���α׷���
�ۼ��ϼ���. ���� ��� 32�� �������� 23�̰�, 23�� �Ҽ��̴�. �׷��� 23�� ����Ѵ�.
�� 910�� �������� 19�� ����ȭ �ؾ� �Ѵ�. ù �ڸ������� ���ӵ� 0�� �����Ѵ�.
������ �Լ��� int reverse(int x)�� �Ҽ������� Ȯ���ϴ� �Լ� bool isPrime(int x)�� �ݵ�� �ۼ��Ͽ�
���α׷��� �Ѵ�.
*/

int reverse(int x)
{
	int res = 0;
	int tmp;
	while (x > 0)
	{
		tmp = x % 10;
		res = res * 10 + tmp;
		x = x / 10;
	}
	return res;
}
bool isPrime(int x)
{
	int i;
	if (x == 1)
	{
		return false;
	}
	bool flag = true;
	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			flag = false;
			break;
		}
	}
	return flag;
}
int main()
{
	freopen("input2.txt", "rt", stdin);
	int n, num, i, tmp;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> num;
		tmp = reverse(num);
		if (isPrime(tmp))
			cout << tmp << endl;
	}
	return 0;
}