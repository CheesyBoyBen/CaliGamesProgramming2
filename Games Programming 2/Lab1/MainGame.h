#pragma once
#include <SDL\SDL.h>
#include <GL/glew.h>
#include <SDL/SDL_mixer.h>
#include "Display.h" 
#include "Shader.h"
#include "Mesh.h"
#include "Texture.h"
#include "transform.h"
#include "SDLAudio.h"

enum class GameState{PLAY, EXIT};

class MainGame
{
public:
	MainGame();
	~MainGame();

	void run();

private:

	void initSystems();
	void processInput();
	void gameLoop();
	void drawGame();
	void input();
	bool collision(glm::vec3 m1Pos, float m1Rad, glm::vec3 m2Pos, float m2Rad);
	//void playAudio(unsigned int Source, glm::vec3 pos);

	Display _gameDisplay;
	GameState _gameState;
	Mesh mesh1;
	Mesh mesh2;
	Mesh mesh3;
	Camera myCamera;
	Shader shader;
	SDLAudio gameAudio;
	SDLAudio Audio;

	float counter;
	unsigned int whistle;
	unsigned int backGroundMusic;

	GLfloat Light_Ambient[4] = { 0.1f, 0.1f, 0.4f , 1.0f };

};

