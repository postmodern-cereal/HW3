The programs in this homework assignment can be compiled by typing make.
In addition to the assigned programs, I have created an additional program,
    Homework3, which runs both program 3 and program 4 using fork and exec.
    Note: make will build Homework3 by default. It seems a logical decision.

If make creates errors, simply type make clean. This should fix the problem.

It is possible to build program 1 and program 2 using make, if necessary. Simply type
    "make Program1.out" or "make Program2.out" in the command line, depending on which program
    needs to be built.

When executing program 4 from the command line, you may specify a value for N to be used
    when program2 is called. If no value is supplied, program4 will default to passing "12"
    as the size parameter.

Also, for reasons that are unclear to me, make throws an error when executing programs that
    do not return some value. In order to appease make, and since it does not impact
    the execution of either program, Program3 and Program4 both return 0.
