//////////////////////////////////////////////////////////////////////
// The Forgotten Server - a server application for the MMORPG Tibia
//////////////////////////////////////////////////////////////////////
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software Foundation,
// Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
//////////////////////////////////////////////////////////////////////

#ifndef __ACCOUNT__
#define __ACCOUNT__

#include <list>
#include <string>
#include "definitions.h"
#include "enums.h"

struct Account {
	uint32_t id, lastDay, premiumDays;
	AccountType_t accountType;
	std::string name;
	std::list<std::string> charList;

	Account() {
		id = 0;
		accountType = ACCOUNT_TYPE_NORMAL;
	}
};

#endif
