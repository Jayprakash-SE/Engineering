# Week 6 Quiz

## Question No: 1
#### Which of the following statements is NOT true about Python functions:
* [ ] A function can be called only once in a program.
* [ ] A function allows us to break a program into small, independent tasks.
* [ ] A function can call other functions.
* [ ] Python provides several helpful functions


## Question No: 2
#### Functions allow us to "divide and conquer" a complex programming task into simpler programming tasks.
* [ ] True
* [ ] false


# Question No: 3
#### Functions are the only way to write modular programs in Python.
* [ ] True
* [ ] false


# Question No: 4
#### Assume that the "min" function computes the minimum of two values, and "max" function computes the maximum of two values. Let x1, x2, x3 and x4 be 4 distinct integers. What can you say about the following program (using python 3.X version):
```
y1 = min(x1, x2)
y2 = min(x3, x4)
y3 = max(y1, y2)
```
* [ ] y3 is the largest integer among x1, x2, x3, x4.
* [ ] y3 is either the largest or the second largest integer among x1, x2, x3, x4.
* [ ] y3 is either the second largest or the third largest integer among x1, x2, x3, x4.
* [ ] y3 is the third largest integer among x1, x2, x3, x4.


## Question No: 5
#### Assume that the "min" function computes the minimum of two values, and "max" function computes the maximum of two values. Let x1, x2, x3 and x4 be 4 distinct integers. What can you say about the following program (using python 3.X version):
```
 y1 = min(x1, x2)

 y2 = min(x3, x4)

 y3 = x1 + x2 - y1

 y4 = x3 + x4 - y2

 y5 = max(y3, y4)
```
* [ ] y5 is the largest integer among x1, x2, x3, x4.
* [ ] y5 is either the largest or the second largest integer among x1, x2, x3, x4.
* [ ] y5 is either the second largest or the third largest integer among x1, x2, x3, x4.
* [ ] Can not say anything as the data is not sufficient.


## Question No: 6
#### What will be the output of the following code :- i=5
```
def checkGlobal():
    global i
    i=i+10
    print(i)
checkGlobal()
```
* [ ] 10
* [ ] 5
* [ ] 15
* [ ] None of the above


## Question No: 7
#### What will be the output of the following code :-
```
i=5
def checkGlobal():
    i=50
    global i
    i=i+10
    print(i)
```
* [ ] 60
* [ ] 55
* [ ] 10
* [ ] Error in the code


## Question No: 8
#### Which of the following is true for global keyword
* [ ] Global keyword allows user to modify variable outside of local scope
* [ ] It is required to use global keyword outside a function
* [ ] Both a and b
* [ ] None of the above


## Question No: 9
#### What will be the output of the following code :
```
x = 10
y = 20
def calculate():
    x=5
    x = x*y
    print(x)
calculate()
```
* [ ] 100
* [ ] 200
* [ ] 50
* [ ] Error

## Question No: 10
#### What will be the output of the following code :-
```
x = 10
y = 20
def calculate():
    x = x*y
    print(x)
calculate()
```
* [ ] 100
* [ ] 200
* [ ] 50
* [ ] Error

## Question No: 11
#### What will be the output of the following code:
```
def func_default(x=1, y=2, z=3):
    print(x)
    print(y)
    print(z)
func_default(7,9)
```
* [ ] 123
* [ ] 729
* [ ] 793
* [ ] None of the above


## Question No: 12
#### Which of the following is true for default keyword
* [ ] If a argument is not supplied in the function call, default value is used
* [ ]  Order does not matter for default and non defaults in a function definition
* [ ]  Both a and b
* [ ]  None of the above


## Question No: 13
#### What will be the output of the following code:-
```
def func_keyword(x=1, y=2, z=3):
    sum = x+y
    min = sum - z
    print (min)
func_keyword(y=8,x=4)
```
* [ ] Error
* [ ] 9
* [ ] 0
* [ ] 5


## Question No: 14
#### Which is true for string in python
* [ ] They represent sequence of characters
* [ ] Either double quotes or single quotes can be used
* [ ] Backslash can be used to  escape quote
* [ ] All of the above

## Question No: 15
### What will be the output of the following code :-
```
str = "hello"
str = str+" "
print(str*5)
```
* [ ] hello
* [ ] hello*5
* [ ] hello *5
* [ ] hello hello hello hello hello
