#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>

int check(char arr[]) {//�ߺ� Ȯ�� �Լ�
	int count = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = i+1; j < 4; j++) {
			if (arr[i] == arr[j]) {
				count += 1;
			}
		}
	}

	if (count == 0)
		return false;
	else
		return true;
}

int main() {

	int tmp, strike = 0, ball, count = 0;
	char arr[4];
	char user[10];	//������ �����ڸ� ���ڸ� �Է� �� ���� �־.
	srand((unsigned)time(NULL));

	do {	//�ߺ� Ȯ��(��ǻ��)
		for (int i = 0; i < 4; i++)
			arr[i] = (char)rand()%10 + 48;
	} while (check(arr));
	for (int i = 0; i < 4; i++) {
		printf("%c", arr[i]);
	}

	while (strike!=4) {
		do { //�ߺ� Ȯ��, ���� Ȯ��(����)
			printf("4�ڸ� ���� �Է�(�ߺ�x) : ");
			scanf_s("%d", &tmp);
			_itoa_s(tmp, user, 10);
		} while (tmp < 1000 || tmp > 10000 || check(user));
		ball = 0;
		strike = 0;
		count += 1;
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (arr[i] == user[j]) {
					if (i == j)
						strike += 1;
					else
						ball += 1;
				}
			}
		}
		printf("%d strike, %d ball\n", strike, ball);
	}
	printf("***4 strike!****\n");
	printf("���� Ƚ�� : %d\n", count);
	printf("���� : %s", arr);

	return 0;
}