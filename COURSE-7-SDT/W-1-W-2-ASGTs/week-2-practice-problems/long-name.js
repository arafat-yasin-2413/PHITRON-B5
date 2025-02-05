const friends = ["rahim", "karim", "abdul", "sadsd", "heroAlom"];


let maxLength = -1;
let maxName = "";

for (let fd of friends)
{
    let len = fd.length;
    if (len > maxLength)
    {
        maxLength = len;
        maxName = fd;
    }
}

console.log(maxName);