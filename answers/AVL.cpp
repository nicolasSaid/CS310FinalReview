/**
 * QUESTIONS:
 * 
 * 1. What is the purpose of a balanced tree?
 *    (Hint: it has to do with the time complexity)
 * 
 *    - to keep depth of tree approx log(n) and avoid O(N) operations as they are in a normal BST
 * 
 * 2. What data values does a node in an AVL tree store
 *    in comparison to a normal BST?
 * 
 *    - Stores the actual value in the node and the balance factor (depth of left - depth of right)
 * 
 * 3. What is the time compexity of search in a normal
 *    BST vs an AVL tree?
 * 
 *    - BST = O(N)
 *    - AVL = O(log(N))
 * 
 * 4. What are the four types of rotations used in an
 *    AVL tree? (Hint: L R DL DR)
 * 
 *    - Left rotation, Right rotation, Double left/right left, Double right/left right
 * 
 * 5. What are the balance factor of these nodes in the
 *    following AVL tree?
 *
 *                         ┌─┐
 *                         │A│
 *              ┌──────────┴─┴───────────┐
 *              │                        │
 *             ┌┴┐                      ┌┴┐
 *             │B│                      │C│
 *        ┌────┴─┘               ┌──────┴─┘
 *        │                      │
 *        │                      │
 *       ┌┴┐                    ┌┴┐
 *       │D│                    │E│
 *  ┌────┴─┘                    └─┴────┐
 *  │                                  │
 *  │                                  │
 * ┌┴┐                                ┌┴┐
 * │F│                                │G│
 * └─┘                                └─┘
 * 
 *   - A = 0
 *   - B = 2
 *   - C = 2
 *   - D = 1
 *   - E = -1
 *   - F = 0
 *   - G = 0
 * 
 * 
 * 6. What is the time complexty of the rotation operation
 *    used in the AVL tree? Why?
 * 
 *    - O(1), just need to adjust a finite number of pointers
 * 
 * 
 **/