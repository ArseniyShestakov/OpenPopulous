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

#ifndef _OPENPOP_H_
#define _OPENPOP_H_

#include <windows.h>
#include <string>

namespace Graphics {
	class Renderer;
	class SpriteFileManager;
}

namespace Widgets {
	class Screen;
}

namespace Languages {
	class Language;
}

namespace Game {
	class GameHost;
}

class OpenPop
{
public:
	HWND							hWnd;
	sint32							mLastTick;
	sint32							mFrameRate;
	uint64							mOpenPopTickCount;
	Widgets::Screen*				mCurrentScreen;
	Widgets::Screen*				mChangeScreen;
	Languages::Language*			mCurrentLanguage;

	Graphics::SpriteFileManager*	mSpriteFileManager;

	Game::GameHost*					mGameHost;

	OpenPop();
	~OpenPop();

	sint32 Init();
	void Run();
	void Draw();
	void Close();

	std::string GetText(uint32 index);
	void ChangeScreen(Widgets::Screen* screen);

	void MouseMove(sint32 x, sint32 y);
	void MouseDown(sint32 button, sint32 x, sint32 y);

private:
	Graphics::Renderer* mRenderer;
};

#endif