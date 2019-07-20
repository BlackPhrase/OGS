/*
Copyright (C) 1997-2001 Id Software, Inc.
Copyright (C) 2019 BlackPhrase

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/

/// @file

#pragma once

#include "Widget.hpp"

//menuslider_s
class CSlider : public menucommon_s
{
public:
	CSlider(float afMinValue, float afMaxValue);
	~CSlider();
	
	void Draw() override;
	
	void DoSlide( int dir );

	float minvalue{0.0f};
	float maxvalue{0.0f};
	float curvalue{0.0f};

	float range{0.0f};
};