#include<stdio.h>
#include<stdlib.h>

int main() {
    int subject, score = 0;
    char ans;
    int visited[6] = {0}; // 0 = not visited, 1 = visited

    while (1) {
        printf("\n=== Choose Your Subject ===\n");
        if(!visited[1]) printf("1. HTML\n");
        if(!visited[2]) printf("2. CSS\n");
        if(!visited[3]) printf("3. JavaScript\n");
        if(!visited[4]) printf("4. C Language\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &subject);

        if(subject == 5) {
            printf("Exiting...\n");
            break;
        }

        if(visited[subject]) {
            printf("You already attempted this subject!\n");
            continue; 
        }

        visited[subject] = 1; 
        score = 0;

    switch(subject) {
        case 1: 
					// HTML Quiz
            printf("\nHTML Quiz:\n");
            printf("\n---Quiz start---\n");


            printf("\nQ1. Which tag used for horizontal line?\n");
            printf("a.<br>\nb.<hr>\nc.<href>\nd.<b>\n");
            scanf(" %c",&ans);
            
            if(ans=='b')
			{ score++; printf("Correct!\n"); }
			 else printf("Wrong! Answer: <hr>\n");

            printf("\nQ2. Which tag inserts an image?\n");
            printf("a.<img>\nb.<src>\nc.<pic>\nd.<image>\n");
            scanf(" %c",&ans);
            
            if(ans=='a')
			{ score++; printf("Correct!\n"); }
			 else printf("Wrong! Answer: <img>\n");

            printf("\nQ3. Which tag is used for line break?\n");
            printf("a.<br>\nb.<lb>\nc.<break>\nd.<newline>\n");
            scanf(" %c",&ans);
            
            if(ans=='a')
			{ score++; printf("Correct!\n"); }
			 else printf("Wrong! Answer: <br>\n");

            printf("\nQ4. Largest heading tag?\n");
            printf("a.<h6>\nb.<h1>\nc.<head>\nd.<heading>\n");
            scanf(" %c",&ans);
            
            if(ans=='b')
			{ score++; printf("Correct!\n"); }
			 else printf("Wrong! Answer: <h1>\n");

            printf("\nQ5. Attribute for link destination?\n");
            printf("a.href\nb.src\nc.alt\nd.link\n");
            scanf(" %c",&ans);
            
            if(ans=='a')
			{ score++; printf("Correct!\n"); }
			 else printf("Wrong! Answer: href\n");
			 
			 printf("\n=== Quiz Finished ===\n");
    		 printf("Your Score: %d / 5\n", score);
    		  if(score == 5) printf("Excellent! Perfect score!\n");
    			else if(score >= 3) printf("Good job! Keep practicing.\n");
   				 else printf("Needs improvement. Study more!\n");
            break;
            
            

        case 2: 
						// CSS Quiz
            printf("\nCSS Quiz:\n");
             printf("\n---Quiz start---\n");

            printf("\nQ1. Property for text color?\n");
            printf("a.font-color\nb.color\nc.text-color\nd.bgcolor\n");
            scanf(" %c",&ans);
            
            if(ans=='b')
			{ score++; printf("Correct!\n"); }
			 else printf("Wrong! Answer: color\n");

            printf("\nQ2. Property for text size?\n");
            printf("a.font-size\nb.text-style\nc.size\nd.font-weight\n");
            scanf(" %c",&ans);
            
            if(ans=='a')
			{ score++; printf("Correct!\n"); }
			 else printf("Wrong! Answer: font-size\n");

            printf("\nQ3. Property for background color?\n");
            printf("a.bgcolor\nb.background-color\nc.color\nd.back-color\n");
            scanf(" %c",&ans);
            
            if(ans=='b')
			{ score++; printf("Correct!\n"); }
			 else printf("Wrong! Answer: background-color\n");

            printf("\nQ4. Property for bold text?\n");
            printf("a.font-style\nb.font-weight\nc.bold\nd.strong\n");
            scanf(" %c",&ans);
            
            if(ans=='b')
			{ score++; printf("Correct!\n"); } 
			 else printf("Wrong! Answer: font-weight\n");

            printf("\nQ5. Property for spacing inside element?\n");
            printf("a.margin\nb.padding\nc.border\nd.space\n");
            scanf(" %c",&ans);
            
            if(ans=='b')
			{ score++; printf("Correct!\n"); } 
			 else printf("Wrong! Answer: padding\n");
			 
			  printf("\n=== Quiz Finished ===\n");
    		 printf("Your Score: %d / 5\n", score);
    		  if(score == 5) printf("Excellent! Perfect score!\n");
    			else if(score >= 3) printf("Good job! Keep practicing.\n");
   				 else printf("Needs improvement. Study more!\n");
            break;

        case 3: 
							// JavaScript Quiz
							
            printf("\nJavaScript Quiz:\n");
             printf("\n---Quiz start---\n");

            printf("\nQ1. Symbol for single-line comments?\n");
            printf("a.<!-- -->\nb.//\nc./* */\nd.#\n");
            scanf(" %c",&ans);
            
            if(ans=='b')
			{ score++; printf("Correct!\n"); }
			 else printf("Wrong! Answer: //\n");

            printf("\nQ2. Function to print output to console?\n");
            printf("a.print()\nb.log()\nc.console.log()\nd.echo()\n");
            scanf(" %c",&ans);
            
            if(ans=='c')
			{ score++; printf("Correct!\n"); }
			 else printf("Wrong! Answer: console.log()\n");

            printf("\nQ3. Keyword to declare variable?\n");
            printf("a.var\nb.int\nc.let\nd.both a and c\n");
            scanf(" %c",&ans);
            
            if(ans=='d')
			{ score++; printf("Correct!\n"); }
			 else printf("Wrong! Answer: var and let\n");

            printf("\nQ4. Which data type is NOT in JS?\n");
            printf("a.string\nb.number\nc.boolean\nd.char\n");
            scanf(" %c",&ans);
            
            if(ans=='d')
			{ score++; printf("Correct!\n"); }
			 else printf("Wrong! Answer: char\n");

            printf("\nQ5. Operator for strict equality?\n");
            printf("a.==\nb.===\nc.=\nd.=>\n");
            scanf(" %c",&ans);
            
            if(ans=='b')
			{ score++; printf("Correct!\n"); }
			 else printf("Wrong! Answer: ===\n");
			 
			  printf("\n=== Quiz Finished ===\n");
    		 printf("Your Score: %d / 5\n", score);
    		  if(score == 5) printf("Excellent! Perfect score!\n");
    			else if(score >= 3) printf("Good job! Keep practicing.\n");
   				 else printf("Needs improvement. Study more!\n");
            break;

        case 4: 
							// C Language Quiz
            printf("\nC Language Quiz:\n");
             printf("\n---Quiz start---\n");

            printf("\nQ1. Father of C Language?\n");
            printf("a.Bjarne Stroustrup\nb.James Gosling\nc.Dennis Ritchie\nd.Ken Thompson\n");
            scanf(" %c",&ans);
            
            if(ans=='c')
			{ score++; printf("Correct!\n"); }
			 else printf("Wrong! Answer: Dennis Ritchie\n");

            printf("\nQ2. When was C developed?\n");
            printf("a.1974\nb.1971\nc.1972\nd.1992\n");
            scanf(" %c",&ans);
            
            if(ans=='c')
			{ score++; printf("Correct!\n"); }
			 else printf("Wrong! Answer: 1972\n");

            printf("\nQ3. Header file for printf()?\n");
            printf("a.conio.h\nb.stdio.h\nc.iostream\nd.string.h\n");
            scanf(" %c",&ans);
            
            if(ans=='b')
			{ score++; printf("Correct!\n"); }
			 else printf("Wrong! Answer: stdio.h\n");

            printf("\nQ4. Loop that executes at least once?\n");
            printf("a.for\nb.while\nc.do-while\nd.none\n");
            scanf(" %c",&ans);
            
            if(ans=='c')
			{ score++; printf("Correct!\n"); }
			 else printf("Wrong! Answer: do-while\n");

            printf("\nQ5. Symbol to end statement?\n");
            printf("a.,\nb.;\nc.\nd.:\n");
            scanf(" %c",&ans);
            
            if(ans=='b')
			{ score++; printf("Correct!\n"); }
			 else printf("Wrong! Answer: ;\n");
			 
			  printf("\n=== Quiz Finished ===\n");
    		 printf("Your Score: %d / 5\n", score);
    		  if(score == 5) printf("Excellent! Perfect score!\n");
    			else if(score >= 3) printf("Good job! Keep practicing.\n");
   				 else printf("Needs improvement. Study more!\n");
            break;
            
        case 5 :
        	printf("press any key for exit \n");
        	exit(1);
        	break;

        default:
            printf("Invalid choice!\n");
            return 0;
    }
}

    return 0;

}

