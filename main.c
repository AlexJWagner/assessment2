#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void pixelMean(float *r, float *g, float *b);

int main() {
    float image[5][5][3];
    int x, y;
//open the file task3.txt and scan the values into memory
    FILE *input;
    input = fopen("task3.txt", "r");

    
//double for loop to add up the values created in provided code
    for(y = 0; y < 2; y++){
        for (x = 0; x < 5; x++){
            fscanf(input, "%f %f %f", &image[x][y][0], &image[x][y][1], &image[x][y][2]);
            printf("%d %d: ", x ,y);
            pixelMean(&image[x][y][0], &image[x][y][1], &image[x][y][2]);
            printf("%f %f %f \n", image[x][y][0], image[x][y][1], image[x][y][2]);
        }
    }
    
     

return 0;
}

void pixelMean(float *r, float *g, float *b){
    
    float tmp;
    tmp = (*r + *g + *b)/3;
            
    *r = tmp;
    *g = tmp;
    *b = tmp;
   
}
