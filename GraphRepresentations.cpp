/**
 * QUESTIONS:
 * 1. What are the different types of graphs we typically
 *    encounter (hint: it has to do with direction and 
 *    distance)
 * 
 * 2. What does a node being white, grey, or black mean?
 * 
 * 3. What is an adjacency list representation of a graph?
 * 
 * 4. What is an adjacency matrix representation of a graph?
 * 
 * 5. What is the big-O SPACE complexity of:
 *      a. An adjacency list graph representation
 *      b. An adjacency matrix graph representation
 * 
 * 6. What is meant when a graph is "sparse"?
 *    What about "dense?"
 * 
 * 7. Which graph representation should we use if a graph
 *    is sparse? Dense? Why?
 *
 * 8. What is the big-O TIME complexity of:
 *      a. Determining if two vertices are connected in
 *         an adjacency list
 *      b. Determining if two vertices are connected in
 *         an adjacency matrix
 * 
 * 9. When considering an undirected graph, how does an
 *    Adjacency Matrix waste space?
 * 
 *    BONUS: Is this waste still the case with directed graphs?
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
 * 2. Given the adjacency list below, is it possible that the graph is undirected?
 *    why or why not?
 * 
 *   V      Adj
 *   1 |  2 -> 3
 *   2 |  1 -> 
 *   3 |  2 -> 4
 *   4 |  1 -> 
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
 **/