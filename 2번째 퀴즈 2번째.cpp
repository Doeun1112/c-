#include <stdio.h>


int  main()
{
	int count = 1, n;
	char arr[3][3] = { '1','2','3','4','5','6','7','8','9' };

	//�ʱ�迭���
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%c", arr[i][j]);

		}
		printf("\n");
	}


	while (1)
	{
		
		//���Ե� �迭���� ����
		printf("1~9������ ���ڸ� �Է��Ͻÿ� : ");
		scanf_s("%d", &n);
		
		//�迭�� o,x����
		switch (n) {
		case 1:
			if (count % 2 != 0) {
				arr[0][0] = 'o';
			}
			else if (count % 2 == 0)
			{
				arr[0][0] = 'x';
			}
			count++;
			break;

		case 2:
			if (count % 2 != 0) {
				arr[0][1] = 'o';
			}
			else if (count % 2 == 0)
			{
				arr[0][1] = 'x';
			}
			count++;
			break;

		case 3:
			if (count % 2 != 0) {
				arr[0][2] = 'o';
			}
			else if (count % 2 == 0)
			{
				arr[0][2] = 'x';
			}
			count++;
			break;

		case 4:
			if (count % 2 != 0) {
				arr[1][0] = 'o';
			}
			else if (count % 2 == 0)
			{
				arr[1][0] = 'x';
			}
			count++;
			break;

		case 5:
			if (count % 2 != 0) {
				arr[1][1] = 'o';
			}
			else if (count % 2 == 0)
			{
				arr[1][1] = 'x';
			}
			count++;
			break;

		case 6:
			if (count % 2 != 0) {
				arr[1][2] = 'o';
			}
			else if (count % 2 == 0)
			{
				arr[1][2] = 'x';
			}
			count++;
			break;

		case 7:
			if (count % 2 != 0) {
				arr[2][0] = 'o';
			}
			else if (count % 2 == 0)
			{
				arr[2][0] = 'x';
			}
			count++;
			break;

		case 8:
			if (count % 2 != 0) {
				arr[2][1] = 'o';
			}
			else if (count % 2 == 0)
			{
				arr[2][1] = 'x';
			}
			count++;
			break;

		case 9:
			if (count % 2 != 0) {
				arr[2][2] = 'o';
			}
			else if (count % 2 == 0)
			{
				arr[2][2] = 'x';
			}
			count++;
			break;
		}
		
		//������ �迭���
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				printf("%c", arr[i][j]);

			}
			printf("\n");
		}

		//�밢�� ����
		if ((arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2]) || (arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0]))
		{
			if (arr[1][1] == 'o')
			{
				printf("player 1 �¸�\n");
			}
			else if (arr[1][1] == 'x')
			{
				printf("player 2 �¸�\n");
			}
			return 0;
		}
		
		//���κ���
		for (int l = 0; l <= 2; l++) {
			if ((arr[l][0] == arr[l][1]) && (arr[l][0] == arr[l][2]))
			{
				if (arr[l][0] == 'o')
				{
					printf("player 1 �¸�\n");
				}
				else if (arr[l][0] == 'x')
				{
					printf("player 2 �¸�\n");
				}
				return 0;
			}
		}
		
		//���κ���
		for (int l = 0; l <= 2; l++)
		{
			if ((arr[0][l] == arr[1][l]) && (arr[0][l] == arr[2][l]))
			{
				if (arr[0][l] == 'o')
				{
					printf("player 1 �¸�\n");
				}
				else if (arr[0][l] == 'x')
				{
					printf("player 2 �¸�\n");
				}
				return 0;
			}
		}
	}
	return 0;
}