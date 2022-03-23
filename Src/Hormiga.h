#pragma once
#include "StateMachine.h"
#include "Drawable.h"

//Para los que no lo saben
//las hormigas son criaturas
//redondas y amarillas
//no hagan caso al resto

#define HORMIGAVEL 0.4f
class Tablero;

class Matador;
class Hormiga : public DrawBase, public UpdateBase
{
	
	StateMachine<Hormiga>* m_pStateMachine;
	Texture m_img;
	Sprite m_spr;
	Tablero* tablero;
	Text m_text;

	Vector2f dir;

public:

	StateMachine<Hormiga>* GetFSM()const;
	Tablero* GetTablero();	

	void Draw(RenderWindow* wnd);
	void Update();

	void SetPosition(Vector2f pos);
	Vector2f GetPosition();
	void ChangeDirection();
	void Move();
	

	Hormiga(Tablero* tab);
	~Hormiga(void);
};

