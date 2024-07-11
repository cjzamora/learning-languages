#import <stdio.h>
#import <stdlib.h>

// create a key value mapping
struct Map {
    char key;
    int value;
};

int main() {
    // given "abacabd"
    char str[] = "abaccabdde";
    // get the length of the string
    int len = sizeof(str) / sizeof(str[0]) - 1;

    // create a character map and it's count
    struct Map map[len]; 
    // current used index
    int curr = 0;
    // loop through the string
    for(int i = 0; i < len; i++) {
        // check if the character exists
        int exists = 0, index = 0;
        // loop through the map
        for(int j = 0; j < curr; j++) {
            // if character exists
            if(map[j].key == str[i]) {
                // set exists to true
                exists = 1;
                // capture the index
                index = j;
                break;
            }
        }

        // if exists
        if (exists) {
            // increment the value
            map[index].value++;
        } else {
            // create a new key value pair
            map[curr].key = str[i];
            map[curr].value = 1;
            // increment the current index
            curr++;
        }
    }

    // create the result
    struct Map result = { 
        .key = '-',
        .value = 0
    };

    // loop through the map based on the current index
    for(int i = 0; i < curr; i ++) {
        // if first non-repeating character is found
        if (map[i].value == 1) {
            // set the result
            result = map[i];
            // stop
            break;
        }
    }

    // if we have a result
    if (result.value == 1) {
        printf("Non-repeating character: \"%c\"\n", result.key);

    // just print '-'
    } else {
        printf("No non-repeating character found\n");
    }

    return 0;
}