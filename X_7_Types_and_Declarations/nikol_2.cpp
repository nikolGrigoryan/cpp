#include <iostream>
#include <limits>

using namespace std;

int main()
{
				char c = 255;
				int i = c;
				cout << "i: " << i << '\n';

				if (numeric_limits<char>::is_signed) {
								cout << "signed!\n";
				} else {
								cout << "unsigned!\n";
				}

				unsigned char uc = 255;
				int ui = uc;
				cout << "ui: " << ui << '\n';

				return 0;
}
