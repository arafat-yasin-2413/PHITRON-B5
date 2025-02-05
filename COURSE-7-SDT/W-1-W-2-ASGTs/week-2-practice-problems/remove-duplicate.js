let arr = [1, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10];

let n = arr.length;
let newArr = new Array(n);
newArr[0] = arr[0];

let j = 0;
for (let i = 1; i < n; i++) {
    if (arr[i] !== newArr[j]) {
        newArr[j + 1] = arr[i];
        j++;
    }
}

// console.log(j);

console.log(newArr.slice(0, j + 1).join(" "));