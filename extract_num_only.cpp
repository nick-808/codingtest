#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
/*
2021-06-03
���ڿ� ���ڰ� �����ִ� ���ڿ��� �־����� �� �� ���ڸ� �����Ͽ� �� ������� �ڿ����� ����ϴ�.
������� �ڿ����� �� �ڿ����� ��� ������ ����մϴ�.
���� "t0e0a1c2her"���� ���ڸ� �����ϸ� 0,0,1,2 �̰� �̰��� �ڿ����� ����� 12�� �˴ϴ�.
�� ù �ڸ� 0�� �ڿ���ȭ �� �� �����մϴ�. ����� 12�� ����ϰ�, ���� �ٿ� 12�� ����� ������ ����ϸ� �˴ϴ�.
�����Ͽ� ��������� �ڿ����� 100,000,000�� ���� �ʽ��ϴ�.
*/

int main()
{
	freopen("input.txt", "rt", stdin);
	char a[100];
	int result = 0;
	int cnt = 0;
	
	scanf("%s", &a);
	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 48 && a[i] <= 57)
		{
			result = result * 10 + (a[i] - 48);
		}
	}
	printf("%d\n", result);
	for (int i = 0; i <= result; i++) 
	{
		if (result % i == 0) cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}