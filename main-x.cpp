/*
Dr. Nord's Hello World in C++
The extended "Hello World" program for C++ beginners with explanatory comments.

Copyright (C) 2021 Dr. Nord
<nordexium@gmail.com>

This file is part of "Dr. Nord's Hello World in C++" Project (hereinafter referred to as "File").
The "File" is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
The "File" is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with this "File". If not, see <https://www.gnu.org/licenses/>.
SPDX License Identifier: GPL-3.0-or-later
*/

//BEGIN of the Preprocessor Directives Section
#include <iostream> //input/output library header
#include <stdio.h> //standard input/output library header
//END of the Preprocessor Directives Section

using namespace std;//prescribes use of the Standard Namespace

//You can add more preprocessor directives here if needed.

int main() //the Main-function header
{ //BEGIN of the program body

    //Console output of text information
    cout << "HELLO WORLD\n"; //program title, note the escape sequence: '\n'
    cout << "Copyright (C) 2021 Dr. Nord\n"; //author's copyright note
    cout << "<nordexium@gmail.com>\n\n"; //author's contact info
    cout << "\tThis program is published under the terms\n\
\tof the GNU General Public License v.3 or later\n\
\tas published by the Free Software Foundation.\n"; //licensing info,\
                                                      note a line continuator: '\'

    cout << "\tThis program comes with ABSOLUTELY NO WARRANTY.\n"
         << "\tThis is free software, and you are welcome\n"
         << "\tto redistribute it under certain conditions.\n"
         << "\tSee GNU General Public License for details.\n"; //disclaimer, note a chained insertion operator "<<"

    cout << endl; //additional empty line

    cout << "Congratulations! Everything works perfectly!\n" //informing a user about program operation
         << "Press \"Enter\" to exit the program..."; /*user invitation (to perform certain actions),
                                                      note the escape sequence: '\"' */

    getchar();/* this function waits for a single symbol input,
                 in this way the program execution suspends until the Enter-key is pressed */

    printf("Thank you for using this program, good bye!\n"); // output using a function

	return 0;// end of the program via returning from the main function with zero value

} //END of the program body
