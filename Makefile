.PHONY: clean All

All:
	@echo "----------Building project:[ EjercicioPropuesto01 - Debug ]----------"
	@cd "EjercicioPropuesto01" && "$(MAKE)" -f  "EjercicioPropuesto01.mk"
clean:
	@echo "----------Cleaning project:[ EjercicioPropuesto01 - Debug ]----------"
	@cd "EjercicioPropuesto01" && "$(MAKE)" -f  "EjercicioPropuesto01.mk" clean
