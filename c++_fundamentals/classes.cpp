#include <iostream>

// class Player
// {
//     public:
//         int x, y;
//         int speed;

//         void MovePlayer( int xa, int ya) {
//             x += xa * speed;
//             y += ya * speed;
// };
// };

class Log {
    public:
        enum Level {
            error = 0, warning, info
        };
        
    private:
        Level m_LogLevel = info;
    public:
    void setLevel(Level level) {
        m_LogLevel = level;
        
    };

    void Warn(const char* message)
    {
        
        if (m_LogLevel >= warning) {
            std::cout << "[WARNING]: " << message << std::endl;
        }
        else if (m_LogLevel >= info) {
            std::cout << "[INFO]: " << message << std::endl;
        }
        else {
            std::cout << "[ERROR]: " << message << std::endl;
        }
    }


};

void classes() {
    // Player player;
    // player.x = 10;
    // player.y = 20;
    // player.speed = 5;

    // std::cout << "Player position: (" << player.x << ", " << player.y << ")" << std::endl;
    Log log;
    log.setLevel(log.warning);
    log.Warn("This is a warning message.");

    std::cin.get();



}