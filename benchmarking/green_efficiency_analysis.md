# Green Efficiency Analysis

## Measurement Methodology
Using the `clock()` function from the C standard library `<time.h>` header, runtimes of various functions were calculated and compared. Since the function returns raw clock cycles, the constant value `CLOCKS_PER_SEC` was used as a normalising variable.

## Observed Performance Differences
### Test 1: baseline\_loop.c
The first test was designed to demonstrate that, generally, the same instructions run in the same time. Over three runs of the program, the difference in execution time never reached a deviation of 0.0006s; less than 0.3%. This proves that clock cycles are essentially constant.

### Test 2: comparison\_algorithms.c
In the second test, which compared two different algorithms (a "naïve" algorithm which ran in O(n^2) time, and a "single-pass" algorithm which ran in linear time), the results were largely as expected: in an array with 25,000 elements, the naïve algorithm ran approximately 25,000 times slower (in fact the average result in testing was just under 26,000 times slower). This test demonstrated that the choice of algorithm and running time matters when attempting to implement greener coding practices.

### Test 3: instrumentation\_lab.c 
The third test demonstrated that clock cycles are only taken up when work is actually being done; on average the total runtime of the program was mere microseconds slower than the sum of the three functions that it ran. For example:

| Function | Runtime (s) |
| BUILD\_DATA | 0.000261 |
| PROCESS | 0.000281 |
| REDUCE | 0.000123 |
| TOTAL | 0.000667 |

Note the disparity between the sum of the three functions (0.000665s) and the clock running over all the functions (0.000667s) is negligible; splitting code into functions does not inherently carry a cost. 

## Relation Between Runtime and Energy Consumption
Since a clock cycle is a clock cycle (that is, it doesn't really matter what we do in that cycle), there is a direct proportionality between runtime and energy consumption. 
Programs that consume fewer clock cycles, by definition, consume less energy.

## Limitations of the Experiment
The experiments had a few limitations, which should be noted:
- Code was only run on a single architecture, with a single version of GCC
- Averages were taken over a small number (~3) of iterations of programs

In addition, potential further research could be done to test how GCC's `-O` optimisation flags might change how efficient code ends up.

## Practical Engineering Takeaway
In conclusion, it is important to choose efficient algorithms whenever possible, considering the runtime of algorithms. As engineers in a world where natural resources are dwindling and global warming is progressing at an unprecedented pace, it has never been more important to save clock cycles wherever possible.
