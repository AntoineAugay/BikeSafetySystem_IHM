
#include <iostream>
#include <unistd.h>
#include <string>

int main (void){

	int i = 0;
	std::string frames[10];
	frames[0] += (char)0x03; frames[0] += (char)0x01; frames[0] += "10"; frames[0] += (char)0x03; frames[0] += (char)0x02; frames[0] += "57"; frames[0] += (char)0x05; frames[0] += (char)0x03; frames[0] += "17.3" ;
	frames[1] += (char)0x03; frames[1] += (char)0x01; frames[1] += "10"; frames[1] += (char)0x03; frames[1] += (char)0x02; frames[1] += "57"; frames[1] += (char)0x05; frames[1] += (char)0x03; frames[1] += "17.1" ;
	frames[2] += (char)0x03; frames[2] += (char)0x01; frames[2] += "10"; frames[2] += (char)0x03; frames[2] += (char)0x02; frames[2] += "57"; frames[2] += (char)0x05; frames[2] += (char)0x03; frames[2] += "16.8" ;
	frames[3] += (char)0x03; frames[3] += (char)0x01; frames[3] += "10"; frames[3] += (char)0x03; frames[3] += (char)0x02; frames[3] += "57"; frames[3] += (char)0x05; frames[3] += (char)0x03; frames[3] += "16.0" ;
	frames[4] += (char)0x03; frames[4] += (char)0x01; frames[4] += "10"; frames[4] += (char)0x03; frames[4] += (char)0x02; frames[4] += "58"; frames[4] += (char)0x05; frames[4] += (char)0x03; frames[4] += "15.5" ;
	frames[5] += (char)0x03; frames[5] += (char)0x01; frames[5] += "10"; frames[5] += (char)0x03; frames[5] += (char)0x02; frames[5] += "58"; frames[5] += (char)0x05; frames[5] += (char)0x03; frames[5] += "15.3" ;
	frames[6] += (char)0x03; frames[6] += (char)0x01; frames[6] += "10"; frames[6] += (char)0x03; frames[6] += (char)0x02; frames[6] += "58"; frames[6] += (char)0x05; frames[6] += (char)0x03; frames[6] += "15.9" ;
	frames[7] += (char)0x03; frames[7] += (char)0x01; frames[7] += "10"; frames[7] += (char)0x03; frames[7] += (char)0x02; frames[7] += "58"; frames[7] += (char)0x05; frames[7] += (char)0x03; frames[7] += "16.9" ;
	frames[8] += (char)0x03; frames[8] += (char)0x01; frames[8] += "10"; frames[8] += (char)0x03; frames[8] += (char)0x02; frames[8] += "58"; frames[8] += (char)0x05; frames[8] += (char)0x03; frames[8] += "17.2" ;
	frames[9] += (char)0x03; frames[9] += (char)0x01; frames[9] += "10"; frames[9] += (char)0x03; frames[9] += (char)0x02; frames[9] += "58"; frames[9] += (char)0x05; frames[9] += (char)0x03; frames[9] += "17.4" ;
	
	while(42){
		std::cout << frames[i] << std::endl;
		
		if(++i == 10){
			i = 0;
		}
		sleep(1);
	}

	return 0;
}
