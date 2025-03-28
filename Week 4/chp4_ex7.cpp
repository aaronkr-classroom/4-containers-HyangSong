#include <vector>
#include <string>
#include <iostream>

using std::vector;  using std::string;
using std::cout;    using std::cin;      using std::endl;

int main() {
	vector<double> nums;

	cout << "Enter numbers, then EOF: " << endl;
	
	double num;
	// 입력 받고
	while (cin >> num) {
		nums.push_back(num);
	}
	// 계산하기
	double average;
	double sum = 0;
	double count = nums.size();

	for (vector<double>::size_type i = 0; i < count; ++i) {
		sum += nums[i];
	}
	average = sum / count;

	cout << "Average: " << average << endl;
	return 0;
}