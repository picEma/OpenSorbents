# Makefile generated by OpenModelica
# Platform: win64

# Simulations use -O3 by default
CC=gcc
CXX=g++
LINK=g++ -shared -Xlinker --export-all-symbols -fPIC
EXEEXT=.exe
DLLEXT=.dll
CFLAGS_BASED_ON_INIT_FILE=
DEBUG_FLAGS=-Os
CFLAGS=$(CFLAGS_BASED_ON_INIT_FILE) $(DEBUG_FLAGS) -falign-functions -fno-ipa-pure-const -mstackrealign -msse2 -mfpmath=sse ${MODELICAUSERCFLAGS}   
CPPFLAGS= -I"C:/OpenModelica1.16.5-64bit/include/omc/c" -I. -DOPENMODELICA_XML_FROM_FILE_AT_RUNTIME -DOMC_MODEL_PREFIX=MOSES_Simulations_ACTS_desorption -DOMC_NUM_MIXED_SYSTEMS=0 -DOMC_NUM_LINEAR_SYSTEMS=80 -DOMC_NUM_NONLINEAR_SYSTEMS=60 -DOMC_NDELAY_EXPRESSIONS=0 -DOMC_NVAR_STRING=0
LDFLAGS=-L"C:/OpenModelica1.16.5-64bit/lib//omc" -L"C:/OpenModelica1.16.5-64bit/lib" -Wl,--stack,16777216,-rpath,"C:/OpenModelica1.16.5-64bit/lib//omc" -Wl,-rpath,"C:/OpenModelica1.16.5-64bit/lib"   -fopenmp -Wl,-Bstatic -lregex -ltre -lintl -liconv -lexpat -lomcgc -lpthread -loleaut32 -limagehlp -lhdf5 -lz -lszip -Wl,-Bdynamic  -Wl,-Bstatic -lSimulationRuntimeC -Wl,-Bdynamic -Wl,-Bstatic -lomcgc -lregex -ltre -lintl -liconv -lexpat -static-libgcc -luuid -loleaut32 -lole32 -limagehlp -lws2_32 -llis -lumfpack -lklu -lcolamd -lbtf -lamd  -lsundials_idas -lsundials_cvodes -lsundials_kinsol -lsundials_nvecserial -lipopt -lcoinmumps -lpthread -lm -lgfortranbegin -lgfortran -lquadmath -lmingw32 -lgcc_eh -lmoldname -lmingwex -lmsvcrt -luser32 -lkernel32 -ladvapi32 -lshell32 -lopenblas -lcminpack -Wl,-Bdynamic -lwsock32 -Wl,-Bstatic -lstdc++ -Wl,-Bdynamic 
DIREXTRA=-L"C:/Users/piem/Documents/gitModels/OpenSorbents/MOSES/Simulations"
MAINFILE=MOSES.Simulations.ACTS_desorption.c
MAINOBJ=MOSES.Simulations.ACTS_desorption.o
CFILES=MOSES.Simulations.ACTS_desorption_functions.c MOSES.Simulations.ACTS_desorption_records.c \
MOSES.Simulations.ACTS_desorption_01exo.c MOSES.Simulations.ACTS_desorption_02nls.c MOSES.Simulations.ACTS_desorption_03lsy.c MOSES.Simulations.ACTS_desorption_04set.c MOSES.Simulations.ACTS_desorption_05evt.c MOSES.Simulations.ACTS_desorption_06inz.c MOSES.Simulations.ACTS_desorption_07dly.c \
MOSES.Simulations.ACTS_desorption_08bnd.c MOSES.Simulations.ACTS_desorption_09alg.c MOSES.Simulations.ACTS_desorption_10asr.c MOSES.Simulations.ACTS_desorption_11mix.c MOSES.Simulations.ACTS_desorption_12jac.c MOSES.Simulations.ACTS_desorption_13opt.c MOSES.Simulations.ACTS_desorption_14lnz.c \
MOSES.Simulations.ACTS_desorption_15syn.c MOSES.Simulations.ACTS_desorption_16dae.c MOSES.Simulations.ACTS_desorption_17inl.c 

OFILES=$(CFILES:.c=.o)
GENERATEDFILES=$(MAINFILE) MOSES.Simulations.ACTS_desorption.makefile MOSES.Simulations.ACTS_desorption_literals.h MOSES.Simulations.ACTS_desorption_functions.h $(CFILES)

.PHONY: omc_main_target clean bundle

# This is to make sure that MOSES.Simulations.ACTS_desorption_*.c are always compiled.
.PHONY: $(CFILES)

omc_main_target: $(MAINOBJ) MOSES.Simulations.ACTS_desorption_functions.h MOSES.Simulations.ACTS_desorption_literals.h $(OFILES)
	$(CC) -I. -o MOSES.Simulations.ACTS_desorption$(EXEEXT) $(MAINOBJ) $(OFILES) $(CPPFLAGS) $(DIREXTRA)   $(CFLAGS) $(CPPFLAGS) $(LDFLAGS)
clean:
	@rm -f MOSES.Simulations.ACTS_desorption_records.o $(MAINOBJ)

bundle:
	@tar -cvf MOSES.Simulations.ACTS_desorption_Files.tar $(GENERATEDFILES)