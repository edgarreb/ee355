
#include <iostream>
#include <cstring>
#define MAX_CSTR_SIZE 100
using namespace std;

int main(){
    
    char** items;
    int item_count;
    cout << "How many items do you have? ";
    cin >> item_count;
    items = new char*[item_count];
    char buff[MAX_CSTR_SIZE];

    for (int i=0; i<item_count; i++){
        cout << "Name of item " << i+1 << ": ";
        cin >> buff;
        items[i] = new char[strlen(buff) + 1];
        // char * strcpy ( char * destination, const char * source );
        strcpy(items[i], buff);
    }

    for (int i=0; i<item_count; i++)
        cout << items[i] << endl;
    
    // Releasing the dynamic allocated memory
    // First, delete the 2nd dimension of the 2d array:
    for (int i=0; i<item_count; i++)
        delete items[i];
    // Next, delete the main pointer to 2d array
    delete items;

    return 0;
}

