# Implements a registration form, storing registrants in a dictionary, with error messages
from cs50 import SQL
from flask import Flask, redirect, render_template, request


db = SQL("sqlite:///ejemplo.db")

app = Flask(__name__)


SPORTS = [
    "Basketball",
    "Soccer",
    "Beisbol",
    "Ajedrez",
    "Natacion"
]


@app.route("/")
def index():
    return render_template("index.html", sports=SPORTS)


@app.route("/register", methods=["POST"])
def register():

   # Validate submission
    name = request.form.get("name")
    sport = request.form.get("sport")
    if not name or sport not in SPORTS:
        return render_template("error.html")

    # Remember registrant
    db.execute("INSERT INTO registrants (name, sport) VALUES(?, ?)", name, sport)

    # Confirm registration
    return redirect("/registrants")

@app.route("/registrants")
def registrants():
    registrants = db.execute("SELECT * FROM registrants")
    print(registrants)
    return render_template("registrants2.html", registrants=registrants)

@app.route("/deregister", methods=["POST"])
def deregister():

    # Forget registrant
    id = request.form.get("id")
    if id:
        db.execute("DELETE FROM registrants WHERE id = ?", id)

    return redirect("/registrants")
