#include <iostream>

using byte = uint8_t;

enum class Family : byte
{
    Mom         = 0x01,
    Dad         = 0x02,
    Granny      = 0x04,
    Brother     = 0x08, // we can party with him
    Sister      = 0x10, // she's a toddler, so no parties with her
    Uncle       = 0x20, // doesn't live with us anyway
			    
    Cat         = 0x80  // we can party with her
};

int main(int argc, char ** argv) {
	//Mom, Dad and Cat at home
	byte family_at_home = (byte)Family::Mom | (byte)Family::Dad | (byte)Family::Cat;

	//Brother has came home
	family_at_home |= (byte)Family::Brother;

	//A friend of brother has came and asked if he's at home?
	bool is_brother_home = (family_at_home & (byte)Family::Brother);
	std::cout << "Brother is " << (is_brother_home ? "at home." : "absent.") << std::endl;
	
	//All family and uncle in the city
	byte people_in_city = family_at_home | (byte)Family::Uncle;

	//Brother has left the city
	family_at_home &= ~((byte)Family::Brother);
	people_in_city &= ~((byte)Family::Brother);

	//A friend of brother has came and asked if he's at home?
	is_brother_home = (family_at_home & (byte)Family::Brother);
	std::cout << "Brother is " << (is_brother_home ? "at home." : "absent.") << std::endl;

	//A neighbour has came and asked if there is someone elder at home?
	bool is_elders_home = (family_at_home & (byte)Family::Mom) ? true : 
		(family_at_home & (byte)Family::Dad) ? true :
		(family_at_home & (byte)Family::Granny) ? true : false;

	std::cout << "Elders is " << (is_elders_home ? "at home." : "absent.") << std::endl;

	//Granny has phoned and asked if parents were at home
	byte parents = (byte)Family::Dad | (byte)Family::Mom;
	bool is_parents_home = family_at_home & parents;

	std::cout << "Parents are " << (is_parents_home ? "at home." : "absent.") << std::endl;
}
