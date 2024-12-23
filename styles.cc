body, html {
    margin: 0;
    padding: 0;
    height: 100%;
    font-family: 'Bangers', cursive;
    background-image: url('https://wallpaperaccess.com/full/2102764.jpg');
    background-size: cover;
    background-position: center;
    display: flex;
    flex-direction: column;
    justify-content: center;
    align-items: center;
}

.navbar {
    width: 100%;
    background-color: rgba(0, 0, 0, 0.7);
    position: fixed;
    top: 0;
    left: 0;
    z-index: 1000;
}

.navbar ul {
    list-style-type: none;
    margin: 0;
    padding: 0;
    display: flex;
    justify-content: center;
}

.navbar li {
    margin: 0 15px;
}

.navbar a {
    text-decoration: none;
    color: white;
    font-size: 1.5em;
    transition: color 0.3s;
}

.navbar a:hover {
    color: #ff4757;
}

.container {
    text-align: center;
    color: white;
    margin-top: 100px; /* Adjust for navbar height */
}

.title {
    font-size: 4em;
    margin-bottom: 20px;
    text-shadow: 2px 2px 4px #000000;
    animation: fadeIn 2s ease-in-out;
}

.welcome-button {
    font-size: 1.5em;
    padding: 15px 30px;
    color: white;
    background-color: #ff4757;
    border: none;
    border-radius: 10px;
    cursor: pointer;
    transition: transform 0.3s, background-color 0.3s;
}

.welcome-button:hover {
    background-color: #ff6b81;
    transform: scale(1.1);
}

@keyframes fadeIn {
    from { opacity: 0; }
    to { opacity: 1; }
}
