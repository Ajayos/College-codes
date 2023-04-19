/**
 * Code by Ajay o s
 * https://github.com/Ajay-o-s
 * https://github.com/Ajay-o-s/Ajay-o-s
 * 
 */

// connect to local files

const fs = require('fs');
const colors = require('colors');
const path_o = require('path');
const _path = path_o.resolve(__dirname, '.');
const express = require('express');
const app = express();
const http = require('http');
const server = http.createServer(app);
const ip = require('ip');
require('dotenv').config();


/**
 * Connecting to socket io 
 */
const io = require('socket.io')(server,{ cors: { origin: 'https://ajay-o-s.onrender.com' }}); require('./Router/socket.io/index.js')(io);


app.use((req, res, next) => {
    req.io = io
    next()
})
app.use('/', require('./Router/Home/index'));
app.use('/chat', require('./Router/chat/index'));

server.listen(8080, console.log(`> Server started at:${process.env.PORT}`.green.bold + `\n> URL ${ip.address()} => 'http://ajay-o-s.onrender.com`.green.bold));
