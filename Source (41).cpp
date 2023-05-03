#include <iostream>

using namespace std;

class CombatAviation{
public:
	void setFly() {
		cout << " Can fly" << endl;
	}
	void setDestroy() {
		cout << " Can destroy" << endl;
	}
};
class Fighter :public CombatAviation {
	void setBaneuverability() {
		cout << " High maneuverability" << endl;
	}
	void setSpeedF() {
		cout << " Has speed up to 2600 km/s" << endl;
	}
};
class Helicopter :public CombatAviation {
	void setSpeedH() {
		cout << " Has speed up to 250 km/s" << endl;
	}
	void setLanding() {
		cout << " Landing anywhere" << endl;
	}
};
class Bomber :public CombatAviation {
	void setSpeedB() {
		cout << " Has speed up to 1900 km/s" << endl;
	}
	void setShipping() {
		cout << " carry heavy weights" << endl;
	}
};
int main() 
{
	Fighter a;
	Helicopter b;
	Bomber c;

	cout << " Property of Fighter" << endl;
	a.setFly();
	a.setDestroy();
	a.setSpeedF();
	a.setBaneuverability();
	cout << "===========================" << endl;
	cout << " Property of Helicopter" << endl;
	b.setFly();
	b.setDestroy();
	b.setSpeedH();
	b.setLanding();
	cout << "===========================" << endl;
	cout << " Property of Bomber" << endl;
	c.setFly();
	c.setDestroy();
	c.setSpeedB();
	c.setShipping();
	cout << "===========================" << endl;
}