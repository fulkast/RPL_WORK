

=== Object Recognition  ===
Contributor: Lanke Fu
SVN link: https://svn.inf.ethz.ch/svn/meyer/rpl2015/trunk/group/ful/
Tags: Spin Image, Point Cloud Correlation, Voxel Grid, Euclidean Clustering, Pass Through Filter, Locality Sensitive Hashing.


In this implementation of an object recognition algorithm, objects are classified by the classes: human, duck and unknown. 

The computations hosted over the ROS node object_recognition_node as carried out as follows:

1) Point Cloud Acquisition
	- The raw point cloud is subscribed to and retrieved.
2) Filtering
	- A cascade of pass through filter, voxel grid tesselation and Euclidean clustering is performed to enhance the object detection. 
3) Matching
	- A library of prototypes available in /config is loaded, from which the matches are made according to the correlation in 3D-spin image.
	- In this step, a point cloud of spin images are generated for both the current blob detected, as well as all the point clouds in the library. The library's spin images is pre-computed to save time.
	- The correlation between the histograms of the blob spin image point cloud and of the reference prototypes are calculated as a measure of similarity between a given blob and a given reference prototype.
	- To find the most likely match, a procedure similar to locality sensitive hashing is carried out.
		- A first layer filter only considers the correlations which exceed a given threshold parameter. This lets the similar candidates through.
		- A second layer filter only lets through the candidates for which the count of results from the first filter exceed another threshold count. This filters out the noisy data points in unlikely matches, which coincidentally achieved a high correlation value.
4) The most likely match is printed according to the color scheme:
	- Blue : duck
	- Green : human
	- Red : unknown

.

NOTE! AT EXECUTION: PASS IN THROUGH THE COMMANDLINE, THE LOCATION OF THE FILE: config/parameters.info









