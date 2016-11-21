# DataVisualizationC

Welcome to DataVisualizationC Repository!

Build Instructions:

...

############################

To generate example 3D scatterplots (saved as example.png and example2.png) from example data contained as:
wdbc_first3featss.csv
wdbc_g1.csv
wdbc_g2.csv
wdbc_g3.csv

In Terminal:

> cd DataVisualizationC/gnuplot_scripts/
> gnuplot generate_example.txt
> gnuplot generate_example2.txt

############################

To compile and use libsvm on example data files:
train.txt
test.txt

In Terminal:

> cd DataVisualizationC/libsvm-3.21/libsvm-3.21/
> make
> ./svm-train train.txt
> ./svm-predict test.txt train.txt.model output.txt



#############################

To compile and use Qt application perform the following steps

-Open the terminal...
-If not already loaded, load the appropriate modules (gcc & qt).
-Browse into 'DataVisualizationC/MachineLearningApp'
-The project and source files are in this location.
-To create the make file, run the following command in this directory: 
	> qmake -project
	> qmake MachineLearningApp.pro
	> make
-To run the application, run the following command in this directory:
	> ./MachineLearningApp

NOTE: This is a graphical user interface application and should be run in VNC.

#############################
