////////////////////////////////////////////////////////////////////////////////
// place.h
// Red bot spring 2014 - BSOD Elite Strategy
// placing header file
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

#ifndef PLACE_H_INCLUDED
#define PLACE_H_INCLUDED

// public functions headers:

void place_init();          // must be called once at the start of a program
void place_reset();         // ! must be executed before every placing
void place_finish();        // must be called once, when ending the program

void precalculate();        // must be executed before placing, when shops were mofified after last precalculate() calling
void place();               // place shop

// debug "printing functions":
#ifdef DEBUG
    void print_heuristic();     // print heuristics function results for whole map
    void print_place_cities();  // print result of precalculation
#endif // DEBUG

#endif // PLACE_H_INCLUDED
