#include <fstream>
#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int totalUserScore = 0;
int questionNumber = 1;
int questionsUserAnsweredCorrectly;
int questionsUserAnsweredIncorrectly;
int questionsSkipped;
int gradePercentage;
class Question{
    public:
        string questionDescription;
        string options[4];
        string correctOption;
        
        void setQuestionDescription(string qD){
            questionDescription = qD;
        }
        void setQuestionOptions(string option1, string option2, string option3, string option4){
            options[0] = option1;
            options[1] = option2;
            options[2] = option3;
            options[3] = option4;
        }
        void setCorrectOption(int cO){
            try{
                correctOption = options[cO - 1];
            }
            catch(string cO){
                cout << "Argument is less than 1 or greater than 4. Argument is " << cO << "\n";
                throw (cO);
            }
        }
        string getQuestion(){
            return questionDescription;
        }
        string getQuestionOption(int i){
            return options[i];
        }
        int getAmountOfOptionsFromQuestion(){
            return sizeof(options)/sizeof(string);
        }
        string getUserOption(){
            string optionSelectedByUser;
            cout << "You Have Selected: ";
            getline(cin,optionSelectedByUser);
            return optionSelectedByUser;
        }
        string getCorrectOption(){
            return correctOption;
        }
        string removeSpace(string s){
            for (int i = 0; i < s.length(); i++){
                if (s[i] == ' '){
                    s.erase(s.begin() + i);
                    i--;
                }
            }
            return s;
        }
        string removePunctuation(string s){
            string result = "";
            for (int i = 0; i < s.length(); i++){
                if(!ispunct(s[i])){
                    result += s[i];
                }
            }
            s = result;
            return s;
        }
        bool checkAnswer(){
            string uO = getUserOption();
            string cO = getCorrectOption(); 
            
            transform(uO.begin(),uO.end(),uO.begin(), ::tolower);
            transform(cO.begin(),cO.end(),cO.begin(), ::tolower);
            uO = removeSpace(uO);
            uO = removePunctuation(uO);
            cO = removeSpace(cO);
            cO = removePunctuation(cO);
            
            if(uO == "skip"){
                questionsSkipped++;
                return false;
            }
            
            if(uO == cO){
                questionsUserAnsweredCorrectly++;
                totalUserScore++;
                cout << "Correct Option Was: " << getCorrectOption() << endl;
                return true;
            }
            questionsUserAnsweredIncorrectly++;
            cout << "Correct Option Was: " << getCorrectOption() << endl;
            cin.clear();
            return false;
        }
        
};
void incrementQuestionNumber(){
    if(questionNumber <= 0 || questionNumber > 10){
        questionNumber = 1;
    } else{
        questionNumber++;
    }
}

Question questionOne;
Question questionTwo;
Question questionThree;
Question questionFour;
Question questionFive;
Question questionSix;
Question questionSeven;
Question questionEight;
Question questionNine;
Question questionTen;

void questionOnePrompt(){
    questionOne.setQuestionDescription("How many oceans are on Planet Earth?");
    questionOne.setQuestionOptions("3","4","5","7");
    questionOne.setCorrectOption(4);
    
    cout << "Question Number: " << questionNumber << endl;
    cout << questionOne.getQuestion() << endl;
    for(int i = 0; i < questionOne.getAmountOfOptionsFromQuestion(); i++){
        cout << i+1 << ". " << questionOne.getQuestionOption(i) << endl;
    }
    
    questionOne.checkAnswer();
    incrementQuestionNumber();
}
void questionTwoPrompt(){
    questionTwo.setQuestionDescription("How many stars are on the American Flag?");
    questionTwo.setQuestionOptions("25","50","52","13");
    questionTwo.setCorrectOption(2);
    
    cout << "Question Number: " << questionNumber << endl;
    cout << questionTwo.getQuestion() << endl;
    for(int i = 0; i < questionTwo.getAmountOfOptionsFromQuestion(); i++){
        cout << i+1 << ". " << questionTwo.getQuestionOption(i) << endl;
    }
    
    questionTwo.checkAnswer();
    incrementQuestionNumber();
}
void questionThreePrompt(){
    questionThree.setQuestionDescription("How many stripes are on the American Flag?");
    questionThree.setQuestionOptions("13","14","16","15");
    questionThree.setCorrectOption(1);
    
    cout << "Question Number: " << questionNumber << endl;
    cout << questionThree.getQuestion() << endl;
    for(int i = 0; i < questionThree.getAmountOfOptionsFromQuestion(); i++){
        cout << i+1 << ". " << questionThree.getQuestionOption(i) << endl;
    }
    
    questionThree.checkAnswer();
    incrementQuestionNumber();
}
void questionFourPrompt(){
    questionFour.setQuestionDescription("How many continents are present on Planet Earth?");
    questionFour.setQuestionOptions("5","6","7","8");
    questionFour.setCorrectOption(3);
    
    cout << "Question Number: " << questionNumber << endl;
    cout << questionFour.getQuestion() << endl;
    for(int i = 0; i < questionFour.getAmountOfOptionsFromQuestion(); i++){
        cout << i+1 << ". " << questionFour.getQuestionOption(i) << endl;
    }
    
    questionFour.checkAnswer();
    incrementQuestionNumber();
}
void questionFivePrompt(){
    questionFive.setQuestionDescription("Which ocean is the most northern of the equator?");
    questionFive.setQuestionOptions("The Arctic Ocean","The Atlantic Ocean","The Pacific Ocean","The Indian Ocean");
    questionFive.setCorrectOption(1);
    
    cout << "Question Number: " << questionNumber << endl;
    cout << questionFive.getQuestion() << endl;
    for(int i = 0; i < questionFive.getAmountOfOptionsFromQuestion(); i++){
        cout << i+1 << ". " << questionFive.getQuestionOption(i) << endl;
    }
    
    questionFive.checkAnswer();
    incrementQuestionNumber();
}
void questionSixPrompt(){
    questionSix.setQuestionDescription("Which ocean is the most southern of the equator?");
    questionSix.setQuestionOptions("The Arctic Ocean","The Atlantic Ocean","The Antarctic Ocean","The Pacific Ocean");
    questionSix.setCorrectOption(3);
    
    cout << "Question Number: " << questionNumber << endl;
    cout << questionSix.getQuestion() << endl;
    for(int i = 0; i < questionSix.getAmountOfOptionsFromQuestion(); i++){
        cout << i+1 << ". " << questionSix.getQuestionOption(i) << endl;
    }
    
    questionSix.checkAnswer();
    incrementQuestionNumber();
}
void questionSevenPrompt(){
    questionSeven.setQuestionDescription("What two elements is the Earth's Core made out of?");
    questionSeven.setQuestionOptions("Granite and Iron","Granite and Nickel","Iron and Nickel","Nickel and Quartz");
    questionSeven.setCorrectOption(3);
    
    cout << "Question Number: " << questionNumber << endl;
    cout << questionSeven.getQuestion() << endl;
    for(int i = 0; i < questionSeven.getAmountOfOptionsFromQuestion(); i++){
        cout << i+1 << ". " << questionSeven.getQuestionOption(i) << endl;
    }
    
    questionSeven.checkAnswer();
    incrementQuestionNumber();
}
void questionEightPrompt(){
    questionEight.setQuestionDescription("Which element has the shortest half life?");
    questionEight.setQuestionOptions("Uranium","Oganesson","Osmium","Neptunium");
    questionEight.setCorrectOption(2);
    
    cout << "Question Number: " << questionNumber << endl;
    cout << questionEight.getQuestion() << endl;
    for(int i = 0; i < questionEight.getAmountOfOptionsFromQuestion(); i++){
        cout << i+1 << ". " << questionEight.getQuestionOption(i) << endl;
    }
    
    questionEight.checkAnswer();
    incrementQuestionNumber();
}
void questionNinePrompt(){
    questionNine.setQuestionDescription("How many bits are in a byte?");
    questionNine.setQuestionOptions("2","16","4","8");
    questionNine.setCorrectOption(4);
    
    cout << "Question Number: " << questionNumber << endl;
    cout << questionNine.getQuestion() << endl;
    for(int i = 0; i < questionNine.getAmountOfOptionsFromQuestion(); i++){
        cout << i+1 << ". " << questionNine.getQuestionOption(i) << endl;
    }
    
    questionNine.checkAnswer();
    incrementQuestionNumber();
}
void questionTenPrompt(){
    questionTen.setQuestionDescription("What are the four basic operations a database hooked up to a backend perform?");
    questionTen.setQuestionOptions("Create, Read, Update, Delete","Create, Reuse, Update, Delete",
    "Create, Read, Union, Delete","Create, Read, Update, Destroy");
    questionTen.setCorrectOption(1);
    
    cout << "Question Number: " << questionNumber << endl;
    cout << questionTen.getQuestion() << endl;
    for(int i = 0; i < questionThree.getAmountOfOptionsFromQuestion(); i++){
        cout << i+1 << ". " << questionTen.getQuestionOption(i) << endl;
    }
    
    questionTen.checkAnswer();
}
string finalGradeCalculator(){
    int gradePercentage = ((double) (totalUserScore) / (double) (questionNumber)) * 100;
    switch(gradePercentage){
        case 100:
            return "A+";
        case 90:
            return "A-";
        case 80:
            return "B-";
        case 70:
            return "C-";
        case 60:
            return "D-";
        case 50:
            return "E";
        default:
            return "F";
    }
}
void endOfQuizMessage(){
    int gradePercentage = ((double) (totalUserScore) / (double) (questionNumber)) * 100;
    if(gradePercentage >= 90){
        cout << "You aced the quiz. Congratulations!";
    } else if(gradePercentage <= 80 && gradePercentage >= 70){
        cout << "You passed the quiz.";
    } else{
        cout << "You failed the quiz. Better luck next time.";
    }
}
void results(){
    int gradePercentage = ((double) (totalUserScore) / (double) (questionNumber)) * 100;
    ofstream outputFile("results.txt");
    outputFile << fixed << setprecision(2);
    outputFile << "Total number of questions: " << questionNumber << endl;
    outputFile << "Questions answered correctly: " << questionsUserAnsweredCorrectly << endl;
    outputFile << "Questions answered incorrectly: " << questionsUserAnsweredIncorrectly << endl;
    outputFile << "Questions skipped: " << questionsSkipped << endl;
    outputFile << "Your results were: " << to_string(totalUserScore) + '/' + to_string(questionNumber) << endl;
    outputFile << "Grade Percentage: " << gradePercentage << "% => " << finalGradeCalculator() << endl;
    
    ifstream inputFile("results.txt");
    string line;
    while(getline(inputFile,line)){
        cout << line << endl;
    }
    inputFile.close();
}
int main()
{
    questionOnePrompt();
    questionTwoPrompt();
    questionThreePrompt();
    questionFourPrompt();
    questionFivePrompt();
    questionSixPrompt();
    questionSevenPrompt();
    questionEightPrompt();
    questionNinePrompt();
    questionTenPrompt();
    results();
    return 0;
}