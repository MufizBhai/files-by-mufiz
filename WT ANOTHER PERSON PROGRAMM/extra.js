const fs = require('fs');
const http= require('http');
const url = require('url');

const server = http.createServer((req,res)=>{
     res.writeHead(200,{'Content-Type': 'text/html'});
    
    if(req.url ===  '/')
    {
        res.end("<button>Download home file</button>");
        fs.writeFile("home2.txt","this is a home",(err)=>{
            res.end("Success");
        })
    }
    else if(req.url === '/about'){
        res.end("<a href='/contact'>contact</a>");
    }
    else if(req.url === '/contact'){
        res.end("<a href='/services'>services</a>");
    }
    else if(req.url === '/services'){
        res.end("<a href='/product'>product</a>");
    }
    else if(req.url === '/product'){
        res.end("Program over ");
    }
    else{
        res.end("Invalid");
    }

})

server.listen(3000, ()=>{
    console.log("Server is running on http://localhost:3000");
});