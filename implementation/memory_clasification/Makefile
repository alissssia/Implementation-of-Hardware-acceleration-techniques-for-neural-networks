ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

# Usa VERILATOR_ROOT si está definido, si no coge 'verilator' del PATH
ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
endif

# includes
INCLUDES = -I.

# fuentes
SV_SRCS  = testbench.sv \
           barrido.sv
CPP_SRCS = main.cpp

barridos:
	@echo "-- Prueba doble barrido (1s y 0s) ------------"
	@echo "-- VERILATE & BUILD ---------------------------"
	$(VERILATOR) --cc --exe --build --timing -j 0 -top-module testbench.sv ~$(SV_SRCS) $(CPP_SRCS) $(INCLUDES) -CFLAGS "-std=c++17"
	@echo "-- RUN ----------------------------------------"
	./obj_dir/Vtestbench
	@echo "-- END ----------------------------------------"


clean:
	rm -rf obj_dir *.o *.d *.vcd *.log
