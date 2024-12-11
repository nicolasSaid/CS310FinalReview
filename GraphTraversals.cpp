/**
 * QUESTIONS:
 *  1. Describe how BFS and DFS traverses its adjacent nodes
 *     (do they spread out or go down one path?)
 * 
 *  2. What values does each node keep track of during a BFS?
 * 
 *  3. What values does each node keep track of during a DFS?
 * 
 *  4. What data structures does BFS and DFS use to find the
 *     next node in their traversals?
 * 
 *  5. What are the runtime complexities of the following
 *     algorithms using an adjacency list representation?
 *     what about an adjacency matrix?
 *       a. DFS
 *       b. BFS
 *
 *  6. Explain *why* each of the above algorithms has the
 *     run-time complexity that it does.
 * 
 * PRACTICE:
 * 1. Given the graph below, perform a BFS and DFS from the
 *    starting node 1 and write a valid Breadth first tree
 *    and depth first tree.
 * 
 *   V      Adj
 *   1 |  2 -> 3 ->
 *   2 |  3 -> 5 -> 1 ->
 *   3 |  1 -> 2 ->
 *   4 |  5 -> 6 ->
 *   5 |  4 -> 2 ->
 *   6 |  4 -> 7 -> 8 ->
 *   7 |  6 ->
 *   8 |  6 ->
 * 
 **/