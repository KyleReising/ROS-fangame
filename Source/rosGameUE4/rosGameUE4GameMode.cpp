// Copyright Epic Games, Inc. All Rights Reserved.

#include "rosGameUE4GameMode.h"
#include "rosGameUE4Character.h"

ArosGameUE4GameMode::ArosGameUE4GameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ArosGameUE4Character::StaticClass();	
}
