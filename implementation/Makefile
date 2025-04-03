
ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
endif


v1:
	@echo "-- Prueba de la version 1 del mecanismo flipping en la que se usa un mux para seleccionar el valor de la salida y solo se procesa una activacion"
	@echo "-- VERILATE & BUILD --------"
	$(VERILATOR) --cc --exe --build --timing -j 0 -top-module mecanismo_flipping_uno mecanismo_flipping_uno.sv probar_flipping_uno.cpp -I. -CFLAGS "-fcoroutines" 
 	
	@echo "-- RUN ---------------------"
	obj_dir/Vflipping_uno
	@echo "-- DONE --------------------"

v2:
	@echo "-- Prueba de la version 2 del mecanismo flipping en la que se usa el modulo de flipping de una activacion para procesar un bloque"
	@echo "-- VERILATE & BUILD --------"
	$(VERILATOR) --cc --exe --build --timing -j 0 -top-module mecanismo_flipping_bloque mecanismo_flipping_bloque.sv probar_flipping_bloque.cpp -I. -CFLAGS "-fcoroutines" 
 	
	@echo "-- RUN ---------------------"
	obj_dir/Vflipping_bloque
	@echo "-- DONE --------------------"

v3:
	@echo "-- Prueba de la version 3 del mecanismo flipping en la que se usa el modulo de flipping de una activacion para procesar un bloque y se usan flip-flops que almacenan los datos"
	@echo "-- VERILATE & BUILD --------"
	$(VERILATOR) --cc --exe --build --timing -j 0 -top-module mecanismo_flipping_flipflop mecanismo_flipping_flipflop.sv probar_flipping_flipflop.cpp -I. -CFLAGS "-fcoroutines" 
 	
	@echo "-- RUN ---------------------"
	obj_dir/Vmecanismo_flipping_flipflop
	@echo "-- DONE --------------------"

testbench:
	@echo "-- Testbench"
	@echo "-- VERILATE & BUILD --------"
	$(VERILATOR) --cc --exe --build --timing -j 0 -top-module mecanismo_flipping_flipflop mecanismo_flipping_flipflop.sv banco_de_pruebas_flipping.cpp -I. -CFLAGS "-fcoroutines" 
 	
	@echo "-- RUN ---------------------"
	obj_dir/Vmecanismo_flipping_flipflop
	@echo "-- DONE --------------------"

maintainer-copy::
clean mostlyclean distclean maintainer-clean::
	-rm -rf obj_dir *.log *.dmp *.vpd core
