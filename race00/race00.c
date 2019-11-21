#include <unistd.h>

void mx_printstr(const char *s);
void mx_printchar(char c);
int mx_strlen(const char *s);

void race00(int map_length, int map_width, int one_y, int one_x){
if(map_length >= 1 && map_width >= 1){
	if(map_length > one_y && map_width > one_x){
   		if(map_width == 2){
     		mx_printstr("<=--=>\n");
 		}
 		else {
 			if (map_width == 1){
 				mx_printstr("<=>\n");
 			}
 			else {
 				mx_printstr("<=");
 					for(int i = 0; i < map_width - 2; i++){
 						mx_printchar('-');
 					}
 				mx_printstr("=>\n");
 			}
 		}
	}

     for(int i = 0; i < map_length; i++){
       if(i%2 != 0){
         mx_printchar('+');
         for(int a = 0; a < map_width; a++){
           if(one_y == i && one_x == a){
             mx_printchar('1');
           }
           else{
             mx_printchar('0');
           }
         }
         mx_printchar('+');
       }
       else {
         	mx_printchar('*');
         		for(int a = 0; a < map_width; a++){
           			if(one_y == i && one_x == a){
             			mx_printchar('1');
           			}
           			else{
             			mx_printchar('0');
           				}
         		}
         	mx_printchar('*');
       	}
       mx_printchar('\n');
    }
    if (map_width == 2){
     	mx_printstr("<==>\n");
    }
    else{
     	if(map_width == 1){
     		mx_printstr("<=>\n");
     	}
     	else {
     		mx_printstr("<=");
     		for (int i = 0; i < map_width - 2; i++){
     			mx_printchar('-');
     		}
     		mx_printstr("=>\n");
     	}
     }
   }
 }



