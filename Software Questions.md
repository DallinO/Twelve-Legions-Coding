## **\*Q: What is the difference between an abstract class and an interface?**

The difference between an abstract class and an interface is mainly about their purpose and how they’re used. An **abstract class** is like a base class that can have both defined methods (with code) and abstract methods (without code). It’s useful when you want to provide some common functionality to all the derived classes but still leave room for customization.

An **interface**, on the other hand, is like a contract—it only defines what methods or properties a class must have, but not how they work. It’s all about ensuring consistency across unrelated classes. For example, if you want a bunch of different classes to all have a `Fly()` method, you’d define an interface with `Fly()`.

The other big difference is that a class can inherit from only one abstract class (single inheritance), but it can implement multiple interfaces. So, interfaces are more flexible for designing systems with cross-cutting concerns.




## **\*Q: What version control systems have you used? How do you handle conflicts?**

[Content missing in original text]



## **\*Q: What is your experience with continuous integration/continuous deployment (CI/CD) pipelines?**

[Content missing in original text]



## **\*Q: How do you write and maintain unit tests?**

[Content missing in original text]


## Q: Describe the four principles of Object Oriented Programming

**Object-oriented programming (OOP)** is a programming paradigm based on the concept of "objects," which can contain data in the form of fields (often known as attributes or properties) and code in the form of procedures (often known as methods). OOP aims to increase reusability, modularity, and flexibility in software development.

### The Four Principles of OOP

1. **Abstraction**
   - **Definition**: Abstraction focuses on showing only the essential details of an object and hiding its complexity.
   - **Usage**:
     - Used to define what an object does, rather than how it does it.
     - Typically implemented through abstract classes or interfaces.
     - Encourages modularity and simplifies interaction by providing a clean, high-level interface.

2. **Encapsulation**
   - **Definition**: Encapsulation is the practice of bundling data (fields) and methods (functions) into a single unit, often a class, and restricting access to the inner workings of that class.
   - **Usage**:
     - Protects the integrity of the data by controlling access.
     - Achieved through access modifiers like `private`, `protected`, and `public`.
     - Provides getters and setters for controlled access to private data.

3. **Inheritance**
   - **Definition**: Inheritance allows one class (child/derived class) to inherit the properties and methods of another class (parent/base class).
   - **Usage**:
     - Promotes code reuse by enabling shared functionality in a base class.
     - Allows for the creation of specialized classes that extend or override base class functionality.
     - Supports hierarchical relationships.

4. **Polymorphism**
   - **Definition**: Polymorphism allows objects to take on many forms, enabling the same interface to be used for different underlying data types or methods.
   - **Usage**:
     - Achieved through method overriding (runtime polymorphism) and method overloading (compile-time polymorphism).
     - Enhances flexibility and extensibility in the code.
