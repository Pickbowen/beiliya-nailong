#include <bits/stdc++.h>
#include <graphics.h>
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")

using namespace std;

int main() {
	cout << "我未必没有禁用控制台?"<<endl;
	initgraph(800, 450, EW_NOCLOSE);
	settextstyle(25, 0, "微软雅黑");

	IMAGE bkimg;
	loadimage(&bkimg, "nail.jpg");
	putimage(0, 20, &bkimg);
	loadimage(&bkimg, "bliy.jpg");
	putimage(400, 20, &bkimg);

	//fillroundrect(0, 0, 100, 30,5,5);
	outtextxy(0, 0, "按F退出      按下1重播");
	outtextxy(50, 300, "小朋友们你们好啊, 我是贝利亚, 我要来入侵地球了!");

	mciSendString("open cloudy.mp3", 0, 0, 0);
	mciSendString("play cloudy.mp3", 0, 0, 0);

	ExMessage m;
	while (1) {
		peekmessage(&m, EX_KEY);
		if (m.message == WM_KEYDOWN) {
			if (m.vkcode == 'F') {
				mciSendString("close cloudy.mp3", 0, 0, 0);
				closegraph();
				return 0;
			}
			if (m.vkcode == '1') {
				mciSendString("close cloudy.mp3", 0, 0, 0);
				mciSendString("open cloudy.mp3", 0, 0, 0);
				mciSendString("play cloudy.mp3", 0, 0, 0);
			}
		}
	}
	return 0;
}