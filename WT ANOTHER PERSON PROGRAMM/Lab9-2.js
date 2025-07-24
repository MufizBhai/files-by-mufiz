const url = require('url');

const myurl = "https://www.youtube.com";

let q = url.parse(myurl, true);

console.log(q.host);
console.log(q.pathname);
console.log(q.search);