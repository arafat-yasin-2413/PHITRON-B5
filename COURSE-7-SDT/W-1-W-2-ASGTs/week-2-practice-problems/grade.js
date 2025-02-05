let n = parseInt(prompt("Enter a number (between 0 and 100): "));

if (n < 33) 
{
    console.log("You Are Failed.");
} 

else if (n >= 33 && n <= 39) 
{
    console.log("D Grade");
}
else if (n >= 40 && n <= 49) 
{
    console.log("C Grade");  
} 

else if (n >= 50 && n <= 59) 
{
    console.log("B Grade");
} 
else if (n >= 60 && n <= 69) 
{
    console.log("A- Grade");
}

else if (n >= 70 && n <= 79) 
{
    console.log("A Grade");
} 
else if (n >= 80 && n <= 100) 
{
    console.log("A+ Grade");
} 

else 
{
    console.log("Invalid Number");
}
