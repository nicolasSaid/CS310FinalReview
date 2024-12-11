/**
 * QUESTIONS:
 *  1. Describe how BFS and DFS traverses its adjacent nodes
 *     (do they spread out or go down one path?)
 * 
 *     - BFS spreads out and traverses all nodes distance 1 from the source, then dist 2, etc
 *     - DFS goes all the way down one path, then goes back to explore other paths
 * 
 *  2. What values does each node keep track of during a BFS?
 *     
 *     - BFS has:
 *        - pi for predecessor
 *        - d for distance
 *        - color
 * 
 *  3. What values does each node keep track of during a DFS?
 * 
 *     - DFS has:
 *        - pi for predecessor
 *        - d for discovery time
 *        - f for finish time
 *        - color
 * 
 *  4. What data structures does BFS and DFS use to find the
 *     next node in their traversals?
 * 
 *      - BFS = queue, DFS = stack/recursion
 * 
 *  5. What are the runtime complexities of the following
 *     algorithms using an adjacency list representation?
 *     what about an adjacency matrix?
 *       a. DFS
 *           - List - O(V + E)
 *           - Matrix - O(V^2)
 *       b. BFS
 *           - List - O(V + E)
 *           - Matrix - O(V^2)
 *
 *  6. Explain *why* each of the above algorithms has the
 *     run-time complexity that it does.
 * 
 *       - O(V) initialization and O(E) traversal across all edges
 * 
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
 *    - This was done during the session, I cant draw this out but if you have questions feel free to msg
 *   
 **/