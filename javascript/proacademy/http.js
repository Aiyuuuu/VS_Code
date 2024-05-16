let http= require('http')

const server = http.createServer((request, response)=>{
    response.end("hello from the server")
    console.log('new request recieved')
    // console.log(request)
})


server.listen(8000, `127.0.0.1`,()=>{
    console.log('Server has started')
})

