for(let i = 1; i < 10; i++) {
  if (i % 2 === 0) continue;
  for(let j = 1; j < 10; j++) {
    if(j % 2 === 0) continue;
    console.log(i, 'x', j, '=', i * j);
  }
}