# include <iostream>
# include <vector>

int points = 0; // total points gained by the user

/// @brief This function allows for automated questioning process
/// @param question The question to be printed
/// @param options All the options for the question
/// @param answer The correct option for the question
void question(std::string question, std::vector<std::string> options, char answer){
    std::string input;
    static int total_questions = 1;
    char option = 'A', inp;
    answer = toupper(answer); // uppercasing the answer for safety

    // printing the question and the all of the options
    std::cout << total_questions << ". " << question << "\n\n";
    for(auto elem : options) std::cout << option++ << ". " << elem << '\n';
    std::cout << ">> ";
    
    // recieving input from user and making it uppercase
    std::cin >> input;
    inp = toupper(input[0]);

    // checking if the given input is equal to the answer
    if(inp == answer) std::cout << "Correct Answer!";
    else std::cout << "Wrong Answer! The correct answer is " << options[answer - 65];

    points += (inp == answer);

    // appending static variable
    total_questions++;
    std::cout << "\n\n";
}


int main(int argc, char** argv){
    std::cout << "Welcome to the Safe-o-checker!\nYou have to guess the safest option.\n\n";
    
    // asking user six questions about a would-you-rather prompt
    question(
        "Would you rather have....",
        {"A million dollars", "A million loyal followers"},
        'b'
    );

    question(
        "Would you rather get............",
        {"$2,000,000 right now", "A penny each day for 30 days with a Geometric Progression of 2"},
        'a'
    );

    question(
        "Would you rather lick the....",
        {"Floor", "Broom"},
        'a'
    );

    question(
        "Would you rather lose your sense of.....",
        {"Touch", "Smell"},
        'b'
    );

    question(
        "Would you rather end...",
        {"World Hunger", "Global Warming"},
        'b'
    );

    question(
        "Would you rather ban....",
        {"Video Games", "Social Media Platforms"},
        'a'
    );

    // if the points scored is greater than or equal to four
    if(points >= 4) std::cout << "Wow! You are quiet safe about your decisions";
    else std::cout << "Try again harder, make good choices. Breathe air and touch grass.";
    std::cout << std::endl;

    return 0;
}