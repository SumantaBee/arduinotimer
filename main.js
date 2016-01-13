var net = require('net');
var StringDecoder = require('string_decoder').StringDecoder;
var decoder = new StringDecoder('utf8');
var port = 3001;
net.createServer(function (socket) {
    console.log('Socket connected from: ' + socket.remoteAddress + ":" + socket.remotePort);
    socket.on('data', function (data) {
        var message = decoder.write(data);
        console.log('Client: ' + message);
        socket.write('OK');
    });
    socket.on('end', function () {
        console.log("Connection closed");
        console.log("----------------------------------------")
    });
}).listen(port);
