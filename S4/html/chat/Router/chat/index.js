require('path');
var express = require('express');
var router = express.Router();

router.get('/', (req, res) => { res.sendFile(__dirname + '/page/index.html')});
router.get('/index.css', async(req, res) => { res.sendFile(__dirname + "/page/index.css")})
router.get('/index.js', async(req, res) => { res.sendFile(__dirname + "/page/index.js")});
router.get('/ting.mp3', async(req, res) => { res.sendFile(__dirname + "/page/ting.mp3")});

module.exports = router;