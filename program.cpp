# include <iostream>
# include <vector>

int points = 0;

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
    std::cout << total_questions << ". " << question << '\n';
    for(auto elem : options) std::cout << option++ << ". " << elem << '\n';
    
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

// program execution starts from here
int main(int argc, char** argv){
    std::cout << "WELCOME TO EXCELLENCE-O-METER\nCHOOSE THE CORRECT OPTION TO SEE HOW EXCELLENT YOU ARE.\n\n";

    // asking the user five questions with the above question() method
    question(
        "Who is the current president of Ohio?",
        {"The Cameraman", "Rocks D. Dwane", "Made in Ohio", "Dio"},
        'c'
    );

    question(
        "Are you gay?",
        {"Yes", "No"},
        'b'
    );

    question(
        "What is the last name of Obama?",
        {"Barrack", "Abdullah", " ", "Bin Laden"},
        'c'
    );

    question(
        "What is the best song to ever exist?",
        {"Nokia Ringtone (Regular/Arabic)", "Giorno\'s Theme", "Im feeling lonely", "Amogus Theme"},
        'b'
    );

    question(
        "Would you rather have....",
        {"Three Successful Fiverr Accounts", "10mil subs youtube account", "Biggest Manga Collection", "En Passant"},
        'd'
    );

    // printing the user's points
    std::cout << "You got " << points << " answers correct.\n\n";
    // if the total points is 4 or more
    if(points >= 4) std::cout << "YOU ARE AN EXCELLENT MAN. CONGRATS!";
    else std::cout << "FAILURE!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
    return 0;
}