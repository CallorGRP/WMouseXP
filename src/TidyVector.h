/*
Copyright (C) 2007-2010 Kasidit Yusuf.

This file is part of WMouseXP.

WMouseXP is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

WMouseXP is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with WMouseXP. If not, see <http://www.gnu.org/licenses/>.
*/


/////////////////////////////////////////////////////////////////////
// TidyVector.h An auto memory clearing derivative of CPtrArray
// Autor: Kasidit Yusuf
/////////////////////////////////////////////////////////////////////

#pragma once
#include "afxcoll.h"

class TidyVector :
	public CPtrArray
	{
	public:
		TidyVector(void);
		void RemoveAt( int nIndex);
		void RemoveAll( );
		~TidyVector(void);
	};
