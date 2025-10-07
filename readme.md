# 📘 C Programming Solutions Repository

Welcome to my **C Programming Solutions Repository**, where I solve exercises from the renowned book:

**_C Programming: A Modern Approach (2nd Edition)_** by **K. N. King**.  
This repository is dedicated to practicing and understanding C programming concepts chapter by chapter.

---

## 📚 About the Book

*C Programming: A Modern Approach* is a comprehensive guide to C programming that covers everything from basic syntax to advanced topics.  
All credits go to **K. N. King**, whose book provides a clear and modern approach to learning C.

> “This book is designed to teach C programming in a clear and systematic manner.”

---

## 🔖 Repository Structure

The repository is organized by chapters for easier navigation:

├── Chapter_1_Basics
├── Chapter_2_Control_Flow
├── Chapter_3_Functions
├── Chapter_4_Arrays
├── Chapter_5_Pointers
├── Chapter_6_Structures
├── Chapter_7_File_IO
└── README.md

Each folder contains solutions to exercises in that chapter with proper explanations and example outputs.

---

## 💻 Sample Code Examples

### Example 1: Hello World
```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```
Output:
```
Hello, World!
```
Example 2: Sum of Two Numbers
```
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum: %d\n", a + b);
    return 0;
}
```

Output:
```
Enter two numbers: 5 10
Sum: 15
```
Example 3: Factorial Using Recursion
```
#include <stdio.h>

int factorial(int n) {
    if(n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}
```
🌟 Features

Chapter-wise solutions

Clear and commented code

Includes basic to advanced topics

Screenshots and diagrams for better understanding

📸 Preview




🙏 Credits

Book Author: K. N. King

This repository is solely for educational purposes. All solutions are my own implementation.

📂 How to Use

Clone the repository:

git clone [https://github.com/YourUsername/C-Programming-Solutions.git](https://github.com/Shahriyar-Rahim/C-Programming---A-modern-Approach)


Navigate to the chapter folder and run any C program using a C compiler:

gcc program.c -o program
./program

🤝 Contributions

Feel free to contribute by:

Adding new solutions

Improving explanations

Adding screenshots or diagrams

📬 Contact

If you have any questions, suggestions, or feedback, contact me at [your email or GitHub link].

Happy Coding! 🚀


---

If you want, I can make an **even more visually stunning version** using **badges, emojis, colored code snippets, and GitHub stats**—that will make your repo look super professional.  

Do you want me to do that?
