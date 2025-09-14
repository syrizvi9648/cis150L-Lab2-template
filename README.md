CIS 150 - Lab 2: Grade Calculator

🎯 Objectives
•	Construct a for loop from scratch to perform a countdown.
•	Understand and use a while loop to repeat a block of code.
•	Understand and use if-else if-else statements (branches) to make decisions.
•	Learn the basics of a Git branching workflow (create branch, commit, push).

⭐ Overview
In this lab, you will complete a C++ program that acts as a simple grade calculator. The program will first run a countdown timer that you create, then continuously prompt the user to enter a numerical score. It will use conditional logic (branches) to determine the corresponding letter grade and print it to the terminal. The program will only stop when the user enters -1.
You will complete the missing code, test it, and submit your work by pushing your code to GitHub and submitting screenshots on Canvas.

📝 Step-by-Step Instructions
Follow these steps carefully to complete and submit your lab.

Step 1: Accept the Assignment and Clone the Repository
1.	Click the assignment link on Canvas to create your personal repository for Lab 2 on GitHub.
2.	After your repository is created, a URL will be provided. Copy this URL.
3.	Open Visual Studio Code.
4.	Open the Command Palette (Shift + Command + P on Mac, Ctrl + Shift + P on Windows).
5.	Type Git: Clone and press Enter.
6.	Paste the repository URL you copied and press Enter.
7.	Choose a location on your computer to save the project (e.g., your Documents or a dedicated schoolwork folder).
8.	Once cloned, VS Code will ask if you want to open the repository. Click "Open".
   
Step 2: Create a develop Branch
Working on a separate branch is a safe way to make changes without affecting the main codebase.
1.	Click on the branch name in the bottom-left corner of VS Code. It will likely say main.
2.	A menu will appear at the top. Click on + Create new branch....
3.	Type the name develop for your new branch and press Enter. You are now working on the develop branch.

Step 3: Complete the C++ Code
1.	In the VS Code Explorer on the left, open the main.cpp file.
2.	Read through the code and the comments. You will find three sections marked ---==[ TODO ]==---. This is where you need to write your code.
  
4.
   o	TODO 1: Countdown Loop: Before the main grade calculator starts, you must write a for loop that counts down from 5 to 1. After the loop finishes, it should print "Go!". This task will test your ability to construct a loop from scratch.
   
   o	TODO 2: Check for Exit Condition: Inside the while loop, you need to write an if statement that checks if the user's input (score) is equal to -1. If it is, use the break; command to exit the loop.

   o	TODO 3: Grade Calculation Logic: Write a series of if, else if, and else statements to print the correct letter grade based on the score variable. Make sure to handle all cases described in the code comments, including invalid scores.

Step 4: Compile and Test Your Code
It's crucial to test your code to make sure it works as expected.
1.	Open the integrated terminal in VS Code (View -> Terminal or Control + `).
2.	Compile your program using the g++ compiler:
3.	g++ -o main main.cpp

4.	Run the compiled program:
5.	./main

6.	First, check that your countdown 5...4...3...2...1...Go! appears correctly. Then, test all grade cases!
o	Enter 95 (should be 'A')
o	Enter 85 (should be 'B')
o	Enter 75 (should be 'C')
o	Enter 65 (should be 'D')
o	Enter 55 (should be 'F')
o	Enter 110 (should be an invalid score message)
o	Enter -10 (should be an invalid score message)
o	Finally, enter -1 to make sure the program exits gracefully.

Step 5: Commit and Push Your Changes
Once you are confident your code works, you need to save your work to GitHub as a backup and so your instructor can see your code.
1.	Go to the Source Control view in VS Code (the icon with three connected dots on the left).
2.	In the "Message" box, type a meaningful commit message. For example: feat: Complete countdown and grade logic.
3.	Click the "Commit" button.
4.	Next, click the "Publish Branch" button (or "Sync Changes") to upload your develop branch and your commit to GitHub.

Step 6: Submit Screenshots on Canvas

The final step is to prove that your program works correctly by submitting screenshots on Canvas.

1.	Run your program one last time in the VS Code terminal (./main).
2.	Capture one or more screenshots that clearly show a complete run of your program, including:
   
   o	 The initial countdown.
   
   o	One test for each letter grade including A, B, C, D, and F grade.
   
   o	At least two tests for invalid scores (e.g., 110 and -10).
   
   o	The program exiting gracefully when you enter -1.
   
4.	Log in to Canvas, navigate to the Lab 2 assignment, and upload your screenshot(s).
   
Congratulations! You have completed Lab 2. I will be able to see your code on GitHub and review your output on Canvas.

