CyrusMachine: Machine.o Rotor.o CyrusMachine.o
	g++ -o CyrusMachine Machine.o Rotor.o CyrusMachine.o
Rotor.o: Rotor.cpp Rotor.h
	g++ -c Rotor.cpp
Machine.o: Machine.cpp Machine.h Rotor.h
	g++ -c Machine.cpp
CyrusMachine.o: CyrusMachine.cpp Machine.h Rotor.h
	g++ -c CyrusMachine.cpp
