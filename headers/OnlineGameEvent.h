#ifndef ONLINEGAMEEVENT_H
#define ONLINEGAMEEVENT_H

enum class OnlineGameEvent {
    setPosition,
    setSeed,
    start,
    joinedLobby,
    leftLobby,
    returnedToLobby,
    wroteToChat,
    receiveOpponentName,
    firstPlayerBoxChanged,
    secondPlayerBoxChanged,
    boardSizeBoxChanged,
    firstTurnBoxChanged,
    timerBoxChanged
};

#endif // ONLINEGAMEEVENT_H
