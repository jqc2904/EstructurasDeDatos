##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=AMAZON
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :="C:/Users/JORGE/OneDrive/Escritorio/UNIVERSIDAD/3 CUATRIMESTRE/EEDD/EEDD"
ProjectPath            :="C:/Users/JORGE/OneDrive/Escritorio/UNIVERSIDAD/3 CUATRIMESTRE/EEDD/EEDD/AMAZON"
IntermediateDirectory  :=../build-$(WorkspaceConfiguration)/AMAZON
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=JORGE
Date                   :=27/10/2023
CodeLitePath           :="C:/Program Files/CodeLite"
MakeDirCommand         :=mkdir
LinkerName             :=C:/TDM-GCC-64/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=C:/Users/JORGE/OneDrive/Escritorio/UNIVERSIDAD/3 CUATRIMESTRE/EEDD/EEDD/build-$(WorkspaceConfiguration)/bin
OutputFile             :=..\build-$(WorkspaceConfiguration)\bin\$(ProjectName).exe
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := C:/TDM-GCC-64/bin/ar.exe -r
CXX      := C:/TDM-GCC-64/bin/g++.exe
CC       := C:/TDM-GCC-64/bin/gcc.exe
CXXFLAGS :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
CFLAGS   :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/NodoLista.cpp$(ObjectSuffix) $(IntermediateDirectory)/Gestor.cpp$(ObjectSuffix) $(IntermediateDirectory)/Lista.cpp$(ObjectSuffix) $(IntermediateDirectory)/NodoPila.cpp$(ObjectSuffix) $(IntermediateDirectory)/Cola.cpp$(ObjectSuffix) $(IntermediateDirectory)/NodoCola.cpp$(ObjectSuffix) $(IntermediateDirectory)/Pedido.cpp$(ObjectSuffix) $(IntermediateDirectory)/Pila.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@if not exist "$(OutputDirectory)" $(MakeDirCommand) "$(OutputDirectory)"

$(IntermediateDirectory)/.d:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/NodoLista.cpp$(ObjectSuffix): NodoLista.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/JORGE/OneDrive/Escritorio/UNIVERSIDAD/3 CUATRIMESTRE/EEDD/EEDD/AMAZON/NodoLista.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/NodoLista.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/NodoLista.cpp$(PreprocessSuffix): NodoLista.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/NodoLista.cpp$(PreprocessSuffix) NodoLista.cpp

$(IntermediateDirectory)/Gestor.cpp$(ObjectSuffix): Gestor.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/JORGE/OneDrive/Escritorio/UNIVERSIDAD/3 CUATRIMESTRE/EEDD/EEDD/AMAZON/Gestor.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Gestor.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Gestor.cpp$(PreprocessSuffix): Gestor.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Gestor.cpp$(PreprocessSuffix) Gestor.cpp

$(IntermediateDirectory)/Lista.cpp$(ObjectSuffix): Lista.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/JORGE/OneDrive/Escritorio/UNIVERSIDAD/3 CUATRIMESTRE/EEDD/EEDD/AMAZON/Lista.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Lista.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Lista.cpp$(PreprocessSuffix): Lista.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Lista.cpp$(PreprocessSuffix) Lista.cpp

$(IntermediateDirectory)/NodoPila.cpp$(ObjectSuffix): NodoPila.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/JORGE/OneDrive/Escritorio/UNIVERSIDAD/3 CUATRIMESTRE/EEDD/EEDD/AMAZON/NodoPila.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/NodoPila.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/NodoPila.cpp$(PreprocessSuffix): NodoPila.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/NodoPila.cpp$(PreprocessSuffix) NodoPila.cpp

$(IntermediateDirectory)/Cola.cpp$(ObjectSuffix): Cola.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/JORGE/OneDrive/Escritorio/UNIVERSIDAD/3 CUATRIMESTRE/EEDD/EEDD/AMAZON/Cola.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Cola.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Cola.cpp$(PreprocessSuffix): Cola.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Cola.cpp$(PreprocessSuffix) Cola.cpp

$(IntermediateDirectory)/NodoCola.cpp$(ObjectSuffix): NodoCola.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/JORGE/OneDrive/Escritorio/UNIVERSIDAD/3 CUATRIMESTRE/EEDD/EEDD/AMAZON/NodoCola.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/NodoCola.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/NodoCola.cpp$(PreprocessSuffix): NodoCola.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/NodoCola.cpp$(PreprocessSuffix) NodoCola.cpp

$(IntermediateDirectory)/Pedido.cpp$(ObjectSuffix): Pedido.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/JORGE/OneDrive/Escritorio/UNIVERSIDAD/3 CUATRIMESTRE/EEDD/EEDD/AMAZON/Pedido.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Pedido.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Pedido.cpp$(PreprocessSuffix): Pedido.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Pedido.cpp$(PreprocessSuffix) Pedido.cpp

$(IntermediateDirectory)/Pila.cpp$(ObjectSuffix): Pila.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/JORGE/OneDrive/Escritorio/UNIVERSIDAD/3 CUATRIMESTRE/EEDD/EEDD/AMAZON/Pila.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Pila.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Pila.cpp$(PreprocessSuffix): Pila.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Pila.cpp$(PreprocessSuffix) Pila.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/JORGE/OneDrive/Escritorio/UNIVERSIDAD/3 CUATRIMESTRE/EEDD/EEDD/AMAZON/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


