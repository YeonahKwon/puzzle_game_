#include <bangtal.h>
using namespace bangtal;


int main()
{	
	setGameOption(GameOption::GAME_OPTION_INVENTORY_BUTTON, false);
	setGameOption(GameOption::GAME_OPTION_MESSAGE_BOX_BUTTON, false);

	auto scene = Scene::create("퍼즐게임", "Images/빈칸.png");
	auto picture = Object::create("Images/세일러문.png", scene, 450, 150);



	auto startButton = Object::create("Images/startbutton.png", scene, 470, 70);

	startButton->setOnMouseCallback([&](ObjectPtr object, int x, int y, MouseAction action)->bool {

		startButton->hide();
		picture->hide();

		auto rect6 = Object::create("Images/rect6.png", scene, 450, 420);
		auto rect3 = Object::create("Images/rect3.png", scene, 582, 420);
		auto rect2 = Object::create("Images/rect2.png", scene, 717, 420);

		auto rect5 = Object::create("Images/rect5.png", scene, 450, 287);
		auto rect8 = Object::create("Images/rect8.png", scene, 582, 287);
		auto rect7 = Object::create("Images/rect7.png", scene, 717, 287);

		auto rect1 = Object::create("Images/rect1.png", scene, 450, 153); //기준
		auto rect4 = Object::create("Images/rect4.png", scene, 582, 154);

		auto white = Object::create("Images/empty.png", scene, 716, 154);



		return true;

		});

	startGame(scene);
	return 0;
}