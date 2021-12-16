//Function Prototype
/*
In C++, 
the code of function declaration should be before the function call.
 However, if we want to define a function after the function call,
we need to use the function prototype. 
*/

// function prototype
void add(int, int);

int main() {
    // calling the function before declaration.
    add(5, 3);
    return 0;
}

// function definition
void add(int a, int b) {
    cout << (a + b);
}
