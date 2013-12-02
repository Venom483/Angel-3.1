
#include "stdafx.h"
#include "MyGameManager.h"

int main(int argc, char* argv[])
{
	// get things going
	//  optional parameters:
	//		int windowWidth			default: 1024
	//		int windowHeight		default: 768
	//		std::string windowName	default: "Angel Engine"
	//		bool antiAliasing		default: false
	//		bool fullScreen			default: false
	theWorld.Initialize(600, 600);
	
	//adds the default grid so you can more easily place Actors
	theWorld.Add(new GridActor(Color(0.8,0.8,0.8,1),Color(0.8,0.8,0.8,1), 1.0, Vector2(-10.0f, -10.0f), Vector2(10.0f, 10.0f)), -1);
	
	theWorld.SetGameManager(&theGame);

	//MyGameManager test = MyGameManager::GetInstance();
		
	// do all your setup first, because this function won't return until you're exiting
	theWorld.StartGame();
	
	// any cleanup can go here
	theWorld.Destroy();
	
	return 0;
}
