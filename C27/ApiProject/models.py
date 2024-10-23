from flask_sqlalchemy import SQLAlchemy

db = SQLAlchemy()

class Task(db.Model):
    id = db.Column(db.Integer, primary_key = True)
    title = db.Column(db.String(80), nullable = False)
    description = db.Column(db.String(200), nullable = False)

    # con este serializador podemos pasar los datos en formarto JSON o diccionarios
    def to_dict(self):
        return {
            'id': self.id,
            'title': self.title,
            'description': self.description
        }