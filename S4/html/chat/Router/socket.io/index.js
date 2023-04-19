module.exports = data = async function(io) {
    const users = {}; 
    io.on('connection', socket => {



        /**
         * Socket.io for chat page 
         * see in /chat
         */
        // If any new user joins, let other users connected to the server know!
        socket.on('chat-new-user-joined', name =>  {
            users[socket.id] = name;
            socket.broadcast.emit('chat-user-joined', name);
            socket.emit('chat-you-joined', name);
        });
        function mk() {
            socket.emit('chat-bot', {message: 'ada parayadaaaaa', name: 'bot'})
            socket.broadcast.emit('chat-bot', {message: 'ada parayadaaaaa', name: 'bot'})
        }
        // If someone sends a message, broadcast it to other people
        socket.on('chat-send', message => {
            if(users[socket.id] == undefined || users[socket.id] == null) return socket.emit('chat-user-er')
            socket.broadcast.emit('chat-receive', {message: message, name: users[socket.id]})
            
            if(message == 'hlo') {mk()}
        });
        // If someone leaves the chat, let others know 
        socket.on('chat-disconnect', message =>{
            socket.broadcast.emit('chat-left', users[socket.id]);
            delete users[socket.id]; 
        });
    });
}
