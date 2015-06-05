////////////////////////////////////////////////////////////////////////////////
// prize.h
// Red bot spring 2014 - BSOD Elite Strategy
// prize calculating header file
// (c) Jan Horacek, team BSOD
// jan.horacek@seznam.cz
// 27.04.2014
// v1.0
////////////////////////////////////////////////////////////////////////////////

/*
   Copyright 2014 Jan Horacek

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#ifndef PRIZE_H_INCLUDED
#define PRIZE_H_INCLUDED

#include "main.h"

// public functions headers:

void init_shop_prizes();            // must be called before calculating
void finish_shop_prizes();          // must be called before exeting a program
void set_shop_prizes();             // set prizes of all shops

#endif // PRIZE_H_INCLUDED
