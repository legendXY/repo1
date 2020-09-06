// CPP01.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
const double PI = 0.314159265358979e1;
using namespace std;

int n = 70;

void check()
{
	int n = 21;
	cout << n << endl;
	cout << ::n << endl;
}

int main()
{
    cout << "Hello World! \n" << endl;
	int day = 4;
	switch (day)
	{
	case 1: cout << "Monday" << endl; break;
	case 2: cout << "Tuesday" << endl; break;
	case 3: cout << "Wednesday" << endl; break;
	case 4: cout << "Thursday" << endl; break;
	case 5: cout << "Friday" << endl; break;
	case 6: cout << "Saturday" << endl; break;
	case 7: cout << "Sunday" << endl; break;
	default: cout << "CNM" << endl;
	}
	cout << "\n" << endl;
	int i = 1;
	int sum = 0;
	do 
	{
	    sum += i;
	    i++;
	} while (i == 1);
	cout << sum << endl;

	// list
	char lesson[3][5] = {"AKSJ", "MKN"};
	for (int i = 0; i < 3; i++)
	{
		cout << lesson[i] << endl;
	}

	check();

	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
