const http = require('http');

const server = http.createServer((req,res)=>{
    res.writeHead(200,{'Content-Type': 'text/html'});
    // res.setHeader("conten")
    res.end("this is a http server");
});

server.listen(3000 ,()=>{
    console.log("Server is running on http://localhost:3000");
});