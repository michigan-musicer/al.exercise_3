exercises: e4_exercises.c
	gcc e4_exercises.c e4_exercises.h -o exercises
	./exercises

# should not be accessible to students before solution is posted.
exercises_solution: e4_exercises_solutions.c
	gcc e4_exercises_solutions.c e4_exercises.h -o exercises_solution
	./exercises_solution

in_class: e4_in_class_practice.c
	gcc e4_in_class_practice.c e4_in_class_practice.h -o in_class
	./in_class

clean: 
	rm exercises exercises_solution in_class 