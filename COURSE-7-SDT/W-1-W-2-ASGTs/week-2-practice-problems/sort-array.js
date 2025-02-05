let n = parseInt(prompt("Enter the number of elements: "));
let ar = [];

console.log("Enter the elements:");
for (let i = 0; i < n; i++) {
    ar[i] = parseInt(prompt());
}

let mx = ar[0];

for (let i = 1; i < n; i++) {
    if (ar[i] >= mx) {
        mx = ar[i];
    }
}

console.log("Maximum value:", mx);
