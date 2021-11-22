const obj = {
    bc: "hello",
    "2ca": "hello1",
    "c a": "hello2",
    "c-a": "hello3",
};

console.log(obj.bc); // hello
console.log(obj["bc"]); // hello
// console.log(obj.2ca); // error
console.log(obj["2ca"]); // hello1