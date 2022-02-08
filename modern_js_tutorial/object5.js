let user = {
  name: "john",
  age: 30,
};

let clone = {};

for (let key in user) {
  clone[key] = user[key];
}

clone.age = 20;

console.log(user.age);