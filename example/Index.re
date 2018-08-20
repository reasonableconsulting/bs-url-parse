let url = Url.parse("http://example.com/whatever/?qs=32#searchit");

Js.log(url);

let query = url->Url.queryGet;

query;
