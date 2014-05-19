/*
A simple text-file opening program by Kiara Robles.
Coded as part of learning C++.

02/10/14
Builda a totepole from user prompts
*/

#include <iostream>
#include <string>
using namespace std;


int main()
{	 
	string s1l1 = "                                   (\\___/)";
	string s1l2 = "                                   (=$.$=)";
	string s1l3 = "                                   (\")_(\")";
    string s1l4 = "                                     @..@";
    string s1l5 = "                                    (----)";
    string s1l6 = "                                    (>__<)";

    string s2l1 = "                                    __/\\__";
    string s2l2 = "                                   `==/\\==`";
    string s2l3 = "                         ____________/__\\____________";
	string s2l4 = "                        /____________________________\\";
	string s2l5 = "                          __||__||__/.--.\\__||__||__";
	string s2l6 = "                         /__|___|___( >< )___|___|__\\";
	string s2l7 = "                                   _/`--`\\_";
	string s2l8 = "                                  (/------\\)";

	string s3l1 = "                                      /\\";
	string s3l2 = "                                     /  \\";
	string s3l3 = "                                    /    \\";
	string s3l4 = "                                   /      \\";
	string s3l5 = "                                  /________\\";
	string s3l6 = "                                    (   ) ";
	string s3l7 = "                                     |||";
	string s3l8 = "                                     |||";
	string s3l9 = "                                    (___)";

	string s4l1 = "                                    _    _ ";
	string s4l2 = "                                   ( `\\/' )";
	string s4l3 = "                                    \\    / ";
	string s4l4 = "                                     `\\/'";
	string s4l5 = "                                    _    _ ";
	string s4l6 = "                                   ( `\\/' )";
	string s4l7 = "                                    \\    / ";
	string s4l8 = "                                     `\\/'";

	string s5l1 = "                                   _   |   _";
	string s5l2 = "                                  [_]--'--[_]";
	string s5l3 = "                                  |'|\"\"'\"\"|'|";
	string s5l4 = "                                  |'|\"\"'\"\"|'|";
	string s5l5 = "                                  | | /^\\ | |";
	string s5l6 = "                                  |_|_|I|_|_|";

	string s6l1 = "                                       _   ";
	string s6l2 = "                                     _| |_";
	string s6l3 = "                                      *_*";
	string s6l4 = "                                    _(   )_";
	string s6l5 = "                                   (_  :  _)";
	string s6l6 = "                                    /  '  \\";
	string s6l7 = "                                   (_/ ^ \\_)";

	string s7l1 = "                                       _   ";
	string s7l2 = "                                     /_/\\";
	string s7l3 = "                                    / /\\ \\";
	string s7l4 = "                                   / / /\\ \\";
	string s7l5 = "                                  / / /\\ \\ \\";
	string s7l6 = "                                 / /_/__\\ \\ \\";
	string s7l7 = "                                /_/______\\_\\/\\";
	string s7l8 = "                                \\_\\_________\\/";

	string s8l1 = "                              ._________________.  ";
	string s8l2 = "                              | _______________ |";
	string s8l3 = "                              | I             I |";
	string s8l4 = "                              | I             I |";
	string s8l5 = "                              | I             I |";
	string s8l6 = "                              | I             I |";
	string s8l7 = "                              | I_____________I |";
	string s8l8 = "                              !_________________!";
	string s8l9 = "                                 ._[_______]_.";
	string s8l10 = "                             .___|___________|___.";

	string s9l1 = "                                    ./\"`\".\\";
	string s9l2 = "                                 .-./ _=_ \\.-.";
	string s9l3 = "                                {  (,(oYo),) }}";
	string s9l4 = "                                {{ |   \"   |} }";
	string s9l5 = "                                { { \\(---)/  }}";
	string s9l6 = "                                {{  }\'-=-'{ } }";
	string s9l7 = "                                { { }._:_.{  }}";
	string s9l8 = "                                {{  }.-:- { } }";
	string s9l9 = "                                {_{ }`===`{  _}";
	string s9l10 = "                              ((((\\)     (//))))";

	string s10l1 = "                     .-~~~~~~~~~-._       _.-~~~~~~~~~-";
	string s10l2 = "                  __.'              ~.   .~              `.__";
	string s10l3 = "                .'//                  \\./                  \\\\`.";
	string s10l4 = "               '//                     |                     \\\\`.";
	string s10l5 = "             '// .-~\"\"\"\"\"\"\"~~~~-._     |     _,-~~~~\"\"\"\"\"\"\"~-. \\\\`.";
	string s10l6 = "           .'//.\"                 `-.  |  .-'                 \"-.\\\\`.";
	string s10l7 = "        .'//______.============-..   \\ | /   ..-============.______\\\\`.";
	string s10l8 = "      .'______________________________\\|/______________________________`.";

	
	char prnt1, prnt2, prnt3, prnt4, prnt5, prnt6, prnt7, prnt8, prnt9, prnt10;

	cout << "Do you want to display the cat and frog?(Y/N) " << flush;
	cin  >> prnt1;
	cout << "Do you want to display the airplane?(Y/N) " << flush;
	cin  >> prnt2;
	cout << "Do you want to display the tree?(Y/N) " << flush;
	cin  >> prnt3;
	cout << "Do you want to display the hearts?(Y/N) " << flush;
	cin  >> prnt4;
	cout << "Do you want to display the castle?(Y/N) "  << flush;
	cin  >> prnt5;
	cout << "Do you want to display the gingerbread?(Y/N) "  << flush;
	cin  >> prnt6;
	cout << "Do you want to display the triangle?(Y/N) "  << flush;
	cin  >> prnt7;
	cout << "Do you want to display the computer?(Y/N) "  << flush;
	cin  >> prnt8;
	cout << "Do you want to display the monkey?(Y/N) "  << flush;
	cin  >> prnt9;
	cout << "Do you want to display the book?(Y/N) "  << flush;
	cin  >> prnt10;
	cout << endl;
	
	if(prnt1=='y' || prnt1=='Y'){
		cout<<s1l1<<endl<<s1l2<<endl<<s1l3<<endl<<s1l4<<endl<<s1l5<<endl
			<<s1l6<<endl;
	}
	if(prnt2=='y' || prnt2=='Y'){
	cout<<s2l1<<endl<<s2l2<<endl<<s2l3<<endl<<s2l4<<endl<<s2l5<<endl
	    <<s2l6<<endl<<s2l7<<endl<<s2l8<<endl;
	}
	if(prnt3=='y' || prnt3=='Y'){
	cout<<s3l1<<endl<<s3l2<<endl<<s3l3<<endl<<s3l4<<endl<<s3l5<<endl
	    <<s3l6<<endl<<s3l7<<endl<<s3l8<<endl<<s3l9<<endl;
	}
	if(prnt4=='y' || prnt4=='Y'){
	cout<<s4l1<<endl<<s4l2<<endl<<s4l3<<endl<<s4l4<<endl<<s4l5<<endl
	    <<s4l6<<endl<<s4l7<<endl<<s4l8<<endl;
	}
	if(prnt5=='y' || prnt5=='Y'){
	cout<<s5l1<<endl<<s5l2<<endl<<s5l3<<endl<<s5l4<<endl<<s5l5<<endl
	    <<s5l6<<endl;
	}
	if(prnt6=='y' || prnt6=='Y'){
	cout<<s6l1<<endl<<s6l2<<endl<<s6l3<<endl<<s6l4<<endl<<s6l5<<endl
		<<s6l6<<endl<<s6l7<<endl;
	}
	if(prnt7=='y' || prnt7=='Y'){
	cout<<s7l1<<endl<<s7l2<<endl<<s7l3<<endl<<s7l4<<endl<<s7l5<<endl
		<<s7l6<<endl<<s7l7<<endl<<s7l8<<endl;
	}
	if(prnt8=='y' || prnt8=='Y'){
	cout<<s8l1<<endl<<s8l2<<endl<<s8l3<<endl<<s8l4<<endl<<s8l5<<endl
		<<s8l6<<endl<<s8l7<<endl<<s8l8<<endl<<s8l9<<endl<<s8l10<<endl;
	}
	if(prnt9=='y' || prnt9=='Y'){
	cout<<s9l1<<endl<<s9l2<<endl<<s9l3<<endl<<s9l4<<endl<<s9l5<<endl
		<<s9l6<<endl<<s9l7<<endl<<s9l8<<endl<<s9l9<<endl<<s9l10<<endl;
	}
	if(prnt10=='y' || prnt10=='Y'){
	cout<<s10l1<<endl<<s10l2<<endl<<s10l3<<endl<<s10l4<<endl<<s10l5<<endl
		<<s10l6<<endl<<s10l7<<endl<<s10l8<<endl;
	}
	return 0;
}


