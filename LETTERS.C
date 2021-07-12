#include <graphics.h>
#include <conio.h>

// A-Z functions
void drawA (int x, int y, int w, int h) {
	line(x, y + h, x + (w / 2), y);
	line(x + (w / 2), y, x + w, y + h);
	line(x, y + (h / 2), x + w, y + (h / 2));
}
void drawB (int x, int y, int w, int h) {
	line(x, y, x, y + h);
	line(x, y, x + w, y + (h / 4));
	line(x + w, y + (h / 4), x, y + (h / 2));
	line(x, y + (h / 2), x + w, y + (h - (h / 4)));
	line(x + w, y + (h - (h / 4)), x, y + h);
}
void drawC (int x, int y, int w, int h) {
	line(x, y + (h / 2), x + w, y);
	line(x, y + (h / 2), x + w, y + h);
}
void drawD (int x, int y, int w, int h) {
	line(x, y, x, y + h);
	line(x, y, x + w, y + (h / 2));
	line(x, y + h, x + w, y + (h / 2));
}
void drawE (int x, int y, int w, int h) {
	line(x, y, x, y + h);
	line(x, y, x + w, y);
	line(x, y + (h / 2), x + w, y + (h / 2));
	line(x, y + h, x + w, y + h);
}
void drawF (int x, int y, int w, int h) {
	line(x, y, x, y + h);
	line(x, y, x + w, y);
	line(x, y + (h / 2), x + w, y + (h / 2));
}
void drawG (int x, int y, int w, int h) {
	line(x, y, x, y + h);
	line(x, y, x + w, y);
	line(x, y + h, x + w, y + h);
	line(x + w, y + h, x + w, y + (h / 2));
	line(x + w, y + (h / 2), x + (w / 2), y + (h / 2));
}
void drawH (int x, int y, int w, int h) {
	line(x, y, x, y + h);
	line(x + w, y, x + w, y + h);
	line(x, y + (h / 2), x + w, y + (h / 2));
}
void drawI (int x, int y, int w, int h) {
	line(x, y, x + w, y);
	line(x, y + h, x + w, y + h);
	line(x + (w / 2), y, x + (w / 2), y + h);
}
void drawJ (int x, int y, int w, int h) {
	line(x + (w / 2), y, x + (w / 2), y + h);
	line(x, y, x + w, y);
	line(x, y + (h / 2), x, y + h);
	line(x, y + h, x + (w / 2), y + h);
}
void drawK (int x, int y, int w, int h) {
	line(x, y, x, y + h);
	line(x, y + (h / 2), x + w, y);
	line(x, y + (h / 2), x + w, y + h);
}
void drawL (int x, int y, int w, int h) {
	line(x, y, x, y + h);
	line(x, y + h, x + w, y + h);
}
void drawM (int x, int y, int w, int h) {
	line(x, y, x, y + h);
	line(x, y, x + (w / 2), y + (h / 2));
	line(x + (w / 2), y + (h / 2), x + w, y);
	line(x + w, y, x + w, y + h);
}
void drawN (int x, int y, int w, int h) {
	line(x, y, x, y + h);
	line(x, y, x + w, y + h);
	line(x + w, y, x + w, y + h);
}
void drawO (int x, int y, int w, int h) {
	line(x, y + (h / 2), x + (w / 2), y);
	line(x, y + (h / 2), x + (w / 2), y + h);
	line(x + (w / 2), y, x + w, y + (h / 2));
	line(x + (w / 2), y + h, x + w, y + (h / 2));
}
void drawP (int x, int y, int w, int h) {
	line(x, y, x, y + h);
	line(x, y, x + w, y);
	line(x + w, y, x + w, y + (h / 2));
	line(x, y + (h / 2), x + w, y + (h / 2));
}
void drawQ (int x, int y, int w, int h) {
	line(x, y + (h / 2), x + (w / 2), y);
	line(x, y + (h / 2), x + (w / 2), y + h);
	line(x + (w / 2), y, x + w, y + (h / 2));
	line(x + (w / 2), y + h, x + w, y + (h / 2));
	line(x + (w / 2), y + (h / 2), x + w, y + h);
}
void drawR (int x, int y, int w, int h) {
	line(x, y, x, y + h);
	line(x, y, x + w, y);
	line(x + w, y, x, y + (h / 2));
	line(x, y + (h / 2), x + w, y + h);
}
void drawS (int x, int y, int w, int h) {
	line(x, y + (h / 4), x + w, y);
	line(x, y + (h / 4), x + w, y + (h - (h / 4)));
	line(x, y + h, x + w, y + (h - (h / 4)));
}
void drawT (int x, int y, int w, int h) {
	line(x, y, x + w, y);
	line(x + (w / 2), y, x + (w / 2), y + h);
}
void drawU (int x, int y, int w, int h) {
	line(x, y, x, y + h);
	line(x, y + h, x + w, y + h);
	line(x + w, y, x + w, y + h);
}
void drawV (int x, int y, int w, int h) {
	line(x, y, x + (w / 2), y + h);
	line(x + (w / 2), y + h, x + w, y);
}
void drawW (int x, int y, int w, int h) {
	line(x, y, x + (w / 4), y + h);
	line(x + (w / 4), y + h, x + (w / 2), y + (h / 2));
	line(x + (w / 2), y + (h / 2), x + (w - (w / 4)), y + h);
	line(x + (w - (w / 4)), y + h, x + w, y);
}
void drawX (int x, int y, int w, int h) {
	line(x, y, x + w, y + h);
	line(x, y + h, x + w, y);
}
void drawY (int x, int y, int w, int h) {
	line(x, y, x + (w / 2), y + (h / 2));
	line(x + (w / 2), y + (h / 2), x + w, y);
	line(x + (w / 2), y + (h / 2), x + (w / 2), y + h);
}
void drawZ (int x, int y, int w, int h) {
	line(x, y, x + w, y);
	line(x, y + h, x + w, y);
	line(x, y + h, x + w, y + h);
}

// Heart function
void drawHeart (int x, int y, int w, int h) {
	line(x, y + (h / 4), x + (w / 4), y);
	line(x + (w / 4), y, x + (w / 2), y + (h / 4));
	line(x + (w / 2), y + (h / 4), x + (w - (w / 4)), y);
	line(x + (w - (w / 4)), y, x + w, y + (h / 4));
	line(x, y + (h / 4), x + (w / 2), y + h);
	line(x + (w / 2), y + h, x + w, y + (h / 4));
}

void main () {
	int driver = DETECT, mode;

	clrscr();

	initgraph(&driver, &mode, "C://TURBOC3//BGI");

	// VAIBHAV
	drawV(150, 25, 10, 20);
	drawA(175, 25, 10, 20);
	drawI(200, 25, 10, 20);
	drawB(225, 25, 10, 20);
	drawH(250, 25, 10, 20);
	drawA(275, 25, 10, 20);
	drawV(300, 25, 10, 20);

	// ACHARYA
	drawA(150, 50, 10, 20);
	drawC(175, 50, 10, 20);
	drawH(200, 50, 10, 20);
	drawA(225, 50, 10, 20);
	drawR(250, 50, 10, 20);
	drawY(275, 50, 10, 20);
	drawA(300, 50, 10, 20);

	// Heart
	drawHeart(350, 25, 40, 45);


	// A-Z
	drawA(25, 100, 20, 20);
	drawB(50, 100, 20, 20);
	drawC(75, 100, 20, 20);
	drawD(100, 100, 20, 20);
	drawE(125, 100, 20, 20);
	drawF(150, 100, 20, 20);
	drawG(175, 100, 20, 20);
	drawH(200, 100, 20, 20);
	drawI(225, 100, 20, 20);
	drawJ(250, 100, 20, 20);
	drawK(275, 100, 20, 20);
	drawL(300, 100, 20, 20);
	drawM(325, 100, 20, 20);
	drawN(350, 100, 20, 20);
	drawO(375, 100, 20, 20);
	drawP(400, 100, 20, 20);
	drawQ(425, 100, 20, 20);
	drawR(450, 100, 20, 20);
	drawS(475, 100, 20, 20);
	drawT(500, 100, 20, 20);
	drawU(525, 100, 20, 20);
	drawV(25, 125, 20, 20);
	drawW(50, 125, 20, 20);
	drawX(75, 125, 20, 20);
	drawY(100, 125, 20, 20);
	drawZ(125, 125, 20, 20);

	getch();
	closegraph();
}
