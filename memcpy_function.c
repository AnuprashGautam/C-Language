#include <stdio.h>
#include <string.h>

struct SourceStruct {
    int x;
    double y;
};

struct DestinationStruct {
    int x;
    double y;
};

int main() {
    struct SourceStruct source;
    struct DestinationStruct dest;

    // Assign values to source struct
    source.x = 10;
    source.y = 3.14;

    // Copy values from source to destination using memcpy
    memcpy(&dest, &source, sizeof(struct SourceStruct));

    // Now dest contains the same values as source
    printf("dest.x: %d\n", dest.x);
    printf("dest.y: %lf\n", dest.y);

    return 0;
}
