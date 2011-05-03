/*
 *  PolyVector2.cpp
 *  Poly
 *
 *  Created by Ivan Safrin on 3/14/08.
 *  Copyright 2008 Ivan Safrin. All rights reserved.
 *
 */

#include "PolyVector2.h"

using namespace Polycode;
	
Vector2::Vector2() : x(0), y(0) {
}
	
Vector2::Vector2(Number x, Number y) {
	this->x = x;
	this->y = y;
}
	
	
Vector2::~Vector2() {
}