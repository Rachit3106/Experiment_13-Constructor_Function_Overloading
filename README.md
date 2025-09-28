# ➕ Function and Operator Overloading in C++

---

## 🎯 Aim  
To study and implement **Function Overloading** and **Operator Overloading** in C++.

---

## 📚 Theory  

In C++, **overloading** is a fundamental feature of **polymorphism** that allows the same function or operator to perform different tasks depending on the context. This makes programs more **intuitive, flexible, and closer to natural language**.

---

### 🔹 Function Overloading  

Function overloading allows multiple functions with the **same name** but **different parameter lists**. The compiler decides which version to call at **compile time** based on the number and types of arguments.  

**Key Characteristics:**
- Functions must differ in the number or type of parameters.  
- Return type alone cannot distinguish overloaded functions.  
- Represents **compile‑time polymorphism (static binding)**.  
- Improves readability by grouping logically similar operations under one name.  

**Advantages:**
- Simplifies code by avoiding multiple function names for similar tasks.  
- Makes programs easier to understand and maintain.  
- Provides flexibility in handling different data types and argument counts.  

---

### 🔹 Operator Overloading  

Operator overloading allows redefining the behavior of operators (`+`, `-`, `*`, etc.) for **user‑defined types** (classes). This enables objects to behave like built‑in types, allowing natural expressions such as `c1 + c2` for complex numbers.  

**Key Characteristics:**
- Declared using the keyword `operator`.  
- Can be implemented as a member function or friend function.  
- Some operators (`::`, `.`, `.*`, `?:`) cannot be overloaded.  
- Enhances readability and abstraction by allowing intuitive operations on objects.  

**Advantages:**
- Makes user‑defined types more expressive.  
- Allows natural mathematical and logical operations on objects.  
- Improves code clarity and reduces verbosity.  

---

## 📋 Algorithms  

### 🧾 Function Overloading (Addition Class)

1. **Start**
2. Define a function Sum(int a, int b)
   - Compute sum = a + b
   - Return sum
3. Define a function Sum(double a, double b)
   - Compute sum = a + b
   - Return sum
4. In main() function:
   - Call Sum(5, 7) and store the result in sum1
   - Call Sum(5.5, 7.7) and store the result in sum2
   - Print sum1 and sum2
5. End


---

### 🧾 Operator Overloading (Complex Numbers)

1. **Start**  
2. Define a class `Complex` with members `real`, `imag`.  
3. Create a constructor to initialize values.  
4. Overload the `+` operator:  
   - Add real parts.  
   - Add imaginary parts.  
   - Return a new `Complex` object.  
5. Define a `display()` method to print the result.  
6. In `main()`:  
   - Create two objects `c1`, `c2`.  
   - Compute `c3 = c1 + c2`.  
   - Display `c3`.  
7. **End**

---

### 🧾 Constructor Overloading

1. **Start**
2. Define a class Student with members:
   - roll_no (int)
   - name (string)
   - div (char)
3. Define constructors:
   a) Default constructor with default values (roll_no=0, name="xyz", div='X').
   b) Parameterized constructor to assign given values.
   c) Copy constructor to copy values from another Student object.
4. Define a display() method to print student details:
   - Print name
   - Print roll_no
   - Print division
5. In main() function:
   a) Declare variables roll, name, div.
   b) Create object s1 using default constructor.
   c) Create object s2 using parameterized constructor with only roll number.
   d) Create object s3 using parameterized constructor with roll number and name.
   e) Create object s4 using parameterized constructor with roll number, name, and division.
   f) Ask user to input roll, name, and div.
   g) Create object s5 using parameterized constructor with user input.
   h) Display details of s1, s2, s3, and s5 using display() method.
6. End

---

## 🧠 Conclusion  

This experiment demonstrates the versatility of **overloading** in C++:  

- **Function Overloading** → Same function name, different parameter lists, enabling flexible and intuitive use of functions.  
- **Operator Overloading** → Redefines operators for user‑defined types, making objects behave like built‑in types.  
- Both are examples of **compile‑time polymorphism**, resolved by the compiler before execution.  
- Overloading improves **readability, reusability, and abstraction**, making programs more expressive and easier to maintain.
