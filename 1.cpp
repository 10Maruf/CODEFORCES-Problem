#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <list>
#include <algorithm> // For std::reverse

using namespace std;

// Function to perform BFS and find the shortest path
vector<int> BFS(const unordered_map<int, list<int>>& adjList, int startVertex, int endVertex) {
    // A queue to manage the BFS process
    queue<int> q;
    // A map to keep track of distances from the start vertex
    unordered_map<int, int> distances;
    // A map to keep track of the parent of each vertex to reconstruct the path
    unordered_map<int, int> parents;
    // A vector to store the shortest path
    vector<int> shortestPath;

    // Initialize distances to a large value
    for (const auto& vertex : adjList) {
        distances[vertex.first] = INT_MAX;
    }

    // Mark the start vertex with distance 0 and enqueue it
    distances[startVertex] = 0;
    parents[startVertex] = -1; // Start vertex has no parent
    q.push(startVertex);

    while (!q.empty()) {
        int currentVertex = q.front();
        q.pop();

        // Process each adjacent vertex
        for (int adjacentVertex : adjList.at(currentVertex)) {
            if (distances[adjacentVertex] == INT_MAX) { // If not visited
                distances[adjacentVertex] = distances[currentVertex] + 1;
                parents[adjacentVertex] = currentVertex;
                q.push(adjacentVertex);
            }
        }
    }

    // Reconstruct the shortest path from endVertex to startVertex
    if (distances[endVertex] != INT_MAX) { // If there is a path
        for (int v = endVertex; v != -1; v = parents[v]) {
            shortestPath.push_back(v);
        }
        reverse(shortestPath.begin(), shortestPath.end()); // Reverse to get the path from start to end
    }

    return shortestPath;
}

// Function to create an adjacency list from the given edges
unordered_map<int, list<int>> createAdjList(const vector<pair<int, int>>& edges) {
    unordered_map<int, list<int>> adjList;
    for (const auto& edge : edges) {
        adjList[edge.first].push_back(edge.second);
        adjList[edge.second].push_back(edge.first);  // Because the graph is undirected
    }
    return adjList;
}

int main() {
    // Define the edges of the graph
    vector<pair<int, int>> edges = { {0, 1}, {0, 3}, {1, 3}, {1, 2}, {1, 5}, {1, 6}, {2, 3}, {2, 5}, {2, 4}, {3, 4}, {4, 6} };

    // Create an adjacency list from the edges
    unordered_map<int, list<int>> adjList = createAdjList(edges);

    // Perform BFS to find the shortest path from vertex 0 to vertex 6
    int startVertex = 5;
    int endVertex = 4;
    vector<int> shortestPath = BFS(adjList, startVertex, endVertex);

    // Print the shortest path
    if (!shortestPath.empty()) {
        cout << "Shortest path from vertex " << startVertex << " to vertex " << endVertex << ": ";
        for (int vertex : shortestPath) {
            cout << vertex << " ";
        }
        cout << endl;
    } else {
        cout << "No path exists from vertex " << startVertex << " to vertex " << endVertex << "." << endl;
    }

    return 0;
}
