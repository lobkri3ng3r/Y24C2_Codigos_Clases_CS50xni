--  Las consultas de tipo select nos ayudan a obtener datos
-- dentro de las consultas select podemos crear filtros para obtener 
-- mejores registros

-- Obtener todos los registros de esta tabla
SELECT * FROM "comidas"; 
SELECT * FROM "bebidas";

-- Obtener registros mas especificos
SELECT nombre,precio FROM "comidas";
SELECT precio FROM "bebidas";

-- Obtener registros aplicando filtros
SELECT nombre, precio FROM "comidas" where nombre like "%nacatamal%";
SELECT precio FROM "bebidas" where nombre = "Cacao";
SELECT nombre FROM "comidas" where precio < 100;
