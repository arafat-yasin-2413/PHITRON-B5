let arr = [1, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10];

let n = arr.length;
let maxNumber = -1;

for (let i = 0; i < n; i++) {
    if (arr[i] > maxNumber) {
        maxNumber = arr[i];
    }
}

console.log(maxNumber);