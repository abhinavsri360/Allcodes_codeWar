public class KernelFilter {
    public static void main(String[] args) {
        Picture p = new Picture(args[0]);
        Picture q = gaussian(p);
        Picture r = laplacian(p);
        r.show();
    }

    public static Picture gaussian(Picture picture) {
        Picture q = picture;
        int[][] r = new int[picture.width()][picture.height()];
        int[][] g = new int[picture.width()][picture.height()];
        int[][] b = new int[picture.width()][picture.height()];
        int[][] k = {{1, 2, 1}, {2, 4, 2}, {1, 2, 1}};

        for (int i = 0; i < picture.width(); i++) {
            for (int j = 0; j < picture.height(); j++) {
                Color pic = picture.get(i, j);
                r[i][j] = pic.getRed();
                b[i][j] = pic.getBlue();
                g[i][j] = pic.getGreen();
            }
        }
        for (int i = 1; i < picture.width() - 1; i++) {
            for (int j = 1; j < picture.height() - 1; j++) {
                int red = r[i - 1][j - 1] * k[0][0] + r[i - 1][j] * k[0][1] + r[i - 1][j + 1] * k[0][2] + r[i][j - 1] * k[1][0] + r[i][j] * k[1][1] + r[i][j + 1] * k[1][2] + r[i + 1][j - 1] * k[2][0] + r[i + 1][j] * k[2][1] + r[i + 1][j + 1] * k[2][2];
                int green = g[i - 1][j - 1] * k[0][0] + g[i - 1][j] * k[0][1] + g[i - 1][j + 1] * k[0][2] + g[i][j - 1] * k[1][0] + g[i][j] * k[1][1] + g[i][j + 1] * k[1][2] + g[i + 1][j - 1] * k[2][0] + g[i + 1][j] * k[2][1] + g[i + 1][j + 1] * k[2][2];
                int blue = b[i - 1][j - 1] * k[0][0] + b[i - 1][j] * k[0][1] + b[i - 1][j + 1] * k[0][2] + b[i][j - 1] * k[1][0] + b[i][j] * k[1][1] + b[i][j + 1] * k[1][2] + b[i + 1][j - 1] * k[2][0] + b[i + 1][j] * k[2][1] + b[i + 1][j + 1] * k[2][2];
                red = red / 16;
                green = green / 16;
                blue = blue / 16;
                if (red < 0)
                    red = 0;
                else if (red > 255)
                    red = 255;
                if (green < 0)
                    green = 0;
                else if (green > 255)
                    green = 255;
                if (blue < 0)
                    blue = 0;
                else if (blue > 255)
                    blue = 255;
                Color gray = new Color(red, green, blue);
                q.set(i, j, gray);
            }
        }
        return q;
    }

    public static Picture laplacian(Picture picture) {
        Picture q = picture;
        int[][] r = new int[picture.width()][picture.height()];
        int[][] g = new int[picture.width()][picture.height()];
        int[][] b = new int[picture.width()][picture.height()];
        int[][] k = {{-1, -1, -1}, {-1, 8, -1}, {-1, -1, -1}};

        for (int i = 0; i < picture.width(); i++) {
            for (int j = 0; j < picture.height(); j++) {
                Color pic = picture.get(i, j);
                r[i][j] = pic.getRed();
                b[i][j] = pic.getBlue();
                g[i][j] = pic.getGreen();
            }
        }
        for (int i = 1; i < picture.width() - 1; i++) {
            for (int j = 1; j < picture.height() - 1; j++) {
                int red = r[i - 1][j - 1] * k[0][0] + r[i - 1][j] * k[0][1] + r[i - 1][j + 1] * k[0][2] + r[i][j - 1] * k[1][0] + r[i][j] * k[1][1] + r[i][j + 1] * k[1][2] + r[i + 1][j - 1] * k[2][0] + r[i + 1][j] * k[2][1] + r[i + 1][j + 1] * k[2][2];
                int green = g[i - 1][j - 1] * k[0][0] + g[i - 1][j] * k[0][1] + g[i - 1][j + 1] * k[0][2] + g[i][j - 1] * k[1][0] + g[i][j] * k[1][1] + g[i][j + 1] * k[1][2] + g[i + 1][j - 1] * k[2][0] + g[i + 1][j] * k[2][1] + g[i + 1][j + 1] * k[2][2];
                int blue = b[i - 1][j - 1] * k[0][0] + b[i - 1][j] * k[0][1] + b[i - 1][j + 1] * k[0][2] + b[i][j - 1] * k[1][0] + b[i][j] * k[1][1] + b[i][j + 1] * k[1][2] + b[i + 1][j - 1] * k[2][0] + b[i + 1][j] * k[2][1] + b[i + 1][j + 1] * k[2][2];
                if (red < 0)
                    red = 0;
                else if (red > 255)
                    red = 255;
                if (green < 0)
                    green = 0;
                else if (green > 255)
                    green = 255;
                if (blue < 0)
                    blue = 0;
                else if (blue > 255)
                    blue = 255;
                Color gray = new Color(red, green, blue);
                q.set(i, j, gray);
            }
        }
        return q;
    }

    public static Picture sharpen(Picture picture) {
        Picture q = picture;
        int[][] r = new int[picture.width()][picture.height()];
        int[][] g = new int[picture.width()][picture.height()];
        int[][] b = new int[picture.width()][picture.height()];
        int[][] k = {{0, -1, 0}, {-1, 5, -1}, {0, -1, 0}};

        for (int i = 0; i < picture.width(); i++) {
            for (int j = 0; j < picture.height(); j++) {
                Color pic = picture.get(i, j);
                r[i][j] = pic.getRed();
                b[i][j] = pic.getBlue();
                g[i][j] = pic.getGreen();
            }
        }
        for (int i = 1; i < picture.width() - 1; i++) {
            for (int j = 1; j < picture.height() - 1; j++) {
                int red = r[i - 1][j - 1] * k[0][0] + r[i - 1][j] * k[0][1] + r[i - 1][j + 1] * k[0][2] + r[i][j - 1] * k[1][0] + r[i][j] * k[1][1] + r[i][j + 1] * k[1][2] + r[i + 1][j - 1] * k[2][0] + r[i + 1][j] * k[2][1] + r[i + 1][j + 1] * k[2][2];
                int green = g[i - 1][j - 1] * k[0][0] + g[i - 1][j] * k[0][1] + g[i - 1][j + 1] * k[0][2] + g[i][j - 1] * k[1][0] + g[i][j] * k[1][1] + g[i][j + 1] * k[1][2] + g[i + 1][j - 1] * k[2][0] + g[i + 1][j] * k[2][1] + g[i + 1][j + 1] * k[2][2];
                int blue = b[i - 1][j - 1] * k[0][0] + b[i - 1][j] * k[0][1] + b[i - 1][j + 1] * k[0][2] + b[i][j - 1] * k[1][0] + b[i][j] * k[1][1] + b[i][j + 1] * k[1][2] + b[i + 1][j - 1] * k[2][0] + b[i + 1][j] * k[2][1] + b[i + 1][j + 1] * k[2][2];
                if (red < 0)
                    red = 0;
                else if (red > 255)
                    red = 255;
                if (green < 0)
                    green = 0;
                else if (green > 255)
                    green = 255;
                if (blue < 0)
                    blue = 0;
                else if (blue > 255)
                    blue = 255;
                Color gray = new Color(red, green, blue);
                q.set(i, j, gray);
            }
        }
        return q;
    }

    public static Picture emboss(Picture picture) {
        Picture q = picture;
        int[][] r = new int[picture.width()][picture.height()];
        int[][] g = new int[picture.width()][picture.height()];
        int[][] b = new int[picture.width()][picture.height()];
        int[][] k = {{-2, -1, 0}, {-1, 1, 1}, {0, 1, 2}};

        for (int i = 0; i < picture.width(); i++) {
            for (int j = 0; j < picture.height(); j++) {
                Color pic = picture.get(i, j);
                r[i][j] = pic.getRed();
                b[i][j] = pic.getBlue();
                g[i][j] = pic.getGreen();
            }
        }
        for (int i = 1; i < picture.width() - 1; i++) {
            for (int j = 1; j < picture.height() - 1; j++) {
                int red = r[i - 1][j - 1] * k[0][0] + r[i - 1][j] * k[0][1] + r[i - 1][j + 1] * k[0][2] + r[i][j - 1] * k[1][0] + r[i][j] * k[1][1] + r[i][j + 1] * k[1][2] + r[i + 1][j - 1] * k[2][0] + r[i + 1][j] * k[2][1] + r[i + 1][j + 1] * k[2][2];
                int green = g[i - 1][j - 1] * k[0][0] + g[i - 1][j] * k[0][1] + g[i - 1][j + 1] * k[0][2] + g[i][j - 1] * k[1][0] + g[i][j] * k[1][1] + g[i][j + 1] * k[1][2] + g[i + 1][j - 1] * k[2][0] + g[i + 1][j] * k[2][1] + g[i + 1][j + 1] * k[2][2];
                int blue = b[i - 1][j - 1] * k[0][0] + b[i - 1][j] * k[0][1] + b[i - 1][j + 1] * k[0][2] + b[i][j - 1] * k[1][0] + b[i][j] * k[1][1] + b[i][j + 1] * k[1][2] + b[i + 1][j - 1] * k[2][0] + b[i + 1][j] * k[2][1] + b[i + 1][j + 1] * k[2][2];
                if (red < 0)
                    red = 0;
                else if (red > 255)
                    red = 255;
                if (green < 0)
                    green = 0;
                else if (green > 255)
                    green = 255;
                if (blue < 0)
                    blue = 0;
                else if (blue > 255)
                    blue = 255;
                Color gray = new Color(red, green, blue);
                q.set(i, j, gray);
            }
        }
        return q;
    }

    public static Picture motionBlur(Picture picture) {
        Picture q = picture;
        int[][] r = new int[picture.width()][picture.height()];
        int[][] g = new int[picture.width()][picture.height()];
        int[][] b = new int[picture.width()][picture.height()];
        int[][] k = {{1, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 1, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 1, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 1, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 1, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 1, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 1, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 1, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 1}};

        for (int i = 0; i < picture.width(); i++) {
            for (int j = 0; j < picture.height(); j++) {
                Color pic = picture.get(i, j);
                r[i][j] = pic.getRed();
                b[i][j] = pic.getBlue();
                g[i][j] = pic.getGreen();
            }
        }
        for (int i = 5; i < picture.width() - 5; i++) {
            for (int j = 5; j < picture.height() - 5; j++) {
                int red = r[i - 1][j - 1] * k[0][0] + r[i - 1][j] * k[0][1] + r[i - 1][j + 1] * k[0][2] + r[i][j - 1] * k[1][0] + r[i][j] * k[1][1] + r[i][j + 1] * k[1][2] + r[i + 1][j - 1] * k[2][0] + r[i + 1][j] * k[2][1] + r[i + 1][j + 1] * k[2][2];
                int green = g[i - 1][j - 1] * k[0][0] + g[i - 1][j] * k[0][1] + g[i - 1][j + 1] * k[0][2] + g[i][j - 1] * k[1][0] + g[i][j] * k[1][1] + g[i][j + 1] * k[1][2] + g[i + 1][j - 1] * k[2][0] + g[i + 1][j] * k[2][1] + g[i + 1][j + 1] * k[2][2];
                int blue = b[i - 1][j - 1] * k[0][0] + b[i - 1][j] * k[0][1] + b[i - 1][j + 1] * k[0][2] + b[i][j - 1] * k[1][0] + b[i][j] * k[1][1] + b[i][j + 1] * k[1][2] + b[i + 1][j - 1] * k[2][0] + b[i + 1][j] * k[2][1] + b[i + 1][j + 1] * k[2][2];
                if (red < 0)
                    red = 0;
                else if (red > 255)
                    red = 255;
                if (green < 0)
                    green = 0;
                else if (green > 255)
                    green = 255;
                if (blue < 0)
                    blue = 0;
                else if (blue > 255)
                    blue = 255;
                Color gray = new Color(red, green, blue);
                q.set(i, j, gray);
            }
        }
        return q;
    }
}
