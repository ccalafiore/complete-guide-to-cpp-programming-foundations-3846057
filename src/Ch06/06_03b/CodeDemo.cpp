// Complete Guide to C++ Programming Foundations
// Exercise 06_02
// Passing Values to a Function, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <vector>

struct Player
{
    std::string name;
    int score = 0;
};

Player& findTopScorer(std::vector<Player>& players) {

    auto topScorer = &players[0];

    for (auto& player : players) {
        if (player.score > topScorer->score)
            topScorer = &player;
    }
    return *topScorer;
}

int main(){
    Player a, b;
    // Player team1TopPlayer;

    a.name = "Carmelo";
    a.score = 100;

    b.name = "Xiangshu";
    b.score = 110;

    std::cout << "a.name = " << a.name << ", a.score = " << a.score << std::endl;

    std::cout << "b.name = " << b.name << ", b.score = " << b.score << std::endl;

    std::vector<Player> team1 = {a, b};

    std::cout << "team1[0].name = " << team1[0].name << ", team1[0].score = " << team1[0].score << std::endl;
    std::cout << "team1[1].name = " << team1[1].name << ", team1[1].score = " << team1[1].score << std::endl;

    Player& team1TopPlayer = findTopScorer(team1);

    team1TopPlayer.name = "Winner";
    team1TopPlayer.score += 50;
    std::cout << "team1TopPlayer.name = " << team1TopPlayer.name << ", team1TopPlayer.score = " << team1TopPlayer.score << std::endl;

    std::cout << "a.name = " << a.name << ", a.score = " << a.score << std::endl;
    std::cout << "b.name = " << b.name << ", b.score = " << b.score << std::endl;
    std::cout << "team1[0].name = " << team1[0].name << ", team1[0].score = " << team1[0].score << std::endl;
    std::cout << "team1[1].name = " << team1[1].name << ", team1[1].score = " << team1[1].score << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
