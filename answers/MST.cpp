/**
 * QUESTIONS:
 * 
 * 1. What is a minimum spanning tree and what are its 
 *    properties?
 * 
 *    - V-1 edges connecting all V nodes with the edges having the minimum sum of edge weights
 * 
 * 2. What data structures are used in Kruskal's algorithm
 *    to compute the MST?
 * 
 *    - Sorted array of edges (sorted based on edge weight)
 * 
 * 3. In what order does Kruskal's algorithm consider edges
 *    and what data structure does it use to do so?
 * 
 *    - minimum weight to max weight
 * 
 * 4. How does Kruskal's algorithm decide to add an edge to
 *    the MST or not?
 * 
 *    - whether or not the source and destination node are in the same set or not
 * 
 * 5. How is Prim's algorithm differnt than Kruskal's? How is
 *    it similar?
 * 
 *    - Prim's also finds minimum spanning tree, Prim's starts at a source node while Kruskal's doesn't
 * 
 * 6. What data structure does Prim's algorithm use to consider
 *    the edges in the proper order?
 * 
 *    - Prim's uses a priority queue (min heap) to consider next edge
 * 
 * 7. How does Prim's decide whether or not to add an edge to
 *    the MST or not?
 * 
 *    - whether or not the node you want to add is in the MST already or not
 * 
 **/