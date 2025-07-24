const fs = require('fs');

const a = fs.readFileSync('myfile.txt',"utf8");

console.log(a);