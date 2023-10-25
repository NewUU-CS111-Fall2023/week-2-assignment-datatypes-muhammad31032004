#include <iostream>
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
struct Coordinate{
    int x;
    int y;
};

class EnemySpawner {
public:
    EnemySpawner(Coordinate coordinate) : coordinate_(coordinate) {}

    void SpawnEnemies(std::vector<Coordinate>& enemyCoordinates) {
        int randomNumber = rand() % 101;

        if (randomNumber < 1000) {
            Coordinate enemyCoordinate;
            enemyCoordinate.x = coordinate_.x - rand() % 101;
            enemyCoordinate.y = coordinate_.y - rand() % 101;

            enemyCoordinates.push_back(enemyCoordinate);
        }
    }

private:
    Coordinate coordinate_;
};

class Character {
public:
    Character(Coordinate coordinate) : coordinate_(coordinate) {}

    bool IsDead(Coordinate coordinate, std::vector<Coordinate>& enemyCoordinates) {
        for (Coordinate enemyCoordinate : enemyCoordinates) {
            if (abs(coordinate.x - enemyCoordinate.x) <= 3 || abs(coordinate.y - enemyCoordinate.y) <= 4) {
                return true;
            }
        }
        return false;
    }

private:
    Coordinate coordinate_;
};

int main() {

    int N;
    cout << "Enter the number of coordinates you want to enter: ";
    cin >> N;

    std::vector<Coordinate> coordinates;
    for (int i = 0; i < N; i++) {
        Coordinate coordinate;
        cout << "Enter coordinate " << i + 1 << ": ";
        cin >> coordinate.x >> coordinate.y;
        coordinates.push_back(coordinate);
    }

    Character character(coordinates[0]);
    std::vector<Coordinate> enemyCoordinates;
    int live=1;

    for (Coordinate coordinate : coordinates) {



        bool isDead = character.IsDead(coordinate, enemyCoordinates);
        if (isDead) {
            cout << "The character is died" << endl;
            live--;
            break;

        }
        EnemySpawner enemySpawner(coordinate);
        enemySpawner.SpawnEnemies(enemyCoordinates);
    }

    if (live!=0) {
        cout << "The character survived!" << endl;
    }

    return 0;
}
