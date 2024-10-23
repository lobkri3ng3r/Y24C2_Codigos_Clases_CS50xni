document.addEventListener('DOMContentLoaded', () => {
    fetchTasks();


    // aqui pedimos los datos del formulario
    const taskForm = document.getElementById('task-form');
    const alertaContainer = document.getElementById("alerta-container");


    taskForm.addEventListener('submit', async(e) => {
        e.preventDefault();

        const title = document.getElementById('title').value;
        const description = document.getElementById('description').value;

        if (title === '' || description === '') {
            const divAlerts = document.createElement("div");
            divAlerts.classList.add("alert", "alert-danger", "alert-dismissible", "fade", "show")
            divAlerts.innerHTML = 
            `
            <strong>¡Atención!</strong> Los campos deben ser llenados.
            <button type="button" class="btn-close" data-bs-dismiss="alert" aria-label="Close"></button>
            `

            alertaContainer.appendChild(divAlerts);
            taskForm.reset();
            return ;
        }

        console.log(description);
        console.log(description);

        // aqui se crean las tareas
        await createTask(title, description);

        taskForm.reset();

    });
});

// aqui van las funciones fetch
async function fetchTasks() {
    try {
        const response = await fetch('/api/tasks');
        const data = await response.json();
        console.log(data);

        const taskList = document.getElementById('task-list');
        taskList.innerHTML = '';

        data.forEach(task => {
            const li = document.createElement('li');
            li.textContent = `${task.title}: ${task.description}`;
            taskList.appendChild(li);
        });
    } catch (error) {
        console.error('Error fetching tasks:', error);
    }
}

async function createTask(title, description) {

    try {
        const response = await fetch('/api/tasks', {
            method: 'POST',
            headers: {
                'Content-Type': 'application/json'
            },
            body: JSON.stringify({ title, description })
        });

        const data = await response.json();
        alert("Task created successfully");

        fetchTasks();
    } catch (error) {
        console.error('Error creating task:', error);
    }
}