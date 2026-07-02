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
        const int LogLevelError = 0;
        const int LogLevelWarning = 1;
        const int LogLevelInfo = 2;
        
    private:
        int m_LogLevel = LogLevelInfo;
    public:
    void setLevel(int level) {
        m_LogLevel = level;
        
    };

    void Warn(const char* message)
    {
        
        if (m_LogLevel >= LogLevelWarning) {
            std::cout << "[WARNING]: " << message << std::endl;
        }
        else if (m_LogLevel >= LogLevelInfo) {
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
    log.setLevel(log.LogLevelWarning);
    log.Warn("This is a warning message.");
    
    std::cin.get();



}