
var WebSocket = require('ws');
var wss = new WebSocket.Server({ port: 8080 });
wss.on('connection', function(ws) {
    ws.send('Hello!');
});
