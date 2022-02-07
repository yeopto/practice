let students = ['철수', '영희', '도우너', '말포이', '도비', '사스케']
for (let i = 0; i < students.length; i++) {
    console.log(students[i] + "님 안녕하세요?")
}

let persons = [
    {name: '철수', age:18},
    {name: '영희', age:22},
    {name: '도우너', age:5},
    {name: '말포이', age:14},
    {name: '도비', age:3},
]

for (let i = 0; i < persons.length; i++) {
    if (persons[i].age > 18) {
        console.log(persons[i].name + "님은 성인입니다")
    } else {
        console.log(persons[i].name + "님은 미성년자입니다")
    }
}

for (let i = 0; i < fruits.length; i++) {
    console.log(fruits[i].number + ' ' + fruits[i].title)
}

// 수학객체(인증번호 만들기)
let token = String(Math.floor((Math.random() * 1000000))).padStart(6, "0") //6자리 랜덤 수

