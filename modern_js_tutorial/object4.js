/*  
객체 obj의 프로퍼티 값이 숫자인 경우 그 값을 두 배 해주는 함수 
multiplyNumeric(obj)을 만들어보세요.

예시
// 함수 호출 전
let menu = {
    width: 200,
    height: 300,
    title: "My menu"
};

multiplyNumeric(menu);

// 함수 호출 후
menu = {
    width: 400,
    height: 600,
    title: "My menu"
};
*/

function multiplyNumeric(obj) {
    for (let key in obj) {
        if (typeof obj[key] == "number") {
            obj[key] *= 2;
        }
    }
}
