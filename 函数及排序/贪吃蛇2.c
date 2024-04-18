#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

#define WIDTH 20
#define HEIGHT 10

enum Direction {
    UP,
    DOWN,
    LEFT,
    RIGHT
};

struct Point {
    int x, y;
};

struct Snake {
    struct Point head;
    struct Point body[100];  // 蛇身最大长度
    int length;
    enum Direction direction;
};

struct Food {
    struct Point position;
};

int gameOver = 0;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void drawBoard() 
{
    system("cls");
    for (int i = 0; i < WIDTH + 2; i++) 
	{
        printf("#");
    }
    printf("\n");

    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (j == 0) {
                printf("#");
            }

            printf(" ");

            if (j == WIDTH - 1) {
                printf("#");
            }
        }
        printf("\n");
    }

    for (int i = 0; i < WIDTH + 2; i++) {
        printf("#");
    }
    printf("\n");
}

void initializeGame(struct Snake *snake, struct Food *food) {
    snake->head.x = WIDTH / 2;
    snake->head.y = HEIGHT / 2;
    snake->length = 1;
    snake->direction = RIGHT;

    food->position.x = rand() % WIDTH;
    food->position.y = rand() % HEIGHT;
}

void drawSnake(struct Snake *snake) {
    gotoxy(snake->head.x, snake->head.y);
    printf("O");

    for (int i = 0; i < snake->length - 1; i++) {
        gotoxy(snake->body[i].x, snake->body[i].y);
        printf("o");
    }
}

void drawFood(struct Food *food) {
    gotoxy(food->position.x, food->position.y);
    printf("*");
}

void moveSnake(struct Snake *snake) {
    for (int i = snake->length - 1; i > 0; i--) {
        snake->body[i] = snake->body[i - 1];
    }

    snake->body[0] = snake->head;

    switch (snake->direction) {
        case UP:
            snake->head.y--;
            break;
        case DOWN:
            snake->head.y++;
            break;
        case LEFT:
            snake->head.x--;
            break;
        case RIGHT:
            snake->head.x++;
            break;
    }
}

int checkCollision(struct Snake *snake, struct Food *food) {
    if (snake->head.x < 0 || snake->head.x >= WIDTH || snake->head.y < 0 || snake->head.y >= HEIGHT) {
        return 1;  // 碰到边界
    }

    for (int i = 0; i < snake->length; i++) {
        if (snake->head.x == snake->body[i].x && snake->head.y == snake->body[i].y) {
            return 1;  // 碰到自身
        }
    }

    if (snake->head.x == food->position.x && snake->head.y == food->position.y) {
        // 吃到食物，增加蛇的长度
        snake->length++;
        food->position.x = rand() % WIDTH;
        food->position.y = rand() % HEIGHT;
    }

    return 0;
}

int main() {
    struct Snake snake;
    struct Food food;

    initializeGame(&snake, &food);

    while (!gameOver) {
        drawBoard();
        drawSnake(&snake);
        drawFood(&food);
        moveSnake(&snake);

        if (checkCollision(&snake, &food)) {
            gameOver = 1;
            break;
        }

        Sleep(100);  // 控制游戏速度，Sleep函数的参数单位是毫秒
    }

    printf("Game Over!\n");

    return 0;
}

