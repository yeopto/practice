let profile = {}
// undefined
profile = {
    name: "철수",
    age: 8,
    school: "다람쥐초등학교"
}
// {name: '철수', age: 8, school: '다람쥐초등학교'}
profile.age
// 8
let age = profile.age
// undefined
age
// 8
profile.school
// '다람쥐초등학교'

const fruits = [
    { number:  1, title: "레드향"　　　　},
    { number:  2, title: "샤인머스켓"　　},
    { number:  3, title: "산청딸기"　　　},
    { number:  4, title: "한라봉"　　　　},
    { number:  5, title: "사과"　　　　　},
    { number:  6, title: "애플망고"　　　},
    { number:  7, title: "딸기"　　　　　},
    { number:  8, title: "천혜향"　　　　},
    { number:  9, title: "과일선물세트"　},
    { number: 10, title: "귤"　　　　　 },
]

fruits[0].number + " " + fruits[0].title
// '1 레드향'
fruits[1].number + " " + fruits[1].title
// '2 샤인머스켓'
fruits[2].number + " " + fruits[2].title
// '3 산청딸기'
fruits[3].number + " " + fruits[3].title
// '4 한라봉'

let i = 0
while (i < 10) {
    let arr = fruits[i].number + " " + fruits[i].title
    console.log(arr)
    i++
}
/*
1 레드향
2 샤인머스켓
3 산청딸기
4 한라봉
5 사과
6 애플망고
7 딸기
8 천혜향
9 과일선물세트
10 귤
*/