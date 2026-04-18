function recommendSong() {

    let mood = document.getElementById("mood").value;
    let result = document.getElementById("result");

    let songLink = "";

    if (mood == "happy") {
        result.innerHTML = "🎵 Cruel Summer by Taylor Swift";
        songLink = "https://open.spotify.com/track/1BxfuPKGuaTgP7aM0Bbdwr?si=b8e14dc81f1b4f6f";
    }

    else if (mood == "sad") {
        result.innerHTML = "🎵 Let Me Down Slowly by Alec Benjamin";
        songLink = "https://open.spotify.com/track/2qxmye6gAegTMjLKEBoR3d?si=9df287f4e4f34cb9";
    }

    else if (mood == "romantic") {
        result.innerHTML = "🎵 Perfect - Ed Sheeran";
        songLink = "https://open.spotify.com/track/0tgVpDi06FyKpA1z0VMD4v?si=430b115de7284a92";
    }

    else if (mood == "motivational") {
        result.innerHTML = "🎵 Unstopable by Sia";
        songLink = "https://open.spotify.com/track/2J2Z1SkXYghSajLibnQHOa?si=0e63f9f90d8e4118";
    }

    else if (mood == "chill") {
        result.innerHTML = "🎵 Levitating by Dua Lipa";
        songLink = "https://open.spotify.com/track/39LLxExYz6ewLAcYrzQQyP?si=933afa5ae0e04455";
    }

    window.open(songLink, "_blank");
}