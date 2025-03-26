const lodash = require("lodash");

let payload = '{"__proto__": {"admin": true}}';
let obj = JSON.parse(payload);

lodash.defaults(obj, {}); // Remove dangerous properties

console.log({}.admin); // Now it is undefined
