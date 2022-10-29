#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<iomanip>

using namespace std;

int max(int i, int j) {
	if (i >= j)return i;
	else return j;
}

int main(void) {
	ofstream ofile;
	ofile.open("C:\\Users\\Administrator\\Desktop\\max\\test.txt");
	ofile <<setw(16)<<"i"<< setw(16)<<"j"<< setw(16)<< "max(i, j)" << endl;
	int i, j;
	cout << "请输入i,j:";
	cin >> i >> j;
	cout << "最大值为：" << max(i, j) <<endl;
	ofile << setw(16) << i << setw(16) << j << setw(16) << max(i,j) << endl;
	ofile.close();
	system("pause");
	return 0;
}
