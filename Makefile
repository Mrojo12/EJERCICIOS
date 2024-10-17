.PHONY: clean All

All:
	@echo "----------Building project:[ Ejercicio17 - Debug ]----------"
	@cd "Ejercicio17" && "$(MAKE)" -f  "Ejercicio17.mk"
clean:
	@echo "----------Cleaning project:[ Ejercicio17 - Debug ]----------"
	@cd "Ejercicio17" && "$(MAKE)" -f  "Ejercicio17.mk" clean
