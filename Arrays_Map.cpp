#include <iostream>

using namespace std;

int main()
{
	/*
	기본 다중 배열 접근 방법 중 하나
	*/
	int a[10] = { 1, 2, 3 };

	int first2D[2][5] = { {1,2,3,4,5}, {5,4,3,2,1} };

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int num = first2D[i][j];
			cout << num << " ";
		}
		cout << endl;
	}
	//--------------------------------------




	// 위의 first2D의 구조가 아래와 같은 구조의 실행은 같다
	int second1D[10] = { 1,2,3,4,5,5,4,3,2,1 };

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			// 5개 씩 끊어서 인덱스에 진입
			int index = (i * 5) + j;
			int num = second1D[index];
			cout << num << " ";
		}
		cout << endl;
    }

	/*
	total output:
	first2D
	1 2 3 4 5 
	5 4 3 2 1

	second1D
	1 2 3 4 5
	5 4 3 2 1
	*/

	int map[5][5] =
	{
		{1, 1, 1, 1, 1},
		{1, 0 ,0 ,1 ,1},
		{0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0},
		{1, 1, 1, 1, 1},
	};

	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			int info = map[y][x];
			cout << info;
		}
		cout << endl;
	}


	return 0;
}