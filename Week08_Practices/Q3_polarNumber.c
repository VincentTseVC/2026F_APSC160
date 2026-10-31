/*
In this question, you will be converting polar numbers to rectangular form (don’t worry if you have
never heard of these). A polar number is in the form A ∠θ, where A is any number and θ is an angle
in degrees. We want to see this number in rectangular form, X + iY (or X + jY if you are in
electrical engineering), where i (or j) represents the imaginary number √−1.

The formula for X is given by X = Acosθ while Y is given by Y = Asinθ.

You will be reading a file called “fun_coding.dat” which has five columns such as the one below:

                    1  3  93.583  30.2  249
                    2  6  26.482  74.2  284
                    3  4  94.184  20.1  183

In the above example (and the file that you will read), the second column represents A while the
fourth column represents θ. You will be writing to a file called “my_answers.dat” which will
look like the following:

                        X + j Y
                    2.185 + j 12.52
                    86.29 + j 0.10
                    95.12 + j 948.83

*/