[@bs.deriving abstract]
type t = {
  protocol: string,
  slashes: bool,
  auth: string,
  username: string,
  password: string,
  host: string,
  hostname: string,
  port: string,
  pathname: string,
  query: string,
  hash: string,
  href: string,
  origin: string,
};

module Internal = {
  [@bs.module] [@bs.new]
  external parseWithBase: (string, string, bool) => t = "url-parse";

  [@bs.module] [@bs.new] external parse: (string, bool) => t = "url-parse";

  [@bs.send] external toString: t => string = "";
};

/* TODO: Not exposing querystring parsing because I'm not sure how to express that type */
let parse = (~base=?, path) =>
  switch (base) {
  | Some(base) => Internal.parseWithBase(path, base, false)
  | None => Internal.parse(path, false)
  };

let stringify = url => Internal.toString(url);
