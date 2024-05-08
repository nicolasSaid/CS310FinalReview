/**
 * QUESTIONS:
 * 1. What are the different types of graphs we typically
 *    encounter (hint: it has to do with direction and 
 *    distance)
 *  
 *    - directed/undirected, weighted/unweighted
 * 
 * 2. What does a node being white, grey, or black mean?
 * 
 *    - white is unvisted, grey is visited but not fully explored ("frontier"), black is fully visited
 * 
 * 3. What is an adjacency list representation of a graph?
 * 
 *    - array of linked lists where index is the node and linked list is adjacent nodes
 * 
 * 4. What is an adjacency matrix representation of a graph?
 * 
 *    - V x V matrix where the values in matrix[i][j] is the weight of edge from i to j
 * 
 * 5. What is the big-O SPACE complexity of:
 *      a. An adjacency list graph representation
 *         - O(E)
 *      b. An adjacency matrix graph representation
 *         - O(V^2)
 * 
 * 6. What is meant when a graph is "sparse"?
 *    What about "dense?"
 * 
 *    - sparse = not many edges per vertex, E is approx V
 *    - dense = many edges per vertex, E is approx V^2
 * 
 * 7. Which graph representation should we use if a graph
 *    is sparse? Dense? Why?
 * 
 *    - Adjacency list is better for sparse because it does not waste memory like adjacency matrix
 *    - Adjacency matrix is better for dense because we dont need memory for pointers in list and O(1) to determine if nodes are adjacent
 *
 * 8. What is the big-O TIME complexity of:
 *      a. Determining if two vertices are connected in
 *         an adjacency list
 *         - O(V)
 *      b. Determining if two vertices are connected in
 *         an adjacency matrix
 *         - O(1)
 * 
 * 9. When considering an undirected graph, how does an
 *    Adjacency Matrix waste space?
 * 
 *    BONUS: Is this waste still the case with directed graphs?
 * 
 *    - Both store edges twice in undirected graphs
 * 
 * PRACTICE:
 * 
 * 1. Convert the following adjacency list into a graph representation:
 *   V      Adj
 *   1 |  2 -> 3 ->
 *   2 |  3 -> 5 -> 1 ->
 *   3 |  1 -> 2 ->
 *   4 |  5 ->
 *   5 |  4 -> 2 ->
 * 
 *    - I cant draw this out in text, but if you have questions on this feel free to msg me
 * 
 * 2. Given the adjacency list below, is it possible that the graph is undirected?
 *    why or why not?
 * 
 *   V      Adj
 *   1 |  2 -> 3
 *   2 |  1 -> 
 *   3 |  2 -> 4
 *   4 |  1 -> 
 * 
 *    - No - 3 is connected to 4, 4 is not connected to 3
 * 
 * 3. Given the adjacency list below, is it possible that the graph is undirected?
 *    why or why not?
 * 
 *      1 2 3 4
 *      _ _ _ _
 *  1 | 0 1 0 0
 *  2 | 1 0 0 1
 *  3 | 0 0 0 1
 *  4 | 0 1 1 0
 * 
 * 
 *    - Yes. Every time there is an edge from i to j, there is also one from j to i
 * 
 **/