const express = require("express");

const app = express();

app.get('/' , (req,res)=>{
    res.send("Hello world")
});

app.get('/about' , (req,res)=>{
    res.send("This is a about page")
})
const PORT = 3002;
app.listen(PORT , ()=>{
    console.log(`Server is running on http://localhost:${PORT}`);
})