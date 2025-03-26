let payload = '{"__proto__": {"admin": true}}';
let obj = JSON.parse(payload);
console.log({}.admin); // Output: true (system compromised!)
