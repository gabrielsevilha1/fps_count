#include<stdio.h>
#include<time.h>

double current_time = time(0);
double last_time = time(0);
int fps = 0;

void printfps(){
	
	fps++;
	current_time = time(0);
	if(current_time - last_time > 0){
		printf("fps: %d\n",fps);
		last_time = current_time;
		fps = 0;
	}
	
}

int getfps(){

	static int last_fps = 0;
	
	fps++;
	current_time = time(0);
	if(current_time - last_time > 0){
		last_time = current_time;
		last_fps = fps;
		fps = 0;
	}
	
	return last_fps;

}
