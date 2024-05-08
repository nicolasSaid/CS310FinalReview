/**
 * QUESTIONS:
 * 
 * 1. In Dijkstra's algorithm, what data structure do we
 *    use to traverse our nodes in the proper order?
 * 
 *    - priority queue (min heap)
 * 
 * 2. Could we perform Dijkstra's algorithm if our graph
 *    has negative edge weights?
 * 
 *    - no, this would make us traverse our nodes in the wrong order
 * 
 * 3. What values does each node store in order to perform
 *    dijkstra's algorithm on a graph?
 * 
 *    - pi = predecessor
 *    - d = distance
 * 
 * 4. In Dijkstra's algorithm, we have three sub-operations
 *    that we analyzed to help us determine dijkstra's time
 *    complexity. For each of the operations below, explain
 *    what each one is doing:
 *      a) Init-single-source
 *          - set initial distances to infinity and pi to NIL
 *      b) Q = G.V
 *          - create a min heap with all the nodes
 *      c) Extract-min
 *          - remove the next node from the priority queue
 *      d) Relax
 *          - Update the distance and pi of adjacent nodes
 * 
 * 5. For each of the sub-operations above, list each of their
 *    time complexities and explain why that is the case.
 *      a) Init-single-source
 *          - O(V)
 *      b) Q = G.V
 *          - O(V)
 *      c) Extract-min
 *          - O(log(V))
 *      d) Relax
 *          - O(1) --> including decrease key, O(log(V))
 * 
 * 6. What is the overall time complexity of Dijkstra's algorithm?
 *    why is that the case?
 * 
 *       - O(Vlog(V) + Elog(V)) --> V (init) + V (Queue) + Vlog(V) (extract min for every vertex) + Elog(V) (relax for every edge)
 * 
 * 7. After performing Dijkstra's algorithm, how can we obtain the
 *    path from the source node S to the destination node D?
 * 
 *       - start from destination node, go through predecessor nodes and push all nodes onto stack
 *       - when you pop, its in the order you traversed
 *  
 **/