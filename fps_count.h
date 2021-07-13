#include<stdio.h>
#include<time.h>

double fps_current_time = 0;
double fps_last_time = 0;
int fps_fps = 0;

void printfps(){
	
	fps_fps++;
	fps_current_time = time(0);
	if(fps_current_time - fps_last_time > 0){
		printf("fps: %d\n",fps_fps);
		fps_last_time = fps_current_time;
		fps_fps = 0;
	}
	
}

int getfps(){

	static int last_fps = 0;
	
	fps_fps++;
	fps_current_time = time(0);
	if(fps_current_time - fps_last_time > 0){
		fps_last_time = fps_current_time;
		last_fps = fps_fps;
		fps_fps = 0;
	}
	
	return last_fps;

}
