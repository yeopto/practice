const fruits = ['사과', '오렌지', '배', '딸기'];
console.log(fruits[0]);
console.log(fruits[1]);
console.log(fruits[2]);
console.log(fruits[3]);

const arrayOfArray = [[1,2,3], [4,5]];
console.log(arrayOfArray[0]); // [1,2,3]
console.log(arrayOfArray[1]); // [4,5]
console.log(arrayOfArray[0][1]); // 2
console.log(arrayOfArray.length); // 2
console.log(arrayOfArray[0].length); // 3

const arr = ['가', '나', '다', '라','마'];
arr.splice(2, 0, '바'); 
console.log(arr); // ['가', '나', '바', '다', '라','마']