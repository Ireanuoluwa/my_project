#include <iostream>
std::string read_waterlevel(int water_level){
	char do_you;
	begin:
	std::cin>>water_level;
	if (water_level>=80 && water_level<90){
		std::cout<<"ALMOST FULL\n";
    }
    else if(water_level>=90 && water_level<=100){
    	std::cout<<"FULL\n";
	}
else if(water_level>=40 && water_level <80){
			std::cout<<"AVERAGE\n";
	    }
else if(water_level>=0 && water_level<40){
			
				std::cout<<"LOW\n";
        }
        else {
        	std::cout<<"INCORRECT VALUE. PLEASE TRY AGAIN\n";
		}

	std::cout<<"DO YOU WANT TO INPUT ANOTHER WATER LEVEL(y or n)\n";
	std::cin>>do_you;
	if(do_you =='y'){
			  
goto begin;
}
else{
	goto end;
}
end:
	std::cout<<"BYE";
}
