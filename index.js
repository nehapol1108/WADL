const express = require("express");
const bodyParser = require("body-parser");
const app = express();
app.use(bodyParser.json());
app.use(bodyParser.urlencoded({ extended: true }));
app.get("/", function (req, res) {
  res.sendFile(__dirname + "/registerForm.html");
});

app.get("/form-submit", function (req, res) {
  res.send(req.query);
});

app.listen(3000);
