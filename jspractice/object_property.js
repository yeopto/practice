var person = {
  name: "홍길동", // 사람의 이름 프포퍼티 정의
  birthday: "030219", // 생년월일 프로퍼티 정의
  pld: "1234567", // 개인 id 프로퍼티 정의
  fullId: function(){ // 생년월일과 개인 id를 합쳐서 주민등록번호를 반환
    return this.birthday + this.pld;
  }
};

console.log(person.name); //참조
console.log(person["name"]); //하는 법
console.log(person.fullId()); //메소드를 참조할 땐 메소드 이름 뒤에 괄호를 붙이지 않으면
console.log(person.fullId); //메소드가 아닌 프로퍼티 그 자체를 참조하게 된다. 그래서 메소드 정의 그자체가 반환됨.