class point {
    public int x;
    public int y;

    point(int _y, int _x) {
        x = _x;
        y = _y;
    }
}

public class Solution {

    public static void placeP(int[][] minRegular, int[][] visited, Queue<point> q, point p, int h, int w) {

        visited[p.y][p.x] = 1;

        if (p.x > 0 && minRegular[p.y][p.x - 1] > 0)
            minRegular[p.y][p.x] = Math.max(minRegular[p.y][p.x], minRegular[p.y][p.x - 1] + 1);
        if (p.x < w - 1 && minRegular[p.y][p.x + 1] > 0)
            minRegular[p.y][p.x] = Math.max(minRegular[p.y][p.x], minRegular[p.y][p.x + 1] + 1);
        if (p.y > 0 && minRegular[p.y - 1][p.x] > 0)
            minRegular[p.y][p.x] = Math.max(minRegular[p.y][p.x], minRegular[p.y - 1][p.x] + 1);
        if (p.y < h - 1 && minRegular[p.y + 1][p.x] > 0)
            minRegular[p.y][p.x] = Math.max(minRegular[p.y][p.x], minRegular[p.y + 1][p.x] + 1);

        if (p.x < w - 1 && visited[p.y][p.x + 1] == 0)
            q.add(new point(p.y, p.x + 1));
        if (p.x > 0 && visited[p.y][p.x - 1] == 0)
            q.add(new point(p.y, p.x - 1));
        if (p.y < h - 1 && visited[p.y + 1][p.x] == 0)
            q.add(new point(p.y + 1, p.x));
        if (p.y > 0 && visited[p.y - 1][p.x] == 0)
            q.add(new point(p.y - 1, p.x));

    }


    public static void main(String[] args) {

        int[][] maze2 = {{0, 1, 1, 0},
                {0, 0, 0, 1},
                {1, 1, 0, 0},
                {1, 1, 1, 0}};


        int[][] maze = {{0, 0, 0, 0, 0},
                {1, 1, 1, 1, 0},
                {0, 0, 0, 0, 0},
                {0, 1, 0, 1, 1},
                {0, 0, 0, 0, 0}};

/*
		int[][] maze = {{0, 0, 0, 0, 0, 0},
				{1, 1, 1, 1, 1, 0},
				{0, 0, 0, 0, 0, 0},
				{1, 1, 0, 1, 1, 1},
				{0, 1, 0, 1, 1, 1},
				{0, 0, 0, 0, 0, 0}};
*/
        System.out.println("min: " + answer(maze));
    }

}
