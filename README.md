# Team_Assignment

Welcome to Team Assignment Repository!

Build Instructions:

...

############################

To generate example 3D scatterplots (saved as example.png and example2.png) from example data contained as:
wdbc_first3featss.csv
wdbc_g1.csv
wdbc_g2.csv
wdbc_g3.csv

In Terminal:

cd Team_Assignment/gnuplot_scripts/
gnuplot generate_example.txt
gnuplot generate_example2.txt

############################

To compile and use libsvm on example data files:
train.txt
test.txt

In Terminal:

cd Team_Assignment/libsvm-3.21/libsvm-3.21/
make
./svm-train train.txt
./svm-predict test.txt train.txt.model output.txt
