let n = parseInt(prompt("Enter a number: "));

if (n === 0) {
    console.log("Zero (not odd, not even)");
} else if (n % 2 === 0) {
    console.log("Even");
} else {
    console.log("Odd");
}