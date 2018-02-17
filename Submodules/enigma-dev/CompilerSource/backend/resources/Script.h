/*
 * Copyright (C) 2010 IsmAvatar <IsmAvatar@gmail.com>
 *
 * This file is part of Enigma Plugin.
 * Enigma Plugin is free software and comes with ABSOLUTELY NO WARRANTY.
 * See LICENSE for details.
 */

#ifndef ENIGMA_SCRIPT_H
#define ENIGMA_SCRIPT_H

#include "backend/JavaStruct.h"

struct Script
{
	String name;
	int id;

	String code;
};

#endif