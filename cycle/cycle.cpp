#include<bits/stdc++.h>
#include<cstdlib>
#include<ctime>
#include <random>
using namespace std;

constexpr int FLOAT_MIN = -1;
constexpr int FLOAT_MAX = 1;

float ans = 0, num = 0;
float p[5];

int main(){
	std::random_device rd;
  	std::default_random_engine eng(rd());
  	std::uniform_real_distribution<> distr(FLOAT_MIN, FLOAT_MAX);

	for(int i = 1; i <= 999999; i++){
		for(int j = 1; j <= 4; j++)
			p[j] = distr(eng);

		float x1 = p[1], y1 = p[2], x2 = p[3], y2 = p[4];
		if((sqrt(x1 * x1 + y1 * y1) <= 1)&&(sqrt(x2 * x2 + y2 * y2) <= 1)){
			ans += sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
			num++;
		}
	}
	ans = ans * 1.0 / num;
	cout << setprecision(10) << ans << endl;
	return 0;
}
