const year = parseInt(prompt("Enter a year: "), 10);

if (year % 4 === 0 && year % 100 !== 0) 
{
	console.log(year + " is a Leap Year.");
} 
else if (year % 400 === 0) 
    {
        console.log(year + " is a Leap Year.");
    }
else 
    {
	    console.log(year + " is not a Leap Year.");
    }
