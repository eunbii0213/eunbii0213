#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;


unsigned long long int factorial(unsigned long long int number) {

	if (number == 0) {
		return 1;
	}


	return number * factorial(number - 1);
}



int main() {

	unsigned long long int n, k, sum1, sum2, sum3;

	

	//n과 k는 1부터 입력되지만 계산을 위해 -1했으므로 0부터시작
	cin >> n >> k;
	n = n - 1;//맨 꼭대기 n은 0부터 시작
	k = k - 1;//맨 꼭대기 k는 0부터 시작

	if (n != 0 && k == 0) {

		cout << 1; //맨 왼쪽의 1들을 출력
	}

	else if (n == k) {
		cout << 1;//맨 오른쪽 1뿐만 아니라 맨 위의 1


	}
	else {

		sum1 = factorial(n);
		sum2 = factorial(k);
		sum3 = factorial(n - k);

		
		/*cout << factorial(30)<<endl;
		cout << factorial(20)<<endl;
		cout << factorial(10);
		*/


		cout << sum1 / (sum2*sum3);

		
		
	}


}
