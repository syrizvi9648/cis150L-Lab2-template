CIS 150 - Lab 2: Grade Calculator

🎯 Objectives

    Understand and use a while loop to repeat a block of code.

    Understand and use if-else if-else statements (branches) to make decisions.

    Learn the basics of a Git branching workflow (create branch, commit, push, pull request).

⭐ Overview

In this lab, you will complete a C++ program that acts as a simple grade calculator. The program will continuously prompt the user to enter a numerical score. It will then use conditional logic (branches) to determine the corresponding letter grade and print it to the terminal. The program will only stop when the user enters -1.

You will complete the missing code, test it, and submit your work by creating a Pull Request on GitHub.

📝 Step-by-Step Instructions

Follow these steps carefully to complete and submit your lab.

Step 1: Accept the Assignment and Clone the Repository

    Click the assignment link on Canvas to create your personal repository for Lab 2 on GitHub.

    After your repository is created, a URL will be provided. Copy this URL.

    Open Visual Studio Code.

    Open the Command Palette (Shift + Command + P on Mac, Ctrl + Shift + P on Windows).

    Type Git: Clone and press Enter.

    Paste the repository URL you copied and press Enter.

    Choose a location on your computer to save the project (e.g., your Documents or a dedicated schoolwork folder).

    Once cloned, VS Code will ask if you want to open the repository. Click "Open".

Step 2: Create a develop Branch

Working on a separate branch is a safe way to make changes without affecting the main codebase.

    Click on the branch name in the bottom-left corner of VS Code. It will likely say main.

    A menu will appear at the top. Click on + Create new branch....

    Type the name develop for your new branch and press Enter. You are now working on the develop branch.

Step 3: Complete the C++ Code

    In the VS Code Explorer on the left, open the main.cpp file.

    Read through the code and the comments. You will find two sections marked ---==[ TODO ]==---. This is where you need to write your code.

        TODO 1: Check for Exit Condition: Inside the while loop, you need to write an if statement that checks if the user's input (score) is equal to -1. If it is, use the break; command to exit the loop.

        TODO 2: Grade Calculation Logic: Write a series of if, else if, and else statements to print the correct letter grade based on the score variable. Make sure to handle all cases described in the code comments, including invalid scores.

Step 4: Compile and Test Your Code

It's crucial to test your code to make sure it works as expected.

    Open the integrated terminal in VS Code (View -> Terminal or Control +  `).

    Compile your program using the g++ compiler:

    g++ -std=c++17 -o main main.cpp

    Run the compiled program:

    ./main

    Test all cases!

        Enter 95 (should be 'A')

        Enter 85 (should be 'B')

        Enter 75 (should be 'C')

        Enter 65 (should be 'D')

        Enter 55 (should be 'F')

        Enter 110 (should be an invalid score message)

        Enter -10 (should be an invalid score message)

        Finally, enter -1 to make sure the program exits gracefully.

Step 5: Commit and Push Your Changes

Once you are confident your code works, you need to save your work to GitHub.

    Go to the Source Control view in VS Code (the icon with three connected dots on the left).

    In the "Message" box, type a meaningful commit message. For example: feat: Complete grade calculation logic.

    Click the "Commit" button.

    Next, click the "Publish Branch" button (or "Sync Changes") to upload your develop branch and your commit to GitHub.

Step 6: Create a Pull Request

The final step is to create a "Pull Request" (PR), which is how you formally submit your work for review.

    Open your repository on the GitHub website.

    GitHub should show a yellow notification saying you recently pushed the develop branch. Click the "Compare & pull request" button.

    You will be taken to a new page. The title should be your commit message.

    Ensure the base repository is set to main and the head repository is set to develop.

    Click the green "Create pull request" button.

Congratulations! You have completed Lab 2. I will be able to see your code, review your changes, and provide feedback directly on your Pull Request.
