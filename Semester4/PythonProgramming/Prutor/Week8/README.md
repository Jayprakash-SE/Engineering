# Week 8 Quiz

## Question No: 1
#### A class definition in python begins with the keyword -
* [ ] def
* [x] class
* [ ] self
* [ ] None of these


## Question No: 2
#### Which of the following statements is best suited for the declaration x = Point() in python where Point is defined as a class?
* [ ] x contains an int value.
* [x] x contains an object of the Point type.
* [ ] x contains a reference to a Point object.
* [ ] None of these


## Question No: 3
#### What will be the output of the following python code?
```
class Roll:
    def __init__(self, id):
        self.id = id
        id = 231

val = Roll(321)
print (val.id)
```
* [ ] Error
* [ ] 231
* [x] 321
* [ ] None of these



## Question No: 4
#### What will be the output of following python code?
```
class X:
    def __init__(self):
         self.a = 10
         self._b = 20
    def getB(self):
         return self._b

x = X()
x._b = 60
print(x.getB())
```
* [ ] 20
* [x] 60
* [ ] Error
* [ ] Program runs but does not print anything



## Question No: 5
#### A class can inherit attributes and methods from another class, this another class is then called -
* [ ] subclass
* [x] superclass
* [ ] childclass
* [ ] heirclass


## Question No: 6
#### Consider a scenario where vehicle, bike, car and bus are the classes in a python script. Which of the following class is most likely to be implemented as the superclass -
* [ ] bike
* [x] vehicle
* [ ] car
* [ ] bus


## Question No: 7
#### In python, every class is inherited from an object class.
* [x] True
* [ ] False



## Question No: 8
#### In python, the name of a private method in a class begins with -
* [ ] _ (underscore)
* [x] __ (double underscores)
* [ ] private keyword
* [ ] None of these



## Question No: 9
#### In object oriented programming, encapsulation refers to bundling of data attributes and methods operating on them.
* [x] True
* [ ] False


## Question No: 10
#### Information hiding in object oriented programming enables users of a class to -
* [ ] Must rely only on the interface, but not rely on internals.
* [ ] Depend on what is implemented, but not how it is implemented.
* [x] Both (a) and (b)
* [ ] None of these


## Question No: 11
#### Which of the following function is used to read files in python :-
* [ ] read()
* [ ] readlines()
* [ ] readline()
* [x] All of the above


## Question No: 12
#### Which of the following is true :-
* [ ] Read() returns a string and readlines() return line at a time
* [x] readlines()returns a list of lines and readline() returns one line at a time
* [ ] Both a and b
* [ ] None of the above


## Question No: 13
#### Which of the following is true :-
* [ ] file.closed() method is used to close a file.
* [ ] file.close() method is used to check if a file is closed.
* [ ] file.isClosed() is used to check if a file is closed or not.
* [x] None of the above



## Question No: 14
#### What will be the output of the following code :
```
f = open(‘file.txt')
print ( f.closed )
f.close()
print ( f.closed )
```
* [ ] true true
* [x] false true
* [ ] false false
* [ ] true false


## Question No: 15
#### Suppose a file named test.txt has content 1 2 3 4 5 6 7 in it.Now what will be the output of the following code :-
```
file = open("test.txt",'r')
file.read(5)
```
* [ ] 5
* [ ] 4 5 6 7
* [ ] 1 2 3
* [x] None of the above