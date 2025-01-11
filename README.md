# cpp_assignement

Simple data handling (input, updating, retrieval and removal) using C++ Data Structures and Binary Search

For this exercise you will need to:

1. Build a data type of your choice (class, struct), to represent one real-world set of entitie. (e.g. Students, Cars, Products, etc.). Think of appropriate attributes in each case (e.g. year of enrolment, name, etc.)
2. Create instances/objects of your data type and store them in a Data Structure of your choice

   (e.g. list, vector, BST). Optimally, the data structure should follow your own implementation. Data can be randomly generated.
3. Implement addition, retrieval, updating and removal functionalities, through a simple console menu.
4. Implement a version of Merge Sort, to sort your data structure based on a "sortable" attribute (e.g. year of enrolment, name)
5. Support any function that depends on search (retrieval, updating and removal), with your implementation of Binary Search (or, optionally, a suitable tree structure).

Maintain a public remote repository on GitHub, with just the necessary documentation on how to build and run your code.

Include a short description about what your project does and what limitations it may have (bugs, unfinished tasks, etc.).

---

To run the program: 

1. Clone the repository `git clone https://github.com/Biohazardyee/cpp_assignement`
2. Locate and navigate to the location of the now local repository
   1. cd cpp_assignement
3. Compile the program using `g++ main.cpp -o main.o`
4. execute the program using ./main.o

---

Upon running the program, you will be presented with a simple text-based menu. You can:

* **Display all students**
* **Add new student**
* **Retrieve student by ID**
* **Update student by ID**
* **Remove student by ID**
* **Sort students based on different attributes**

Follow the prompts in the console to interact with the system.

---



## Program limitations

- Not clearing the console when entering an input, leading to a clumsy terminal.
- The sorting algorithm could probably be more efficient
- Use of AI, I need to note that this was not 100% done, using my own knowledge and relied on some use of AI to go to the end of the assignement.
  - bear in mind that I didnt prompted the AI to do it for me but rather guide me.
- Random generation of student isn't this random, it randomizes once the students, but don't comprehend why when compiling it doesnt change anything, so something might be wrong in my random generation.
- Clumsy file management
- Could have probably used something else than vectors.


## Final Words

I hope you will enjoy this simple program (I doubt you will lol aint notihing fun about).

Looking forward for your code reviews on monday, they will be valuable. 

Have a nice weekend!
