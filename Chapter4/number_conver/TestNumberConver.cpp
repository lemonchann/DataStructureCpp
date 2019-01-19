#include "SeqStack.h"	// 顺序栈类

int main(void)
{
	char c = '1';
    SeqStack<int> sa;
    int x;

    while (c != '0')
	{
        cout << endl << "1. 十进制转换8进制.";
        cout << endl << "2. 十进制转换2进制.";
		cout << endl << "0. 退出";
		cout << endl << "选择功能(0~2):";
		cin >> c;
		switch (c) 	{
			case '1':
				sa.Clear();
 				cout << "输入十进制数(e = 0时退出)" << endl ;
 				cin >> x;
				while (x != 0)	
				{
					sa.Push(x%8);
					x = x/8;
				}

				sa.Traverse(Write<int>);
				break;
	       case '2':
				sa.Clear();
 				cout << "输入十进制数(e = 0时退出)" << endl ;
 				cin >> x;
				while (x != 0)	
				{
					sa.Push(x%2);
					x = x/2;
				}

				sa.Traverse(Write<int>);
				break;
		   case '0':
		   		break;
		   default:
		   		break;
		}
	}

	system("PAUSE"); 
	return 0;    
}


