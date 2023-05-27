const gameBoard = document.getElementById("game-board");

// Create an 8x8 grid of candy elements
for (let i = 0; i < 8; i++) {
  for (let j = 0; j < 8; j++) {
    const candy = document.createElement("div");
    candy.classList.add("candy");
    gameBoard.appendChild(candy);
  }
}

// Add event listener to detect candy clicks
gameBoard.addEventListener("click", e => {
  const clickedCandy = e.target;
  if (clickedCandy.classList.contains("candy")) {
    clickedCandy.style.backgroundColor = "#2196f3";
  }
});