.PHONY: clean All

All:
	@echo "----------Building project:[ Ejercicio16 - Debug ]----------"
	@cd "Ejercicio16" && "$(MAKE)" -f  "Ejercicio16.mk"
clean:
	@echo "----------Cleaning project:[ Ejercicio16 - Debug ]----------"
	@cd "Ejercicio16" && "$(MAKE)" -f  "Ejercicio16.mk" clean
