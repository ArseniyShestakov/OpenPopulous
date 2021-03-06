/********************************************************************** 
  This file is part of OpenPop

  OpenPop is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  any later version.

  OpenPop is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with OpenPop.  If not, see <http://www.gnu.org/licenses/>.
***********************************************************************/

#include "..\stdafx.h"

#include "..\OpenPop.h"
#include "..\Config.h"
#include "..\Graphics\Renderer.h"
#include "..\Graphics\PaletteFile.h"
#include "..\Graphics\SpriteFile.h"
#include "..\Graphics\SpriteFileManager.h"
#include "..\Widgets\Screen.h"

#include "..\Graphics\HFX_Defs.h"

#include "Panel.h"
#include "GameScreen.h"

using namespace Graphics;
using namespace Game;

GameScreen::GameScreen(OpenPop* openpop) :
	Screen(openpop)
{
	//mPaletteFile = new PaletteFile(gConfig->GetPopFile("Data\\pal0-c.dat"));

	mPanel = new Panel(openpop);
	mPanel->mX = 0;
	mPanel->mY = 0;
	mPanel->mWidth = 100;
	mPanel->mHeight = 480;
}

GameScreen::~GameScreen()
{
	delete mPanel;
}

void GameScreen::MouseDown(sint32 button, sint32 x, sint32 y)
{
	Screen::MouseDown(button, x, y);
}


void GameScreen::Draw(Renderer* renderer)
{
	Screen::Draw(renderer);

	mPanel->Draw(renderer);
}