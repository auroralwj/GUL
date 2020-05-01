QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    CGNSSJsonFile.cpp \
    CGNSSTextFile.cpp \
    GULLib/GNSSMathUtilityLib/AppIFs/MathAppInterface.cpp \
    GULLib/GNSSMathUtilityLib/DllMain/GNSSMathInterface.cpp \
    GULLib/GNSSMathUtilityLib/GNSSMatrix/CGNSSMatrix.cpp \
    GULLib/GNSSUtilityLibrary/Angle/CGNSSAngle.cpp \
    GULLib/GNSSUtilityLibrary/AppIFs/AppInterface.cpp \
    GULLib/GNSSUtilityLibrary/Coordinate/CGNSSCoord.cpp \
    GULLib/GNSSUtilityLibrary/DllMain/GNSSUtilityInterface.cpp \
    GULLib/GNSSUtilityLibrary/Ephemeris/CGNSSEphemeris.cpp \
    GULLib/GNSSUtilityLibrary/Time/TimeCalc/CCalcTime.cpp \
    GULLib/GNSSUtilityLibrary/Time/TimeSys/CBDSTime.cpp \
    GULLib/GNSSUtilityLibrary/Time/TimeSys/CGPSTime.cpp \
    GULLib/GNSSUtilityLibrary/Time/TimeSys/CGalileoTime.cpp \
    GULLib/GNSSUtilityLibrary/Time/TimeSys/CGlonassTime.cpp \
    GULLib/GNSSUtilityLibrary/Time/TimeSys/CTimeFactory.cpp \
    GULLib/GNSSUtilityLibrary/Time/TimeSys/CUTCTime.cpp \
    GULLib/GNSSUtilityLibrary/Time/TimeSys/IGNSSTime.cpp \
    RtkLib/ephemeris.c \
    RtkLib/preceph.c \
    RtkLib/qzslex.c \
    RtkLib/rtcm.c \
    RtkLib/rtcm2.c \
    RtkLib/rtcm3.c \
    RtkLib/rtcm3e.c \
    RtkLib/rtkcmn.c \
    RtkLib/sbas.c \
    TestFunc.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    CGNSSJsonFile.h \
    CGNSSTextFile.h \
    ConstantDef.h \
    GULLib/GNSSMathInterface.h \
    GULLib/GNSSMathUtilityLib/AppIFs/MathAppInterface.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/Cholesky \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/CholmodSupport \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/Core \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/Dense \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/Eigen \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/Eigenvalues \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/Geometry \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/Householder \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/IterativeLinearSolvers \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/Jacobi \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/LU \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/MetisSupport \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/OrderingMethods \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/PaStiXSupport \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/PardisoSupport \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/QR \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/QtAlignedMalloc \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/SPQRSupport \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/SVD \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/Sparse \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/SparseCholesky \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/SparseCore \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/SparseLU \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/SparseQR \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/StdDeque \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/StdList \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/StdVector \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/SuperLUSupport \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/UmfPackSupport \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Cholesky/LDLT.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Cholesky/LLT.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Cholesky/LLT_LAPACKE.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/CholmodSupport/CholmodSupport.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/Array.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/ArrayBase.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/ArrayWrapper.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/Assign.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/AssignEvaluator.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/Assign_MKL.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/BandMatrix.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/Block.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/BooleanRedux.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/CommaInitializer.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/ConditionEstimator.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/CoreEvaluators.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/CoreIterators.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/CwiseBinaryOp.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/CwiseNullaryOp.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/CwiseTernaryOp.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/CwiseUnaryOp.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/CwiseUnaryView.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/DenseBase.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/DenseCoeffsBase.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/DenseStorage.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/Diagonal.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/DiagonalMatrix.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/DiagonalProduct.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/Dot.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/EigenBase.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/ForceAlignedAccess.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/Fuzzy.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/GeneralProduct.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/GenericPacketMath.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/GlobalFunctions.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/IO.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/Inverse.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/Map.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/MapBase.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/MathFunctions.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/MathFunctionsImpl.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/Matrix.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/MatrixBase.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/NestByValue.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/NoAlias.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/NumTraits.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/PermutationMatrix.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/PlainObjectBase.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/Product.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/ProductEvaluators.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/Random.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/Redux.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/Ref.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/Replicate.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/ReturnByValue.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/Reverse.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/Select.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/SelfAdjointView.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/SelfCwiseBinaryOp.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/Solve.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/SolveTriangular.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/SolverBase.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/StableNorm.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/Stride.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/Swap.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/Transpose.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/Transpositions.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/TriangularMatrix.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/VectorBlock.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/VectorwiseOp.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/Visitor.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/arch/AVX/Complex.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/arch/AVX/MathFunctions.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/arch/AVX/PacketMath.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/arch/AVX/TypeCasting.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/arch/AVX512/MathFunctions.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/arch/AVX512/PacketMath.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/arch/AltiVec/Complex.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/arch/AltiVec/MathFunctions.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/arch/AltiVec/PacketMath.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/arch/CUDA/Complex.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/arch/CUDA/Half.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/arch/CUDA/MathFunctions.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/arch/CUDA/PacketMath.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/arch/CUDA/PacketMathHalf.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/arch/CUDA/TypeCasting.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/arch/Default/ConjHelper.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/arch/Default/Settings.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/arch/NEON/Complex.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/arch/NEON/MathFunctions.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/arch/NEON/PacketMath.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/arch/SSE/Complex.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/arch/SSE/MathFunctions.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/arch/SSE/PacketMath.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/arch/SSE/TypeCasting.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/arch/ZVector/Complex.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/arch/ZVector/MathFunctions.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/arch/ZVector/PacketMath.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/functors/AssignmentFunctors.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/functors/BinaryFunctors.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/functors/NullaryFunctors.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/functors/StlFunctors.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/functors/TernaryFunctors.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/functors/UnaryFunctors.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/products/GeneralBlockPanelKernel.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/products/GeneralMatrixMatrix.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/products/GeneralMatrixMatrixTriangular.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/products/GeneralMatrixMatrixTriangular_BLAS.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/products/GeneralMatrixMatrix_BLAS.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/products/GeneralMatrixVector.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/products/GeneralMatrixVector_BLAS.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/products/Parallelizer.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/products/SelfadjointMatrixMatrix.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/products/SelfadjointMatrixMatrix_BLAS.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/products/SelfadjointMatrixVector.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/products/SelfadjointMatrixVector_BLAS.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/products/SelfadjointProduct.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/products/SelfadjointRank2Update.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/products/TriangularMatrixMatrix.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/products/TriangularMatrixMatrix_BLAS.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/products/TriangularMatrixVector.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/products/TriangularMatrixVector_BLAS.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/products/TriangularSolverMatrix.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/products/TriangularSolverMatrix_BLAS.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/products/TriangularSolverVector.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/util/BlasUtil.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/util/Constants.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/util/DisableStupidWarnings.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/util/ForwardDeclarations.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/util/MKL_support.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/util/Macros.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/util/Memory.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/util/Meta.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/util/NonMPL2.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/util/ReenableStupidWarnings.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/util/StaticAssert.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Core/util/XprHelper.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Eigenvalues/ComplexEigenSolver.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Eigenvalues/ComplexSchur.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Eigenvalues/ComplexSchur_LAPACKE.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Eigenvalues/EigenSolver.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Eigenvalues/GeneralizedEigenSolver.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Eigenvalues/GeneralizedSelfAdjointEigenSolver.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Eigenvalues/HessenbergDecomposition.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Eigenvalues/MatrixBaseEigenvalues.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Eigenvalues/RealQZ.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Eigenvalues/RealSchur.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Eigenvalues/RealSchur_LAPACKE.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Eigenvalues/SelfAdjointEigenSolver.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Eigenvalues/SelfAdjointEigenSolver_LAPACKE.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Eigenvalues/Tridiagonalization.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Geometry/AlignedBox.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Geometry/AngleAxis.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Geometry/EulerAngles.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Geometry/Homogeneous.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Geometry/Hyperplane.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Geometry/OrthoMethods.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Geometry/ParametrizedLine.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Geometry/Quaternion.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Geometry/Rotation2D.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Geometry/RotationBase.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Geometry/Scaling.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Geometry/Transform.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Geometry/Translation.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Geometry/Umeyama.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Geometry/arch/Geometry_SSE.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Householder/BlockHouseholder.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Householder/Householder.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Householder/HouseholderSequence.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/IterativeLinearSolvers/BasicPreconditioners.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/IterativeLinearSolvers/BiCGSTAB.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/IterativeLinearSolvers/ConjugateGradient.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/IterativeLinearSolvers/IncompleteCholesky.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/IterativeLinearSolvers/IncompleteLUT.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/IterativeLinearSolvers/IterativeSolverBase.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/IterativeLinearSolvers/LeastSquareConjugateGradient.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/IterativeLinearSolvers/SolveWithGuess.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/Jacobi/Jacobi.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/LU/Determinant.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/LU/FullPivLU.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/LU/InverseImpl.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/LU/PartialPivLU.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/LU/PartialPivLU_LAPACKE.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/LU/arch/Inverse_SSE.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/MetisSupport/MetisSupport.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/OrderingMethods/Amd.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/OrderingMethods/Eigen_Colamd.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/OrderingMethods/Ordering.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/PaStiXSupport/PaStiXSupport.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/PardisoSupport/PardisoSupport.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/QR/ColPivHouseholderQR.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/QR/ColPivHouseholderQR_LAPACKE.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/QR/CompleteOrthogonalDecomposition.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/QR/FullPivHouseholderQR.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/QR/HouseholderQR.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/QR/HouseholderQR_LAPACKE.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SPQRSupport/SuiteSparseQRSupport.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SVD/BDCSVD.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SVD/JacobiSVD.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SVD/JacobiSVD_LAPACKE.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SVD/SVDBase.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SVD/UpperBidiagonalization.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseCholesky/SimplicialCholesky.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseCholesky/SimplicialCholesky_impl.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseCore/AmbiVector.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseCore/CompressedStorage.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseCore/ConservativeSparseSparseProduct.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseCore/MappedSparseMatrix.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseCore/SparseAssign.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseCore/SparseBlock.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseCore/SparseColEtree.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseCore/SparseCompressedBase.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseCore/SparseCwiseBinaryOp.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseCore/SparseCwiseUnaryOp.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseCore/SparseDenseProduct.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseCore/SparseDiagonalProduct.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseCore/SparseDot.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseCore/SparseFuzzy.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseCore/SparseMap.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseCore/SparseMatrix.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseCore/SparseMatrixBase.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseCore/SparsePermutation.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseCore/SparseProduct.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseCore/SparseRedux.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseCore/SparseRef.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseCore/SparseSelfAdjointView.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseCore/SparseSolverBase.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseCore/SparseSparseProductWithPruning.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseCore/SparseTranspose.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseCore/SparseTriangularView.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseCore/SparseUtil.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseCore/SparseVector.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseCore/SparseView.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseCore/TriangularSolver.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseLU/SparseLU.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseLU/SparseLUImpl.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseLU/SparseLU_Memory.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseLU/SparseLU_Structs.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseLU/SparseLU_SupernodalMatrix.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseLU/SparseLU_Utils.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseLU/SparseLU_column_bmod.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseLU/SparseLU_column_dfs.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseLU/SparseLU_copy_to_ucol.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseLU/SparseLU_gemm_kernel.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseLU/SparseLU_heap_relax_snode.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseLU/SparseLU_kernel_bmod.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseLU/SparseLU_panel_bmod.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseLU/SparseLU_panel_dfs.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseLU/SparseLU_pivotL.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseLU/SparseLU_pruneL.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseLU/SparseLU_relax_snode.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SparseQR/SparseQR.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/StlSupport/StdDeque.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/StlSupport/StdList.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/StlSupport/StdVector.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/StlSupport/details.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/SuperLUSupport/SuperLUSupport.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/UmfPackSupport/UmfPackSupport.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/misc/Image.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/misc/Kernel.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/misc/RealSvd2x2.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/misc/blas.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/misc/lapack.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/misc/lapacke.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/misc/lapacke_mangling.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/plugins/ArrayCwiseBinaryOps.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/plugins/ArrayCwiseUnaryOps.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/plugins/BlockMethods.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/plugins/CommonCwiseBinaryOps.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/plugins/CommonCwiseUnaryOps.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/plugins/MatrixCwiseBinaryOps.h \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/src/plugins/MatrixCwiseUnaryOps.h \
    GULLib/GNSSMathUtilityLib/DllMain/GNSSCommonStruct.h \
    GULLib/GNSSMathUtilityLib/DllMain/GNSSMathInterface.h \
    GULLib/GNSSMathUtilityLib/GNSSMatrix/CGNSSMatrix.h \
    GULLib/GNSSUtilityLibrary/Angle/CGNSSAngle.h \
    GULLib/GNSSUtilityLibrary/AppIFs/AppInterface.h \
    GULLib/GNSSUtilityLibrary/Coordinate/CGNSSCoord.h \
    GULLib/GNSSUtilityLibrary/DllMain/GNSSCommonDef.h \
    GULLib/GNSSUtilityLibrary/DllMain/GNSSDataStruct.h \
    GULLib/GNSSUtilityLibrary/DllMain/GNSSUtilityInterface.h \
    GULLib/GNSSUtilityLibrary/Ephemeris/CGNSSEphemeris.h \
    GULLib/GNSSUtilityLibrary/Time/TimeCalc/CCalcTime.h \
    GULLib/GNSSUtilityLibrary/Time/TimeSys/CBDSTime.h \
    GULLib/GNSSUtilityLibrary/Time/TimeSys/CGPSTime.h \
    GULLib/GNSSUtilityLibrary/Time/TimeSys/CGalileoTime.h \
    GULLib/GNSSUtilityLibrary/Time/TimeSys/CGlonassTime.h \
    GULLib/GNSSUtilityLibrary/Time/TimeSys/CTimeFactory.h \
    GULLib/GNSSUtilityLibrary/Time/TimeSys/CUTCTime.h \
    GULLib/GNSSUtilityLibrary/Time/TimeSys/IGNSSTime.h \
    RtkLib/rtklib.h \
    TestFunc.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

#CONFIG(debug, debug|release):LIBS += -LE:/Projects/GNSSUtilityLib/GNSSUtilityLibrary/GULTestTool/GULTestTool/RtkLib/debug \
#        -lRTKLIB
#CONFIG(release, debug|release):LIBS += -LE:/Projects/GNSSUtilityLib/GNSSUtilityLibrary/GULTestTool/GULTestTool/RtkLib/release \
#        -lRTKLIB

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    GULLib/GNSSMathUtilityLib/Eigen/eigen-eigen-323c052e1731/Eigen/CMakeLists.txt
