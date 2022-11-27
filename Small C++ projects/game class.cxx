#include <iostream>
//the game class
using namespace std;

class movement {
	
	public : 
	
	void forward(){
		cout << "i am moving forward";
		
	};
	
	void backward(){
		cout << "i am moving backward";
		
	};
	void right(){
		cout << "now moving to the right";
		
	};
	void left(){
		cout << "now going left";
		
	};
	void jump(){
		
		cout << "wow i feel so light in the air";
		
	};
	void climb (){
		
		cout << "climbing huh :)";
		
	};
	void crawl(){
		cout << "crawling  is sooo booorrriiinnngg";
		
	};	
	
};

class weapon {
	public :
	
	void sword();
	void knife();
	void ak47();
	void ak49();
	void shotgun();
	void pistol();
	void silentPistol();
	void minigun();
	void snipper();
	void grenade();
	void rocketLauncher();
		
};


int main()
{
      char x;
	movement move;
	cin >> x
	switch (x){
		case 'f':
    		move.forward();
    	break;
    	
    	case 'b' :
    	move.backward();
    	break;
	
	
	}
	return 0;
	
}

