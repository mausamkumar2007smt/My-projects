const quiz = [
    {
        question: "1. What does HTML stand for?",
        options: ["Hyper Trainer Marking Language", "Hyper Text Markup Language", "Hyper Text Marketing Language", "Hyper Tool Markup Language"],
        answer: 1
    },
    {
        question: "2. Which language is used for styling web pages?",
        options: ["HTML", "JQuery", "CSS", "XML"],
        answer: 2
    },
    {
        question: "3. Which is not a JavaScript framework?",
        options: ["Python Script", "JQuery", "Django", "NodeJS"],
        answer: 2
    },
    {
        question: "4. Which is used for web development?",
        options: ["HTML", "CSS", "JavaScript", "All of the above"],
        answer: 3
    },
    {
        question: "5. Which HTML tag is used to define an internal style sheet?",
        options: ["<script>", "<style>", "<css>", "<link>"],
        answer: 1
    },
    {
        question: "6. Inside which HTML element do we put JavaScript?",
        options: ["<js>", "<javascript>", "<script>", "<code>"],
        answer: 2
    },
    {
        question: "7. Which property is used to change background color in CSS?",
        options: ["color", "bgcolor", "background-color", "background"],
        answer: 2
    },
    {
        question: "8. How do you write 'Hello World' in JavaScript?",
        options: ["print('Hello World')", "console.log('Hello World')", "echo('Hello World')", "printf('Hello World')"],
        answer: 1
    },
    {
        question: "9. Which symbol is used for comments in JavaScript?",
        options: ["//", "<!-- -->", "#", "**"],
        answer: 0
    },
    {
        question: "10. Which company developed JavaScript?",
        options: ["Microsoft", "Google", "Netscape", "IBM"],
        answer: 2
    }
];

let currentQuestion = 0;
let score = 0;

let startTime;
let endTime;

// Load Question
function loadQuestion() {
    // start timer at first question
    if (currentQuestion === 0) {
        startTime = new Date();
    }

    let q = quiz[currentQuestion];
    document.getElementById("question").innerText = q.question;

    q.options.forEach((opt, i) => {
        let btn = document.getElementById("opt" + i);
        btn.innerText = opt;
        btn.style.background = "#444";
        btn.disabled = false;
    });

    document.getElementById("nextBtn").style.display = "none";
}

// Check Answer
function checkAnswer(index) {
    let correct = quiz[currentQuestion].answer;

    // disable buttons
    for (let i = 0; i < 4; i++) {
        document.getElementById("opt" + i).disabled = true;
    }

    if (index === correct) {
        score++;
        document.getElementById("opt" + index).style.background = "green";
    } else {
        document.getElementById("opt" + index).style.background = "red";
        document.getElementById("opt" + correct).style.background = "green";

        alert("Wrong! Correct answer: " + quiz[currentQuestion].options[correct]);
    }

    document.getElementById("nextBtn").style.display = "block";
}

// Next Question
function nextQuestion() {
    currentQuestion++;

    if (currentQuestion < quiz.length) {
        loadQuestion();
    } else {
        endTime = new Date();

        let totalTime = Math.floor((endTime - startTime) / 1000);
        let minutes = Math.floor(totalTime / 60);
        let seconds = totalTime % 60;

        document.querySelector(".quiz-container").innerHTML =
            "<h2>Final Score: " + score + "/" + quiz.length + "</h2>" +
            "<h3>Total Time: " + minutes + "m " + seconds + "s</h3>";
    }
}

// Start Quiz
loadQuestion();