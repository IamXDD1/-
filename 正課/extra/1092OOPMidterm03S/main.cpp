#include <iostream>

using namespace std;

void DFS(int** grid, int& w, int& h, int x, int y, int& area);

int main(){
	int width, height;
	cin >> width >> height;
	int** arr = new int* [height];
	for (int i = 0; i < height; i++) {
		arr[i] = new int[width];
	}

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			int block;
			cin >> block;
			arr[i][j] = block;
		}
	}

	int posX, posY;
	cin >> posX >> posY;

	int area = 0;
	
	DFS(arr, width, height, posX, posY, area);
	
	cout << area;

	for (int i = 0; i < height; i++) {
		delete[] arr[i];
	}
	delete[] arr;
	return 0;
}

void DFS(int** grid, int& w, int& h, int x, int y, int& area) {
	if (x >= w || y >= h || x < 0 || y < 0 || grid[y][x] != 0) {
		return;
	}

	if (grid[y][x] == 0) {
		area++;
		grid[y][x] = -1;
	}

	DFS(grid, w, h, x + 1, y, area);
	DFS(grid, w, h, x, y + 1, area);
	DFS(grid, w, h, x - 1, y, area);
	DFS(grid, w, h, x, y - 1, area);
	
	return;
}