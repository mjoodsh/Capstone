*Author: Majed Alshaikhhussain

# p04: Capstone

# Requirements documentation

## -Input/Output
#### Output
`[CyrusMachine.cpp lines 26-32](/CyrusMachine.cpp#L26)`

-The use of this command is to print a massage to the user.

#### Input
`[CyrusMachine.cpp lines 36](/CyrusMachine.cpp#L36)`

-The use of this command to get input from the user

## -Control Flow
`[CyrusMachine.cpp lines 41-64](/CyrusMachine.cpp#L41)`

-This if else statment have been used to determine the user choice function, because I have two functions to choose from that's why if else is more appropriate to use there.

`[CyrusMachine.cpp lines 46-59](/CyrusMachine.cpp#L46)`

-Because we have two choices if else statement is more appropriate to use there.

`[CyrusMachine.cpp lines 82-87](/CyrusMachine.cpp#L82)`

-If statement has been used to determine if the user wants to create a file to save the message. Thus, if statement is more appropreate because if the user dosen't want to create a file then the program doesn't need to do anything.

## -Iteration
`[CyrusMachine.cpp lines 34-37](/CyrusMachine.cpp#L34)`

-Do while loop has been used because the it needs to be determined the choice of the user. Thus, it has to ask the user choice at least one time.

`[CyrusMachine.cpp lines 66-68](/CyrusMachine.cpp#L66)`

-While loop was used here to determine if the user wants to continue or not. So, while loop is more appropiate because we have to check the condition before making a decision.

## -Data Structure

`[Machine.h lines 12](/Machine.h#L12)`

-Vectors has been used to hold the rotors values, because the number of rotors is not fixed (could be change) so the vectors are appropreate here because they are dynamically gorw.

## -Function

`[Machine.cpp lines 23-29](/Machine.cpp#L23)`

-This function is to encrypte a charachter by passing it through a sequence of the readed rotors. A non-void function with passing by value has been used because we don't need to change the value of the passed variable and we need to return the encrypted value.

`[Machine.cpp lines 33-39](/Machine.cpp#L33)`

-This function is to decrypte a charachter by passing it through the reverse sequence of the readed rotors. A non-void function with passing by value has been used because we don't need to change the value of the passed variable and we need to return the decrypted value.

`[CyrusMachine.cpp lines 79-89](/CyrusMachine.cpp#L79)`

-This funciton is to determine if the user wants to create a file to save the masage. A void function has been used because there is no ned to return any value and using it as pass-by-reference because we need to make changes on the file stream that has been created in the main function.

## -File IO

`[Machine.cpp lines 8](/Machine.cpp#L8)`

-Input file has been created to read the sequence of the rotors. File stream has been used because the rotors multiplayer and adder are saved into text file so we don't have to enter them manualy each time the program runs.


## -Class

`[Rotor.h lines 6-14](/Rotor.h#L6)`

-A class needed to be created because we have multiple objects (Rotors) of the same type.
