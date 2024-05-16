const readline=require("readline")
const fs=require('fs')
// const rl=readline.createInterface({
//     input: process.stdin,
//     output: process.stdout
// });

// rl.question("enter your name", (name)=>{
//     console.log(`hello ${name}`);
//     rl.close()

// })

// rl.on('close', ()=>{
//     console.log("interface closed")
//     process.exit(0);
// })







// const textIn = fs.readFileSync('./javascript/proacademy/files/input.txt', 'utf-8');
// console.log(textIn)
// let content = `data read from input.txt = ${textIn} \nDate Created ${new Date()}`

// fs.writeFileSync(`./javascript/proacademy/files/output.txt`, content)


// fs.readFile('./javascript/proacademy/files/input.txt', 'utf-8',(err,data)=>{
//     console.log(data)
// });
// console.log('reading file...')




fs.readFile('./javascript/proacademy/files/start.txt', 'utf-8',(error1,data1)=>{
    console.log(data1)
    fs.readFile(`./javascript/proacademy/files/${data1}.txt`, 'utf-8', (error2, data2)=>{
        console.log(data2)
        fs.readFile(`./javascript/proacademy/files/append.txt`,'utf-8', (error3, data3)=>{
            console.log(data3)
            fs.writeFile('./javascript/proacademy/files/output.txt', `${data2}\n\n${data3}\n\nDate Created ${new Date()}`, ()=>{
                console.log("file written successfully")
            })
        })
    })
});


console.log('reading file....')










