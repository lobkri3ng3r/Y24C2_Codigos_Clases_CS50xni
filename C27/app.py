from flask import Flask, render_template, redirect, request, jsonify
import requests


app = Flask(__name__)

@app.route("/")
def index():
    return render_template("index.html")

@app.route("/validar", methods=['POST'])
def validar():
    card_number = request.json.get("card_number")
    print(f"La tarjeta fue: {card_number}")
    bin_number = card_number[:6] 
    print(f"BIN number: {bin_number}") # Obtener los primeros 6 dígitos
    
    url = "https://bin-ip-checker.p.rapidapi.com/"
    payload = {"bin": bin_number}
    headers = {
        'x-rapidapi-key': "804ceea84dmsh08cad729dcb3653p1083fejsnc57d70fadfe8",
        'x-rapidapi-host': "bin-ip-checker.p.rapidapi.com",
        'Content-Type': "application/json"
    }
    params = {"bin": bin_number}
    
    response = requests.post(url, json=payload, headers=headers, params=params)
    result = response.json()
    
    print(f"El resultado fue: {result}")
    return jsonify(result)

@app.route("/pokemon")
def pokemon():
    return render_template("pokemon.html")

@app.route("/pokeapi", methods=["POST"])
def poke_api():
    # Obtener el nombre del Pokémon desde el request JSON
    pokemon_name = request.json.get("pokemon_name")

    # Construir el querystring con el nombre del Pokémon
    querystring = {"name": pokemon_name}

    url = "https://pokemon-api3.p.rapidapi.com/pokemon"

    headers = {
        "x-rapidapi-key": "804ceea84dmsh08cad729dcb3653p1083fejsnc57d70fadfe8",
        "x-rapidapi-host": "pokemon-api3.p.rapidapi.com"
    }

    # Realizar la solicitud a la API externa
    response = requests.get(url, headers=headers, params=querystring)

    print(f"Pokemon encontrado: {response.json()}")

    # Retornar la respuesta en formato JSON al cliente
    return jsonify(response.json())
   

if __name__ == '__main__':
    app.run(debug=True)