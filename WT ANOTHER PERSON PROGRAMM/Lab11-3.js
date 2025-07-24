const express = require("express");

const app = express();


app.get('/', (req, res, next) => {
    // res.end("Middleware 1");
    console.log("Middleware 1");
    res.send("<a href='/about'>about</a>");
    next()
});

app.get('/about' ,(req,res,next)=>{
    res.end("Middleware 2");
});

const PORT = 3002;
app.listen(PORT, () => {
    console.log(`Server is running on http://localhost:${PORT}`);
});
