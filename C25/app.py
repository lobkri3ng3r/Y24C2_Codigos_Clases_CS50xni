#incluyendo las librerias
from flask import Flask,render_template, request

# Crear la instacia del servidor web
app = Flask(__name__)

ns = []

# Definir la primera ruta/path principal
@app.route("/")
def index():
    return render_template("index.html")

@app.route("/grupo")
def grupoE():
    return render_template("grupo.html")

@app.route("/formulario")
def formulario():

    entrada = request.args.get("nombre")

    frase = "tres tristes tigres trabajan trigo en triste trigal"

    nombres = ["Mike","Alexandra","Maria","Irian","Adilia"]

    return render_template("formulario.html",frase=frase,nombres=nombres,entrada=entrada)

@app.route("/layout")
def layout():
    return render_template("layout.html")

@app.route("/info",methods=['GET','POST'])
def info():



    if request.method == "POST":

        n = request.form.get("nombre")
        ns.append(n)
        return render_template("info.html",lista=ns)
    else:
        return render_template("info.html",lista=ns)
