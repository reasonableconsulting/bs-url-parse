// Generated by BUCKLESCRIPT VERSION 4.0.5, PLEASE EDIT WITH CARE
'use strict';

var Url = require("../src/Url.bs.js");

var url = Url.parse(undefined, "http://example.com/whatever/?qs=32#searchit");

console.log(url);

var query = url.query;

exports.url = url;
exports.query = query;
/* url Not a pure module */