#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
#include<queue>
#include<random>

using namespace std;

bool cd(int s1, int s2) {
	if (s1 == 31 and s2 == 81) return true;
	return false;
}
bool cd2(int s1, int s2) {
	if (s1 == 11 and s2 == 31) return true;
	return false;
}
bool cd3(int s1, int s2) {
	if (s1 == 11 and s2 == 81) return true;
	return false;
}
bool cd23(int s1, int s2) {
	if (s1 == 42 and s2 == 72) return true;
	return false;
}
bool cd4(int s1, int s2) {
	if (s1 / 10 == s2 / 10) return true;
	return false;
}
bool cd4_(int s1, int s2) {
	if (s1 == 31 and s2 == 72) return true;
	return false;
}
bool cd5(int s1, int s2) {
	if (s1 / 10 == 1 and s2 / 10 == 2) return true;
	return false;
}
bool cd6(int s1, int s2) {
	if (s1 / 10 == 1 and s2 / 10 == 4) return true;
	return false;
}
bool cd7(int s1, int s2) {
	if (s1 / 10 == 1 and s2 / 10 == 9) return true;
	return false;
}
bool cd8(int s1, int s2) {
	if (s1 / 10 == 1 and s2 / 10 == 10) return true;
	return false;
}
bool cd9(int s1, int s2) {
	if (s1 / 10 == 4 and s2 / 10 == 10) return true;
	return false;
}
bool cd10(int s1, int s2) {
	if (s1 / 10 == 4 and s2 / 10 == 6) return true;
	return false;
}
bool cd11(int s1, int s2) {
	if ((s1 + s2) / 10 == 9 or (s1 + s2) / 10 == 19) return true;
	return false;
}
bool cd12(int s1, int s2) {
	if ((s1 + s2) / 10 == 8 or (s1 + s2) / 10 == 18) return true;
	return false;
}
bool cd13(int s1, int s2) {
	if ((s1 + s2) / 10 == 7 or (s1 + s2) / 10 == 17) return true;
	return false;
}
bool cd14(int s1, int s2) {
	if ((s1 + s2) / 10 == 6 or (s1 + s2) / 10 == 16) return true;
	return false;
}
bool cd15(int s1, int s2) {
	if ((s1 + s2) / 10 == 5 or (s1 + s2) / 10 == 15) return true;
	return false;
}
bool cd16(int s1, int s2) {
	if ((s1 + s2) / 10 == 4 or (s1 + s2) / 10 == 14) return true;
	return false;
}
bool cd17(int s1, int s2) {
	if ((s1 + s2) / 10 == 3 or (s1 + s2) / 10 == 13) return true;
	return false;
}
bool cd18(int s1, int s2) {
	if ((s1 + s2) / 10 == 2 or (s1 + s2) / 10 == 12) return true;
	return false;
}
bool cd19(int s1, int s2) {
	if ((s1 + s2) / 10 == 1 or (s1 + s2) / 10 == 11) return true;
	return false;
}
bool cd20(int s1, int s2) {
	if ((s1 + s2) / 10 == 10) return true;
	return false;
}

int main() {
	int p1_m = 10000, p2_m = 10000;
	int p1bm = 1000, p2bm = 1000;
	string p1_b;
	string p2_b;
	vector<int> p1_c(2);
	vector<int> p2_c(2);
	int p1_s = 0, p2_s = 0;

	cout << "                섯다" << endl;
	cout << "             p1         p2" << endl;
	cout << "남은금액 : " << p1_m << "     " << p2_m << endl;
	while (p1_m > 0 and p2_m > 0) {
		cout << "배팅금액 : " << p1bm << "     " << p2bm << endl;

		while (true) {
			random_device rd;
			mt19937_64 mt(rd());
			uniform_int_distribution<int> range(11, 102);
			int p1_1 = range(mt);
			int p2_1 = range(mt);
			if ((p1_1 % 10 == 1 and p2_1 % 10 == 1) or (p1_1 % 10 == 1 and p2_1 % 10 == 2) or (p1_1 % 10 == 2 and p2_1 % 10 == 1) or (p1_1 % 10 == 2 and p2_1 % 10 == 2)) {
				cout << "첫번째 카드 : " << p1_1 << "      " << p2_1 << endl;
				p1_c[0] = p1_1;   p2_c[0] = p2_1;
				break;
			}
		}
		cout << "콜, 더블, 올인, 다이 중 선택" << endl;
		for (int i = 0; i < 1; i++) {
			cin >> p1_b >> p2_b;
			if (p1_b == "콜") {
				p1bm = p1bm;
				p2bm = p2bm;
			}
			if (p1_b == "더블") {
				p1bm = 2 * p1bm;
				p2bm = 2 * p2bm;
			}
			if (p1_b == "올인") {
				p1bm = p1_m;
				p2bm = p2_m;
			}
			if (p1_b == "다이") {
				p1_m -= p1bm;
				cout << "p2 승리!  p2에게 " << p1bm << "원 지급" << endl;
				p2_m = p2_m + p1bm;
				cout << "남은금액 : " << p1_m << "     " << p2_m << endl;
				break;
			}
			if (p2_b == "콜") {
					p2bm = p2bm;
					p1bm = p1bm;
			}
			if (p2_b == "더블") {
					p2bm = 2 * p2bm;
					p1bm = 2 * p1bm;
			}
			if (p2_b == "올인") {
					p2bm = p2_m;
					p1bm = p1_m;
			}
			if (p2_b == "다이") {
					p2_m -= p2bm;
					cout << "p1 승리!  p1에게 " << p2bm << "원 지급" << endl;
					p1_m = p1_m + p2bm;
					cout << "남은금액 : " << p1_m << "     " << p2_m << endl;
					break;
			}
			p1_m -= p1bm;
			p2_m -= p2bm;
			cout << "       " << p1_b << "       " << p2_b << endl;
			cout << "배팅금액 : " << p1bm << "     " << p2bm << endl;
			cout << "남은금액 : " << p1_m << "     " << p2_m << endl;
		}
		if(p1_b != "다이" and p2_b != "다이"){
			while (true) {
				random_device rd;
				mt19937_64 mt(rd());
				uniform_int_distribution<int> range(11, 102);
				int p1_2 = range(mt);
				int p2_2 = range(mt);
				if ((p1_2 % 10 == 1 and p2_2 % 10 == 1) or (p1_2 % 10 == 1 and p2_2 % 10 == 2) or (p1_2 % 10 == 2 and p2_2 % 10 == 1) or (p1_2 % 10 == 2 and p2_2 % 10 == 2)) {
					cout << "두번째 카드 : " << p1_2 << "      " << p2_2 << endl;
					p1_c[1] = p1_2;  p2_c[1] = p2_2;
					break;
				}
			}
			sort(p1_c.begin(), p1_c.end());
			sort(p2_c.begin(), p2_c.end());
			int p11 = p1_c[0] + p1_c[1];
			int p22 = p2_c[0] + p2_c[1];
			if (cd(p1_c[0], p1_c[1])) {
				p1_s = 100;
				cout << "삼팔광땡" << "         ";
			}
			if (cd(p2_c[0], p2_c[1])) {
				p2_s = 100;
				cout << "삼팔광땡" << endl;
			}
			if (cd2(p1_c[0], p1_c[1])) {
				p1_s = 98;
				cout << "일삼광땡" << "         ";
				if (cd23(p2_c[0], p2_c[1])) {
					p2_s = 99;
					cout << "암행어사" << endl;
				}
			}
			if (cd2(p2_c[0], p2_c[1])) {
				p2_s = 98;
				cout << "일삼광땡" << endl;
				if (cd23(p1_c[0], p1_c[1])) {
					p1_s = 99;
					cout << "암행어사" << "         ";
				}
			}
			if (cd3(p1_c[0], p1_c[1])) {
				p1_s = 98;
				cout << "일팔광땡" << "         ";
				if (cd23(p2_c[0], p2_c[1])) {
					p2_s = 99;
					cout << "암행어사" << endl;
				}
			}
			if (cd3(p2_c[0], p2_c[1])) {
				p2_s = 98;
				cout << "일삼광땡" << endl;
				if (cd23(p1_c[0], p1_c[1])) {
					p1_s = 99;
					cout << "암행어사" << "         ";
				}
			}

			if (p1_c[0] == 101 and p1_c[1] == 102) {
				p1_s = 96;
				cout << "장땡" << "         ";
				if (p2_c[0] == 31 and p2_c[1] == 72) {
					p2_s = 97;
					cout << "땡잡이" << endl;
				}
			}
			if (p1_c[0] == 91 and p1_c[1] == 92) {
				p1_s = 94;
				cout << "9땡" << "         ";
				if (p2_c[0] == 31 and p2_c[1] == 72) {
					p2_s = 97;
					cout << "땡잡이" << endl;
				}
			}
			if (p1_c[0] == 81 and p1_c[1] == 82) {
				p1_s = 92;
				cout << "8땡" << "         ";
				if (p2_c[0] == 31 and p2_c[1] == 72) {
					p2_s = 97;
					cout << "땡잡이" << endl;
				}
			}
			if (p1_c[0] == 71 and p1_c[1] == 72) {
				p1_s = 90;
				cout << "7땡" << "         ";
				if (p2_c[0] == 31 and p2_c[1] == 72) {
					p2_s = 97;
					cout << "땡잡이" << endl;
				}
			}
			if (p1_c[0] == 61 and p1_c[1] == 62) {
				p1_s = 88;
				cout << "6땡" << "         ";
				if (p2_c[0] == 31 and p2_c[1] == 72) {
					p2_s = 97;
					cout << "땡잡이" << endl;
				}
			}
			if (p1_c[0] == 51 and p1_c[1] == 52) {
				p1_s = 86;
				cout << "5땡" << "         ";
				if (p2_c[0] == 31 and p2_c[1] == 72) {
					p2_s = 97;
					cout << "땡잡이" << endl;
				}
			}
			if (p1_c[0] == 41 and p1_c[1] == 42) {
				p1_s = 84;
				cout << "4땡" << "         ";
				if (p2_c[0] == 31 and p2_c[1] == 72) {
					p2_s = 97;
					cout << "땡잡이" << endl;
				}
			}
			if (p1_c[0] == 31 and p1_c[1] == 32) {
				p1_s = 82;
				cout << "3땡" << "         ";
				if (p2_c[0] == 31 and p2_c[1] == 72) {
					p2_s = 97;
					cout << "땡잡이" << endl;
				}
			}
			if (p1_c[0] == 21 and p1_c[1] == 22) {
				p1_s = 80;
				cout << "2땡" << "         ";
				if (p2_c[0] == 31 and p2_c[1] == 72) {
					p2_s = 97;
					cout << "땡잡이" << endl;
				}
			}
			if (p1_c[0] == 11 and p1_c[1] == 12) {
				p1_s = 78;
				cout << "1땡" << "         ";
				if (p2_c[0] == 31 and p2_c[1] == 72) {
					p2_s = 97;
					cout << "땡잡이" << endl;
				}
			}
			if (p2_c[0] == 101 and p2_c[1] == 102) {
				p2_s = 96;
				cout << "장땡" << endl;
				if (p1_c[0] == 31 and p1_c[1] == 72) {
					p1_s = 97;
					cout << "땡잡이" << "         ";
				}
			}
			if (p2_c[0] == 91 and p2_c[1] == 92) {
				p2_s = 94;
				cout << "9땡" << endl;
				if (p1_c[0] == 31 and p1_c[1] == 72) {
					p1_s = 97;
					cout << "땡잡이" << "         ";
				}
			}
			if (p2_c[0] == 81 and p2_c[1] == 82) {
				p2_s = 92;
				cout << "8땡" << endl;
				if (p1_c[0] == 31 and p1_c[1] == 72) {
					p1_s = 97;
					cout << "땡잡이" << "         ";
				}
			}
			if (p2_c[0] == 71 and p2_c[1] == 72) {
				p2_s = 90;
				cout << "7땡" << endl;
				if (p1_c[0] == 31 and p1_c[1] == 72) {
					p1_s = 97;
					cout << "땡잡이" << "         ";
				}
			}
			if (p2_c[0] == 61 and p2_c[1] == 62) {
				p2_s = 88;
				cout << "6땡" << endl;
				if (p1_c[0] == 31 and p1_c[1] == 72) {
					p1_s = 97;
					cout << "땡잡이" << "         ";
				}
			}
			if (p2_c[0] == 51 and p2_c[1] == 52) {
				p2_s = 86;
				cout << "5땡" << endl;
				if (p1_c[0] == 31 and p1_c[1] == 72) {
					p1_s = 97;
					cout << "땡잡이" << "         ";
				}
			}
			if (p2_c[0] == 41 and p2_c[1] == 42) {
				p2_s = 84;
				cout << "4땡" << endl;
				if (p1_c[0] == 31 and p1_c[1] == 72) {
					p1_s = 97;
					cout << "땡잡이" << "         ";
				}
			}
			if (p2_c[0] == 31 and p2_c[1] == 32) {
				p2_s = 82;
				cout << "3땡" << endl;
				if (p1_c[0] == 31 and p1_c[1] == 72) {
					p1_s = 97;
					cout << "땡잡이" << "         ";
				}
			}
			if (p2_c[0] == 21 and p2_c[1] == 22) {
				p2_s = 80;
				cout << "2땡" << endl;
				if (p1_c[0] == 31 and p1_c[1] == 72) {
					p1_s = 97;
					cout << "땡잡이" << "         ";
				}
			}
			if (p2_c[0] == 11 and p2_c[1] == 12) {
				p2_s = 78;
				cout << "1땡" << endl;
				if (p1_c[0] == 31 and p1_c[1] == 72) {
					p1_s = 97;
					cout << "땡잡이" << "         ";
				}
			}
			if ((p1_c[0] == 11 and p1_c[1] == 21) or (p1_c[0] == 12 and p1_c[1] == 21) or (p1_c[0] == 11 and p1_c[1] == 22) or (p1_c[0] == 12 and p1_c[1] == 22)) {
				p1_s = 76;
				cout << "알리" << "         ";
			}
			if ((p1_c[0] == 11 and p1_c[1] == 41) or (p1_c[0] == 12 and p1_c[1] == 41) or (p1_c[0] == 11 and p1_c[1] == 42) or (p1_c[0] == 12 and p1_c[1] == 42)) {
				p1_s = 74;
				cout << "독사" << "         ";
			}
			if ((p1_c[0] == 11 and p1_c[1] == 91) or (p1_c[0] == 12 and p1_c[1] == 91) or (p1_c[0] == 11 and p1_c[1] == 92) or (p1_c[0] == 12 and p1_c[1] == 92)) {
				p1_s = 72;
				cout << "구삥" << "         ";
			}
			if ((p1_c[0] == 11 and p1_c[1] == 101) or (p1_c[0] == 12 and p1_c[1] == 101) or (p1_c[0] == 11 and p1_c[1] == 102) or (p1_c[0] == 12 and p1_c[1] == 102)) {
				p1_s = 70;
				cout << "장삥" << "         ";
			}
			if ((p1_c[0] == 41 and p1_c[1] == 101) or (p1_c[0] == 42 and p1_c[1] == 101) or (p1_c[0] == 41 and p1_c[1] == 102) or (p1_c[0] == 42 and p1_c[1] == 102)) {
				p1_s = 68;
				cout << "장사" << "         ";
			}
			if ((p1_c[0] == 41 and p1_c[1] == 61) or (p1_c[0] == 42 and p1_c[1] == 61) or (p1_c[0] == 41 and p1_c[1] == 62) or (p1_c[0] == 42 and p1_c[1] == 62)) {
				p1_s = 66;
				cout << "세륙" << "         ";
			}
			else if ((p11 / 10 == 9) or (p11 / 10 == 19)) {
				p1_s = 64;
				cout << "갑오" << "         ";
			}
			else if ((p11 / 10 == 8) or (p11 / 10 == 18)) {
				p1_s = 62;
				cout << "여덟끗" << "         ";
			}
			else if ((p11 / 10 == 7) or (p11 / 10 == 17)) {
				p1_s = 60;
				cout << "일곱끗" << "         ";
			}
			else if ((p11 / 10 == 6) or (p11 / 10 == 16)) {
				p1_s = 58;
				cout << "여섯끗" << "         ";
			}
			else if ((p11 / 10 == 5) or (p11 / 10 == 15)) {
				p1_s = 56;
				cout << "다섯끗" << "         ";
			}
			else if ((p11 / 10 == 4) or (p11 / 10 == 14)) {
				p1_s = 54;
				cout << "네끗" << "         ";
			}
			else if ((p11 / 10 == 3) or (p11 / 10 == 13)) {
				p1_s = 52;
				cout << "세끗" << "         ";
			}
			else if ((p11 / 10 == 2) or (p11 / 10 == 12)) {
				p1_s = 50;
				cout << "두끗" << "         ";
			}
			else if ((p11 / 10 == 1) or (p11 / 10 == 11)) {
				p1_s = 48;
				cout << "한끗" << "         ";
			}
			else if ((p11 / 10 == 10)) {
				p1_s = 46;
				cout << "망통" << "         ";
			}
			if ((p2_c[0] == 11 and p2_c[1] == 21) or (p2_c[0] == 12 and p2_c[1] == 21) or (p2_c[0] == 11 and p2_c[1] == 22) or (p2_c[0] == 12 and p2_c[1] == 22)) {
				p2_s = 76;
				cout << "알리" << endl;
			}
			if ((p2_c[0] == 11 and p2_c[1] == 41) or (p2_c[0] == 12 and p2_c[1] == 41) or (p2_c[0] == 11 and p2_c[1] == 42) or (p2_c[0] == 12 and p2_c[1] == 42)) {
				p2_s = 74;
				cout << "독사" << endl;
			}
			if ((p2_c[0] == 11 and p2_c[1] == 91) or (p2_c[0] == 12 and p2_c[1] == 91) or (p2_c[0] == 11 and p2_c[1] == 92) or (p2_c[0] == 12 and p2_c[1] == 92)) {
				p2_s = 72;
				cout << "구삥" << endl;
			}
			if ((p2_c[0] == 11 and p2_c[1] == 101) or (p2_c[0] == 12 and p2_c[1] == 101) or (p2_c[0] == 11 and p2_c[1] == 102) or (p2_c[0] == 12 and p2_c[1] == 102)) {
				p2_s = 70;
				cout << "장삥" << endl;
			}
			if ((p2_c[0] == 41 and p2_c[1] == 101) or (p2_c[0] == 42 and p2_c[1] == 101) or (p2_c[0] == 41 and p2_c[1] == 102) or (p2_c[0] == 42 and p2_c[1] == 102)) {
				p2_s = 68;
				cout << "장사" << endl;
			}
			if ((p2_c[0] == 41 and p2_c[1] == 61) or (p2_c[0] == 42 and p2_c[1] == 61) or (p2_c[0] == 41 and p2_c[1] == 62) or (p2_c[0] == 42 and p2_c[1] == 62)) {
				p2_s = 66;
				cout << "세륙" << endl;
			}
			else if ((p22 / 10 == 9) or (p22 / 10 == 19)) {
				p2_s = 64;
				cout << "갑오" << endl;
			}
			else if ((p22 / 10 == 8) or (p22 / 10 == 18)) {
				p2_s = 62;
				cout << "여덟끗" << endl;
			}
			else if ((p22 / 10 == 7) or (p22 / 10 == 17)) {
				p2_s = 60;
				cout << "일곱끗" << endl;
			}
			else if ((p22 / 10 == 6) or (p22 / 10 == 16)) {
				p2_s = 58;
				cout << "여섯끗" << endl;
			}
			else if ((p22 / 10 == 5) or (p22 / 10 == 15)) {
				p2_s = 56;
				cout << "다섯끗" << endl;
			}
			else if ((p22 / 10 == 4) or (p22 / 10 == 14)) {
				p2_s = 54;
				cout << "네끗" << endl;
			}
			else if ((p22 / 10 == 3) or (p22 / 10 == 13)) {
				p2_s = 52;
				cout << "세끗" << endl;
			}
			else if ((p22 / 10 == 2) or (p22 / 10 == 12)) {
				p2_s = 50;
				cout << "두끗" << endl;
			}
			else if ((p22 / 10 == 1) or (p22 / 10 == 11)) {
				p2_s = 48;
				cout << "한끗" << endl;
			}
			else if ((p22 / 10 == 10)) {
				p2_s = 46;
				cout << "망통" << endl;
			}
			if (p1_s > p2_s) {
				cout << "             p1 승리!" << endl;
				cout << "p1 에게 " << p1bm + p2bm << "원 지급" << endl;
				p1_m = p1_m + p1bm + p2bm;
				cout << "남은금액 : " << p1_m << "     " << p2_m << endl;
			}
			if (p1_s < p2_s) {
				cout << "             p2 승리!" << endl;
				cout << "p2 에게 " << p1bm + p2bm << "원 지급" << endl;
				p2_m = p2_m + p1bm + p2bm;
				cout << "남은금액 : " << p1_m << "     " << p2_m << endl;
			}
			if (p1_s == p2_s) {
				cout << "             무승부!" << endl;
				cout << "배팅금을 돌려드립니다" << endl;
				p1_m = p1_m + p1bm;
				p2_m = p2_m + p2bm;
				cout << "남은금액 : " << p1_m << "     " << p2_m << endl;
			}
		}
		if (p1_m == 0 or p2_m == 0) break;
		p1bm = 1000; p2bm = 1000;
		string cou;
		cout << "계속하시겠습니까?  Y or N" << endl;
		cin >> cou;
		if (cou == "Y") {
			continue;
		}
		else if (cou == "N") {
			break;
		}
	}
}
