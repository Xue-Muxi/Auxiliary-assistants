#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

int main()
{
	int choose;

	printf("小助手辅助已运行\n");
	Sleep(1500);
	printf("请选择辅助种类\n");
	printf("1.QQ轰炸机(老版QQ可用)\n2.快捷制作内含压缩包的图片\n");

	scanf_s("%d", &choose);

	if (choose == 1)
	{
		int oh;
		printf("请注意：在使用本功能前将要轰炸对方的文字、图片复制好，并将对方的窗口打开且使光标在输入框内闪动。\n");
		printf("本功能为使用简单代码实现的小脚本，需少量人工操作\n");
		printf("请选择已经预设好的脚本\n（如想要其他请联系开发者增加)\n");
		printf("1.祸害***的qq\n");
		printf("2.祸害“***”qq群\n");

		scanf_s("%d", &oh);

		if (oh == 1)
		{
			int a = 0;
			int number;

			HWND hwnd = FindWindow(L"TXGuiFoundation", L"***");
			//“***”请输入你所打开QQ窗口的标题
			printf("设置你想输出的次数(务必输入整数)\n");
			scanf_s("%d", &number);

			for (int i = 0;i <= number;i++)
			{
				SendMessage(hwnd, WM_PASTE, 0, 0);
				SendMessage(hwnd, WM_KEYDOWN, VK_RETURN, 0);
				while (a <= number)
				{
					printf("这是第%d次轰炸\n", a);
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
			//“***”请输入你所打开QQ窗口的标题
			printf("设置你想输出的次数(务必输入整数)\n");
			scanf_s("%d", &number);

			for (int i = 0;i <= number;i++)
			{
				SendMessage(hwnd, WM_PASTE, 0, 0);
				SendMessage(hwnd, WM_KEYDOWN, VK_RETURN, 0);
				while (a <= number)
				{
					printf("这是第%d次轰炸\n", a);
					a++;
				}
			}
			return 0;
		}
	}
	if (choose == 2)
	{
		system("copy /b ***.jpg+***.zip ***.jpg");
		//在星号处更改为相应文件名，并注意文件后缀格式是否需要更改
	}
	else
	{
		printf("输入了错误的选项，请重新运行程序以重试\n");
	}
	return 0;
}