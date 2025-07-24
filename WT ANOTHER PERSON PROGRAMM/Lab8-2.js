const fs = require('fs');

fs.writeFile('myfile.txt','Hello this is a demo file',(err)=>{
    if (err){
        console.log(err);
    }
    else{
        console.log("Success");
    }
});