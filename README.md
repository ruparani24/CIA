# CIA
![image](https://user-images.githubusercontent.com/122954429/213092293-5b1ff319-32ff-4ee7-87ba-35fc74f25180.png)




This graph is directed. Conceptually, the prims graph won't function on a directed weighted network, but in this case, the prims method does work because in this graph, when using the prims method, the nodes don't go to the D node after E node, hence omitting the -5 and satisfying the Prims Method. In other cases, Prim's won't work.



Note :
1. Shortest path from source node to all possible nodes cannot be found with prims or kruskals or dijkstras, since it is a negative weighted directed graph.. I have used C programming language, as only C is available in Ubuntu, and am not good in Java.


2. Prim's and Kruskal's algorithm can work only with undirected graphs. Prim's algorithm can't handle directed graph since it works on the principle that all vertices are connected. In directed graphs, not all vertices are connected with others, hence Prim's doesn't work in the given case. Similarly, in each phase of Kruskal's algorithm, it is examined to see if the edges form a cycle with the spanning tree that has already been created. However, Kruskal's approach is unable to identify cycles in a directed graph because it sometimes thinks that there is a cycle between vertices even while there isn't, failing to take some edges into account as a result. Therefore, although both these algorithms work with negative edge weights, both Prim's and Kruskal's fail in the directed graph case.

Dijkstra's algorithm can work with directed graphs, but it cannot handle negative edge weights. Adding any positive number to a vertex that has previously been visited won't ever modify its minimality in Dijkstra's algorithm since it assumes that all costs in the supplied graph are non-negative. However, Dijkstra's algorithm may work for directed graph with negative edge weights in rare case, or special cases.

Performance of all 3 algorithms fail since each algorithm doesn't work with either directed graphs or negative edge weights. 
