# Week 7 Quiz


## Question No: 1
### What should be the name of the python file that defines a module foo?
* [ ] module.py
* [ ] foo_module.py
* [ ] module_foo.py
* [x] foo.py


## Question No: 2
### The following code is saved in a file mod.py (using python 3.X version):
```
def printHi():
    print ("Hi")
```
### Now consider the following interaction on Python console, assuming mod.py is in the current directory where the console is invoked:
```
>>> import mod
>>> printHi()
Traceback
(most recent call last):  File "", line 1, in 
NameError: name 'printHi' is not defined
```
### What is the reason for the NameError error?
* [ ] printHi is a keyword in Python
* [ ] printHi is not a valid function name
* [x] We need to qualify function name with module name, as mod.printHi()
* [ ] import does not import files in the current directory


## Question No: 3
### The following code is saved in a file mod.py (using python 3.X version):
```
def printHi():
    print ("Hi")
```
### Now consider the following interaction on Python console, assuming  mod.py is in the current directory where the console is invoked:
```
>>> import mod
>>> print (mod.__name__)
```
### What will be the output on the console?
* [ ] Hi
* [ ] mod.Hi
* [x] mod
* [ ] Error since __name__ is not defined


## Question No: 4
### True or False: It is possible to import more than one modules in the same program?
* [x] True
* [ ] False


## Question No: 5
### Suppose we have a python module as file mdl.py defining four functions f1, f2, f3 and f4. Now we give following python command at the python shell:
```
>>> from mdl import f2
```
### Which of the following functions from mdl.py can now be invoked from calling script -
* [ ] f1
* [x] f2
* [ ] f3
* [ ] f4


## Question No: 6
### Suppose we have a python module as file mdl.py defining three functions f1, f2 and f3. Now we give the following python command at the python shell:
```
>>> from mdl import *
```
### Which of the following functions from mdl.py can be invoked from calling script -
* [ ] only f1 and f3
* [ ] only f2 and f3
* [ ] only f3 and f1
* [x] all of f1, f2 and f3


## Question No: 7
### Suppose a python module file mdl.py contains the required code at the end of the file mdl.py so that it can be used as a script as well as an importable module. Now we can run script mdl.py by the following command at python shell:
```
>>> import mdl
```
* [x] True
* [ ] False


## Question No: 8
### Class construct in python contains:
* [x] data as attributes of objects
* [ ] functions as actions on data
* [ ] both (a) and (b)
* [ ] either (a) or (b)


## Question No: 9
### What is the output of the following python code?
```
class hello:
     def __init__(self,a="Visit Prutor.ai website"):
         self.a=a

     def display(self):
         print(self.a)
obj=hello()
obj.display()
```
* [ ] The program has an error because constructor can’t have default arguments
* [ ] Nothing is displayed
* [x] “Visit Prutor.ai website” is displayed
* [ ] The program has an error because display function doesn’t have parameters


## Question No: 10
### What is the output of the following python code?
```
class test:
    def __init__(self,x):
        self.x=x
 
    def display(self):
        print(self.x)
obj=test()
obj.display()
```
* [ ] Executes normally and doesn’t display anything
* [ ] Displays 0, which is the automatic default value
* [x] Error as at least one argument is required while creating an object
* [ ] Error as display function requires additional argument


## Question No: 11
### What does Instantiation mean in terms of Object Oriented Programming?
* [ ] Deleting an instance of class
* [x] Creating an instance of class
* [ ] Copying an instance of class
* [ ] Modifying an instance of class


# Question No: 12
### Select the correct alternative for special method __init__ in python -
* [ ] Is used to create a new object for a class
* [x] Only one constructor is allowed per class
* [ ] Uses default arguments
* [ ] All of the above


## Question No: 13
### The return value of special method __str__ can be an object of any type in python.
* [ ] True
* [x] False


## Question No: 14
### A python module can also be used as a script
* [x] True
* [ ] False


## Question No: 15
### Which of the following is true:-
* [x] Python modules can be renamed when importing
* [ ] To rename a module we use 'to'
* [ ] Both a and b
* [ ] None of the above


