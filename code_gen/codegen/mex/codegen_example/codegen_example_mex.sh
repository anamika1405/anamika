MATLAB="/usr/local/MATLAB/R2016b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/anamika/.matlab/R2016b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for codegen_example" > codegen_example_mex.mki
echo "CC=$CC" >> codegen_example_mex.mki
echo "CFLAGS=$CFLAGS" >> codegen_example_mex.mki
echo "CLIBS=$CLIBS" >> codegen_example_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> codegen_example_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> codegen_example_mex.mki
echo "CXX=$CXX" >> codegen_example_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> codegen_example_mex.mki
echo "CXXLIBS=$CXXLIBS" >> codegen_example_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> codegen_example_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> codegen_example_mex.mki
echo "LDFLAGS=$LDFLAGS" >> codegen_example_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> codegen_example_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> codegen_example_mex.mki
echo "Arch=$Arch" >> codegen_example_mex.mki
echo "LD=$LD" >> codegen_example_mex.mki
echo OMPFLAGS= >> codegen_example_mex.mki
echo OMPLINKFLAGS= >> codegen_example_mex.mki
echo "EMC_COMPILER=gcc" >> codegen_example_mex.mki
echo "EMC_CONFIG=optim" >> codegen_example_mex.mki
"/usr/local/MATLAB/R2016b/bin/glnxa64/gmake" -B -f codegen_example_mex.mk
