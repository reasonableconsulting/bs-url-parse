// Generated by BUCKLESCRIPT VERSION 4.0.5, PLEASE EDIT WITH CARE
'use strict';

var Url = require("../src/Url.bs.js");

var url = Url.parse(undefined, "http://example.com/whatever/?qs=32#searchit");

console.log(url);

console.log(Url.stringify(url));

exports.url = url;
/* url Not a pure module */
