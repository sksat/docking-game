#ifndef MENU_H_
#define MENU_H_

#include "Scene.h"

class Menu : public Scene {
public:
	Menu();
	~Menu();
	
	void update();
	void draw();
private:
	int now_button;
};

#endif
