CREATE TABLE "persona"
(
id INTEGER,
nombre VARCHAR(50) NOT NULL,
edad INT(8) NOT NULL,
genero VARCHAR(10) NOT NULL,
PRIMARY KEY(id));

CREATE TABLE telefono
(
id_phone INTEGER,
id_persona INTEGER,
numero VARCHAR(20) NOT NULL,
PRIMARY KEY(id_phone),
FOREIGN KEY(id_persona) REFERENCES persona(id));
