#include <iostream>
#include <string>
#include <vector>
#include "pre.h"
using namespace std;

void skip() {   //関数の追加　skip(), greet()
	cout << "不正な入力です\n問題をスキップします\n" << endl;
}
void greet() {
	cout << "お疲れ様でした\n" << endl;
}
void exa1() { //問題の関数の追加　exa1(), exa2(), exa3()
	while (1) {
		// ゲームブロックを表示する
		printGameBlocks();

		// キーボードからの入力をチェックする
		CheckInput();

		// 結果判定
		int GameClear = CheckGameClear();

		// 解答表示
		if (GameClear == true) {
			printAnswer();
			break;
		}
	}
}
void exa2() {
	while (1) {
		// ゲームブロックを表示する
		printGame2();

		// キーボードからの入力をチェックする
		CheckInput2();

		// 結果判定
		int GameClear2 = CheckGameClear2();

		// 解答表示
		if (GameClear2 == true) {
			printAnswer2();
			break;
		}
	}
}
void exa3() {
	while (1) {
		// ゲームブロックを表示する
		printGame3();

		// キーボードからの入力をチェックする
		CheckInput3();

		// 結果判定
		int GameClear3 = CheckGameClear3();

		// 解答表示
		if (GameClear3 == true) {
			printAnswer3();
			break;
		}
	}
}

//-------------------------------------------
// main関数 //追加
//-------------------------------------------

int main(void) {
	system("cls");
	vector<int>vec(3);
	stage menu;
	menu.titlecall = "start";
	menu.count = "3";
	menu.start();
	string str;
	cin >> str;
	if (str != "start")skip();
	else if (str == "start")exa1();
	int GameClear = CheckGameClear();
	if (GameClear == true) {
		stage A1;
		A1.score = 50;
		A1.show();
		vec[0] = A1.score;
		stage A2;
		A2.pic = "めがね";
		A2.ans();
	}

	stage B;
	B.titlecall = "next";
	B.count = "3";
	B.start();
	cin >> str;
	if (str != "next")skip();
	else if (str == "next")exa2();
	int GameClear2 = CheckGameClear2();
	if (GameClear2 == true) {
		stage B1;
		B1.score = 60;
		B1.show();
		vec[1] = B1.score;
		stage B2;
		B2.pic = "ねこ";
		B2.ans();
	}

	stage C;
	C.titlecall = "last";
	C.count = "3";
	C.start();
	cin >> str;
	if (str != "last")skip();
	else if (str == "last")exa3();
	int GameClear3 = CheckGameClear3();
	if (GameClear3 == true) {
		stage C1;
		C1.score = 70;
		C1.show();
		vec[2] = C1.score;
		stage C2;
		C2.pic = "mamegoma";
		C2.ans();
	}
	stage result;
	result.endcall = "close";
	result.end();

	cin >> str;
	if (str == "close")greet();
	cout << "あなたの得点済みは" << endl;
	for (auto i = vec.begin(); i != vec.end(); ++i) {
		cout << *i << ", ";
	}
	cout << endl;

}
