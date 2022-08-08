# VECTOR IN C++ 
Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container. Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators. In vectors, data is inserted at the end. Inserting at the end takes differential time, as sometimes the array may need to be extended. Removing the last element takes only constant time because no resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.

![w5VP7](https://user-images.githubusercontent.com/109973520/183489670-85d620eb-8ff5-435b-82db-46aaac39ab60.png)

<li>begin() – Returns an iterator pointing to the first element in the vector</li>
<li>end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector</li>
<li>begin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element</li>
<li>rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)</li>
<li>cbegin() – Returns a constant iterator pointing to the first element in the vector.</li>
<li>cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.</li>
<li>crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element</li>
<li>crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)</li>

<h2>Capicty</h2>
<li>size() – Returns the number of elements in the vector.</li>

<li>max_size() – Returns the maximum number of elements that the vector can hold.</li>
<li>capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.</li>
<li>resize(n) – Resizes the container so that it contains ‘n’ elements.</li>
<li>empty() – Returns whether the container is empty.</li>
<li>shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.</li>
<li>reserve() – Requests that the vector capacity be at least enough to contain n elements.</li>
