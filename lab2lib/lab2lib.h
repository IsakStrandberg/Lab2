#pragma once
class lab2lib
{
public:
	int vectorBaseStart();
	int is_sorted(int input[]);
	bool is_palindrome(char* lista, int g);
	int array_rows_cols(int lista[20][20], int xs, int ys);
	void swap_sort(int a, int b, int c, bool sort);
	void shrink_array(int someValues[10], int size);
};
