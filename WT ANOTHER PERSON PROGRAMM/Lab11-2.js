const express = require("express");

const app = express();


app.get('/', (req, res) => {
    res.send("<a href='/about'>about</a>");
});

app.get('/about', (req, res) => {
    res.send("<a href='/contact'>contact</a>");
});

app.get('/contact', (req, res) => {
    res.send("<a href='/services'>services</a>");
});


app.get('/services', (req, res) => {
    res.send("<a href='/product'>product</a>");
});


app.get('/product', (req, res) => {
    res.send("Program over");
});


const PORT = 3002;
app.listen(PORT, () => {
    console.log(`Server is running on http://localhost:${PORT}`);
});
