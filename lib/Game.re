type player =
  | PlayerOne
  | PlayerTwo;

type point =
  | Love
  | Fifteen
  | Thirty;

type pointsData = {
  playerOne: point,
  playerTwo: point
};

/*let s1 = {playerOne: Love, playerTwo: Love};
let s2 = {playerOne: Fifteen, playerTwo: Love};
let s3 = {playerOne: Thirty, playerTwo: Love};*/

type fortyData = {
  player: player, /* The player who have forty points */
  otherPlayerPoint: point
};

/*let fd : fortyData = {player: PlayerOne, otherPlayerPoint: Love};*/

type score =
| Points(pointsData)
| Forty(fortyData)
| Deuce
| Advantage(player)
| Game(player);

let scoreWhenDeuce: player => score = winner => Advantage(winner);

/*let scoreWhenAdvantage: (player, player) => score =
  (advantagedPlayer, winner) => Game(winner);*/

let scoreWhenAdvantage: (player, player) => score =
  (advantagedPlayer, winner) =>
    advantagedPlayer == winner ? Game(winner) : Deuce;

let other = player =>
  switch player {
  | PlayerOne => PlayerTwo
  | PlayerTwo => PlayerOne
  };

let scoreWhenForty : (fortyData, fortyData) => 
  fortyPlayer == winner ? Game(winner) : Deuce;

