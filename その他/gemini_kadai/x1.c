#include <math.h>
#include <stdio.h>

// 構造体の宣言
typedef struct location {
    double x, y;
} Point;

typedef struct cargo {
    char name[20];
    int weight;
} Cargo;

typedef struct fuel {
    double volume;
    double base_consumption;
} Fuels;

typedef struct ships {
    char name[20];
    Point location;
    Fuels fuel;
    Cargo cargo;
} Ships;

// 関数の宣言
double fuel_consumption(int cargo_weight, double distance, double base_consumption) {
    double result = distance * (base_consumption + (cargo_weight * (double) 0.005));
    return (result);
}

double distance_consumption(Point target, Point current) {
    double result = sqrt(pow(target.x - current.x, 2) + pow(target.y - current.y, 2));
    return (result);
}

int main(void) {
    Point target = {100.5, 300.2};

    Ships ship[3] = {
        {"Speedy",
           {0,0},
           {1000.0, 2.5},
           {"Docs", 10}
        },
        {"Heavy",
            {0,0},
            {8000.0, 15.0},
            {"Machinery", 500}
        },
        {"Fail",
            {0,0},
            {1500.0, 5.0},
            {"Gold", 1000}
        }
    };

    for (int i = 0; i < 3; i++) {
        double distance = distance_consumption(target, ship[i].location);
        double required_fuel = fuel_consumption(ship[i].cargo.weight, distance, ship[i].fuel.base_consumption);
        // printf("Ship: %s, Fuel: %3.2f, Distance Consumption: %f, Cargo: %d\n, Required Fuel: %f\n", ship[i].name, ship[i].fuel.volume, distance, ship[i].cargo.weight, required_fuel);
        if (required_fuel > ship[i].fuel.volume) {
            printf("Ship '%s', get lost in cosmos, because of lack of fuel.\n", ship[i].name);
        } else {
            printf("Ship '%s', arrival to target!\n", ship[i].name);
        }
    }

    return (0);
}
