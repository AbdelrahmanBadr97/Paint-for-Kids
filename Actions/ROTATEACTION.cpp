#include "ROTATEACTION.h"
#include "..\ApplicationManager.h"

ROTATEACTION::ROTATEACTION(ApplicationManager* pApp):Action(pApp)
{
}


ROTATEACTION::~ROTATEACTION()
{
	
}

void ROTATEACTION::ReadActionParameters()
{

}

void ROTATEACTION::Execute()
{
	if (pManager->ThereIsSelectedFigs()) 
	{
		pManager->GetOutput()->CreateRotateToolBar();
		pManager->CheckRotate();
	}
	else
	{
		pManager->GetOutput()->PrintMessage("There is no selected figures to rotate");
		PlaySound(TEXT("wrong.wav"), NULL, SND_FILENAME | SND_ASYNC);
	}
}
