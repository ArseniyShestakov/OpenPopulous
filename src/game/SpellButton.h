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

#ifndef _GAME_SPELLBUTTON_H_
#define _GAME_SPELLBUTTON_H_

class OpenPop;

namespace Graphics
{
	class Renderer;
	class PaletteFile;
}

namespace Game
{
struct Spell;
class SpellButton
{
public:
	OpenPop*				mOpenPop;
	Graphics::PaletteFile*	mPaletteFile;

	sint32			mX;
	sint32			mY;
	sint32			mWidth;
	sint32			mHeight;

	sint32			mSpellIDX;
	uint32			mChargeAmount;
	uint32			mChargeMax;
	uint32			mSpellShots;
	uint32			mSpellRedShots;
	uint32			mSpellMaxShots;

	SpellButton(OpenPop* openPop);
	~SpellButton();

	Spell* GetSpell();

	virtual void Update();
	virtual void Draw(Graphics::Renderer* renderer);
};

}

#endif