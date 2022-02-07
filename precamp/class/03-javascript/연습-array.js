const classMates = ['철수', '영희', '훈이']
// undefined
classMates
// (3) ['철수', '영희', '훈이']
classMates[0]
// '철수'
classMates.includes('훈이')
// true
classMates.includes('코드')
// false
classMates.push('코드')
// 4
classMates.includes('코드')
// true
classMates.pop()
// '코드'
classMates.includes('코드')
// false
classMates.length
// 3