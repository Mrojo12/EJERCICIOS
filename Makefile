.PHONY: clean All

All:
	@echo "----------Building project:[ EjercicioPropuesto02 - Debug ]----------"
	@cd "EjercicioPropuesto02" && "$(MAKE)" -f  "EjercicioPropuesto02.mk"
clean:
	@echo "----------Cleaning project:[ EjercicioPropuesto02 - Debug ]----------"
	@cd "EjercicioPropuesto02" && "$(MAKE)" -f  "EjercicioPropuesto02.mk" clean
