#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

int main()
{
	int choose;

	printf("С���ָ���������\n");
	Sleep(1500);
	printf("��ѡ��������\n");
	printf("1.QQ��ը��(�ϰ�QQ����)\n2.��������ں�ѹ������ͼƬ\n");

	scanf_s("%d", &choose);

	if (choose == 1)
	{
		int oh;
		printf("��ע�⣺��ʹ�ñ�����ǰ��Ҫ��ը�Է������֡�ͼƬ���ƺã������Է��Ĵ��ڴ���ʹ������������������\n");
		printf("������Ϊʹ�ü򵥴���ʵ�ֵ�С�ű����������˹�����\n");
		printf("��ѡ���Ѿ�Ԥ��õĽű�\n������Ҫ��������ϵ����������)\n");
		printf("1.����***��qq\n");
		printf("2.������***��qqȺ\n");

		scanf_s("%d", &oh);

		if (oh == 1)
		{
			int a = 0;
			int number;

			HWND hwnd = FindWindow(L"TXGuiFoundation", L"***");
			//��***��������������QQ���ڵı���
			printf("������������Ĵ���(�����������)\n");
			scanf_s("%d", &number);

			for (int i = 0;i <= number;i++)
			{
				SendMessage(hwnd, WM_PASTE, 0, 0);
				SendMessage(hwnd, WM_KEYDOWN, VK_RETURN, 0);
				while (a <= number)
				{
					printf("���ǵ�%d�κ�ը\n", a);
					a++;
				}
			}
			return 0;
		}
		if (oh == 2)
		{
			int a = 0;
			int number;

			HWND hwnd = FindWindow(L"TXGuiFoundation", L"***");
			//��***��������������QQ���ڵı���
			printf("������������Ĵ���(�����������)\n");
			scanf_s("%d", &number);

			for (int i = 0;i <= number;i++)
			{
				SendMessage(hwnd, WM_PASTE, 0, 0);
				SendMessage(hwnd, WM_KEYDOWN, VK_RETURN, 0);
				while (a <= number)
				{
					printf("���ǵ�%d�κ�ը\n", a);
					a++;
				}
			}
			return 0;
		}
	}
	if (choose == 2)
	{
		system("copy /b ***.jpg+***.zip ***.jpg");
		//���ǺŴ�����Ϊ��Ӧ�ļ�������ע���ļ���׺��ʽ�Ƿ���Ҫ����
	}
	else
	{
		printf("�����˴����ѡ����������г���������\n");
	}
	return 0;
}