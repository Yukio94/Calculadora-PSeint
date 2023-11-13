Algoritmo Calculadora
	Definir op Como Entero
	op <- 0
	res <- 0
	dato <- 0
	Repetir
		Escribir 'Calculadora geom�trica'
		Escribir 'Ingresa una operacion a realizar'
		Escribir '1.- Suma'
		Escribir '2.- Resta'
		Escribir '3.- Multiplicaci�n'
		Escribir '4.- Divisi�n'
		Escribir '5.- Per�metro de c�rculo'
		Escribir '6.- �rea de c�rculo'
		Escribir '7.- Per�metro de tri�ngulo'
		Escribir '8.- �rea de tri�ngulo'
		Escribir '0.- Salir'
		Leer op
		Seg�n op Hacer
			0:
				Escribir 'Cerrando programa'
			1:
				Repetir
					Escribir 'Suma'
					Escribir 'ingresa tu primer valor'
					Leer res
					Repetir
						Escribir 'Ingresa el siguiente valor'
						Leer dato
						res <- +dato
						Escribir 'Ingresa 1 para a�adir otro dato'
						Leer op
					Hasta Que op<>1
					Escribir 'El resultado es: ', res
					Escribir 'Ingresa 1 para realizar otra suma'
					Escribir 'Presiona cualquier numero para regresar al menu principal'
					Escribir 'Presiona 0 para salir'
					Leer op
				Hasta Que op<>1
			2:
				Repetir
					Escribir 'Resta'
					Escribir 'ingresa tu primer valor'
					Leer res
					Repetir
						Escribir 'Ingresa el siguiente valor'
						Leer dato
						res <- -dato
						Escribir 'Ingresa 1 para a�adir otro dato'
						Leer op
					Hasta Que op<>1
					Escribir 'El resultado es: ', res
					Escribir 'Ingresa 1 para realizar otra resta'
					Escribir 'Presiona cualquier numero para regresar al menu principal'
					Escribir 'Presiona 0 para salir'
					Leer op
				Hasta Que op<>1
			3:
				Repetir
					Escribir 'Multiplicaci�n'
					Escribir 'ingresa tu primer valor'
					Leer res
					Escribir 'ingresa el siguiente valor'
					Leer dato
					res <- res*dato
					Escribir 'El resultado es: ', res
					Escribir 'Ingresa 1 para realizar otra multiplicaci�n'
					Escribir 'Presiona cualquier numero para regresar al menu principal'
					Escribir 'Presiona 0 para salir'
					Leer op
				Hasta Que op<>1
			4:
				Repetir
					Escribir 'Divisi�n'
					Escribir 'ingresa el dividendo'
					Leer res
					Escribir 'ingresa el divisor'
					Leer dato
					Mientras dato==0 Hacer
						Escribir 'El divisor no puede ser 0'
						Escribir 'Ingresa un numero diferente'
						Leer dato
					FinMientras
					res <- res/dato
					Escribir 'El resultado es: ', res
					Escribir 'Ingresa 1 para realizar otra divisi�n'
					Escribir 'Presiona cualquier numero para regresar al menu principal'
					Escribir 'Presiona 0 para salir'
					Leer op
				Hasta Que op<>1
			5:
				Repetir
					Escribir 'Per�metro de c�rculo'
					Escribir 'Que informacion tienes para calcular el perimetro'
					Escribir '1.- Radio'
					Escribir '2.- Diametro'
					Leer op
					Si op==1 Entonces
						Escribir 'Ingresa el radio'
						Leer dato
						res <- 2*PI*dato
						Escribir 'El perimetro es: ', res
					SiNo
						Si op==2 Entonces
							Escribir 'Ingresa el perimetro'
							Leer dato
							res <- PI*dato
							Escribir 'El perimetro es: ', res
						SiNo
							Escribir 'Datos no validos'
						FinSi
					FinSi
					Escribir 'Ingresa 1 para realizar otra divisi�n'
					Escribir 'Presiona cualquier numero para regresar al menu principal'
					Escribir 'Presiona 0 para salir'
					Leer op
				Hasta Que op<>1
			6:
				Repetir
					Escribir '�rea de c�rculo'
					Escribir 'Que informacion tienes para calcular el �rea'
					Escribir '1.- Radio'
					Escribir '2.- Diametro'
					Leer op
					Si op==1 Entonces
						Escribir 'Ingresa el radio'
						Leer dato
						res <- PI*dato^2
						Escribir 'El perimetro es: ', res
					SiNo
						Si op==2 Entonces
							Escribir 'Ingresa el perimetro'
							Leer dato
							res <- PI*(dato/2)^2
							Escribir 'El perimetro es: ', res
						SiNo
							Escribir 'Datos no validos'
						FinSi
					FinSi
					Escribir 'Ingresa 1 para realizar otra divisi�n'
					Escribir 'Presiona cualquier numero para regresar al menu principal'
					Escribir 'Presiona 0 para salir'
					Leer op
				Hasta Que op<>1
			7:
				Repetir
					Escribir 'Per�metro de tri�ngulo'
					Escribir 'Selecciona la clasificaci�n'
					Escribir 'Selecciona el nombre del triangulo'
					Escribir '1.- Triangulo equil�tero'
					Escribir '2.- Triangulo is�sceles'
					Escribir '3.- Triangulo escaleno'
					Leer op
					Seg�n op Hacer
						1:
							Escribir 'Escribe la longitud'
							Leer dato
							res <- 3*dato
							Escribir 'El resultado es: ', res
						2:
							Escribir 'Escribe los datos iguales'
							Leer dato
							res <- dato*2
							Escribir 'Escribe la madida restante'
							Leer dato
							res <- +dato
							Escribir 'El resultado es: ', res
						3:
							Escribir 'Escribe la longitud 1'
							Leer res
							Escribir 'Escribe la longitud 2'
							Leer dato
							res <- +dato
							Escribir 'Escribe la longitud 3'
							Leer dato
							res <- +dato
							Escribir 'El resultado es: ', res
						De Otro Modo:
							Escribir 'Datos no validos'
					FinSeg�n
					Escribir 'Ingresa 1 para realizar otro calculo'
					Escribir 'Presiona cualquier numero para regresar al menu principal'
					Escribir 'Presiona 0 para salir'
					Leer op
				Hasta Que op<>1
			8:
				Repetir
					Escribir '�rea de tri�ngulo'
					Escribir 'ingresa la base'
					Leer res
					Escribir 'ingresa la altura'
					Leer dato
					res <- (res*dato)/2
					Escribir 'El resultado es: ', res
					Escribir 'Ingresa 1 para realizar otra multiplicaci�n'
					Escribir 'Presiona cualquier numero para regresar al menu principal'
					Escribir 'Presiona 0 para salir'
					Leer op
				Hasta Que op<>1
			De Otro Modo:
				Escribir 'Opcion no valida'
		FinSeg�n
	Hasta Que op==0
FinAlgoritmo
