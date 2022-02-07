const refresh = () => {
    const token = String(Math.floor(Math.random() * 1000000)).padStart(6, "0")
    console.log(document.getElementById("auth"))
    document.getElementById("auth").innerText = token
}