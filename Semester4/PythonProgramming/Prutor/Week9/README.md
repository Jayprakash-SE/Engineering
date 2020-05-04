# Week 9 Quiz

## Question No: 1
#### Assume that theFile is a file object, and the operations are all valid operations (i.e., theFile is open in an appropriate mode). Now if we execute -
```
numWritten = theFile.write('something')
```
* [ ] It tell whether theFile is open or closed
* [ ] Reads and return ‘something’
* [x] Stores the number of characters written to theFile in a variable
* [ ] reads a single line from theFile, including the newline character


## Question No: 2
#### Assume that theFile is a file object, and the operations are all valid operations (i.e., theFile is open in an appropriate mode). Now if we execute -
```
theFile.closed
```
* [x] tells (True of False) whether theFile is closed or not
* [ ] Reads and return ‘something’
* [ ] read a single line from theFile, including the newline character
* [ ] modify the file object for theFile so that the next read will be from


## Question No: 3
#### Assume that theFile is a file object, and the operations are all valid operations (i.e., theFile is open in an appropriate mode). Now if we execute -
```
theFile.tell()
```
* [x] points to the location from where next byte will be read in theFile
* [ ] tell whether theFile is open or closed
* [ ] Reads and return ‘something’
* [ ] Store the number of characters written to theFile in a variable


## Question No: 4
#### Assume that theFile is a file object, and the operations are all valid operations (i.e., theFile is open in an appropriate mode). Now if we execute -
```
theFile.seek(pos, ref)
```
* [ ] tell whether theFile is open or closed
* [ ] Read and return at most
* [ ] Reads and return ‘something’
* [x] sets the current file stream position to the 'pos' position in the file


## Question No: 5
#### Assume that theFile is a file object, and the operations are all valid operations (i.e., theFile is open in an appropriate mode). Now if we execute -
```
theFile.readline
```
* [ ] tell whether theFile is open or closed
* [ ] Read and return at most
* [x] read a single line from theFile, including the newline character
* [ ] modify the file object for theFile so that the next read will be from


## Question No: 6
#### Which of the following command is used to open a file “C:\desktop\myfile.txt”, In read-mode only?
```
A. file_name = open(“C:\desktop\myfile.txt”, “r”)
B. file_name = open(“C:\\desktop\myfile.txt”, “r”) 
C. file_name = open(file = “C:\desktop\myfile.txt”, “r+”)
D. file_name = open(file = “C:\desktop\myfile.txt”, “r+”)
```
* [x] A
* [ ] B
* [ ] C
* [ ] D


## Question No: 7
#### What will be the output of the following given code?
```
		with open("myfile.txt", "w") as f:
		    f.write("Hello World Python Programming")
		    
		with open('myfile.txt', 'r') as f:
		    data = f.readlines()
		    for line in data:
		        words = line.split()
		        print (words)
```
* [ ] Hello
* [ ] Hello World Python Programming
* [x] ['Hello', 'World', 'Python', 'Programming']
* [ ] Runtime Error


## Question No: 8
#### Which of the following commands can be used to read the entire contents of a file object (object name myfile)?
* [ ] myfile.read(n)
* [x] myfile.read()
* [ ] myfile.readline()
* [ ] myfile.readlines()


## Question No: 9
#### The readlines() method returns ____________
* [ ] str
* [x] a list of lines
* [ ] a list of single characters
* [ ] a list of integers


## Question No: 10
#### To read the remaining lines of the file from a file object infile, we use ____________
* [ ] infile.read(2)
* [ ] infile.read()
* [ ] infile.readline()
* [x] infile.readlines()


## Question No: 11
#### When will the else part of try-except-else be executed?
* [ ] always
* [ ] when an exception occurs
* [x] when no exception occurs
* [ ] when an exception occurs in to except block


## Question No: 12
#### What will be output when ‘1’ == 1 is executed?
* [ ] True
* [x] False
* [ ] TypeError
* [ ] ValueError


## Question No: 13
How many except statements can a try-except block have?
* [ ] zero
* [ ] one
* [ ] more than one
* [x] more than zero


## Question No: 14
#### What will be the output of the following Python code?
```
def test():
    try:
        print(1)
    finally:
        print(2)
test()
```
* [x] 1 2
* [ ] 1
* [ ] 2
* [ ] None of these


## Question No: 15
What kind of exception will be raised by (using python 3.X version):
```
assert 5/0 > 0
```
* [ ] ValueError exception
* [ ] AssertionError exception
* [x] ZeroDivisionError exception
* [ ] No exception is raised by the program