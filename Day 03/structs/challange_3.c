#include <stdio.h>


struct Rectangle {
    int width;
    int height;
};
int area (struct Rectangle rec){

    return rec.width * rec.height;

}

int main (){

    struct Rectangle rec1 = {
        10, 15
    };

    printf("the area is: %d\n", area(rec1));

    return 0;
}