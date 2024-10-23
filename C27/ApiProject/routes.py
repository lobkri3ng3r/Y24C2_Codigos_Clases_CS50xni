from flask import Blueprint, jsonify, request
from models import db, Task

api = Blueprint('api', __name__)

@api.route('/tasks', methods=['GET'])
def get_tasks():
    tasks = Task.query.all()
    task_list = []

    for task in tasks:
        task_list.append(task.to_dict())

    return jsonify(task_list)

@api.route('/tasks/<int:id>', methods=['GET'])
def get_task(id):
    task = Task.query.get_or_404(id)
    return jsonify(task.to_dict())

@api.route('/tasks', methods=['POST'])
def create_task():
    data = request.json
    new_task = Task(title = data['title'], description = data['description'])
    db.session.add(new_task)
    db.session.commit()

    return jsonify(new_task.to_dict()), 201

@api.route("/tasks/<int:id>", methods=['PUT'])
def update_task(id):
    task = Task.query.get_or_404(id)
    data = request.json
    task.title = data['title']
    task.description = data['description']
    db.session.commit()

    return jsonify(task.to_dict())

@api.route("/tasks/<int:id>", methods=['DELETE'])
def delete_task(id):
    task = Task.query.get_or_404(id)
    db.session.delete(task)
    db.session.commit()
    return jsonify({'message': 'La tarea ha sido eliminada'})