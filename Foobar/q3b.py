from collections import deque


class Node:
    def __init__(self, x, y, bypasses, grid):
        self.x = x
        self.y = y
        self.bypasses = bypasses
        self.grid = grid

    def __eq__(self, comp):
        return self.x == comp.x and self.y == comp.y and self.bypasses == comp.bypasses

    def __hash__(self):
        return self.x + len(self.grid) * self.y

    def get_vertices(self):
        vertices = []
        x = self.x
        y = self.y
        bypasses = self.bypasses
        grid = self.grid
        width = len(grid[0])
        height = len(grid)

        if x > 0:
            wall = grid[y][x - 1] == 1
            if wall:
                if bypasses > 0:
                    vertices.append(Node(x - 1, y, bypasses - 1, grid))
                else:
                    pass
            else:
                vertices.append(Node(x - 1, y, bypasses, grid))

        if x < width - 1:
            wall = grid[y][x + 1] == 1
            if wall:
                if bypasses > 0:
                    vertices.append(Node(x + 1, y, bypasses - 1, grid))
                else:
                    pass
            else:
                vertices.append(Node(x + 1, y, bypasses, grid))

        if y > 0:
            wall = grid[y - 1][x] == 1
            if wall:
                if bypasses > 0:
                    vertices.append(Node(x, y - 1, bypasses - 1, grid))
                else:
                    pass
            else:
                vertices.append(Node(x, y - 1, bypasses, grid))

        if y < height - 1:
            wall = grid[y + 1][x]
            if wall:
                if bypasses > 0:
                    vertices.append(Node(x, y + 1, bypasses - 1, grid))
                else:
                    pass
            else:
                vertices.append(Node(x, y + 1, bypasses, grid))

        return vertices


class PathFinder:
    def __init__(self, grid, bypasses):
        self.grid = grid
        self.height = len(grid)
        self.width = len(grid[0])
        self.bypasses = bypasses

    def shortest_path(self):
        source = Node(0, 0, self.bypasses, self.grid)
        queue = deque([source])
        distance_map = {source: 1}

        while queue:
            curr = queue.popleft()

            if curr.x == self.width - 1 and curr.y == self.height - 1:
                return distance_map[curr]

            for neighbor in curr.get_vertices():
                if neighbor not in distance_map.keys():
                    distance_map[neighbor] = distance_map[curr] + 1
                    queue.append(neighbor)


def answer(maze):
    router = PathFinder(maze, 1)
    return router.shortest_path()
