// '라'를 다 지워봐
const arr = ['가', '라', '다', '라', '마', '라'];
/* while (arr.indexOf('라') !== -1) {
  arr.splice(arr.indexOf('라'), 1);
}
console.log(arr); */

let index = arr.indexOf('라');
while (index !== -1) {
  arr.splice(index, 1);
  index = arr.indexOf('라'); // 이 식이 없다면 무한루프 왜냐면 index가 계속 true니까
}
console.log(arr);