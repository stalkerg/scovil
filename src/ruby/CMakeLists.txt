
# CHANGE NAME OF SWIG INCLUDE FILE HERE.
SET_SOURCE_FILES_PROPERTIES(ruinterscovil.i PROPERTIES CPLUSPLUS ON)
SET_SOURCE_FILES_PROPERTIES(ruinterscovil.i PROPERTIES SWIG_FLAGS "-includeall")

SWIG_ADD_MODULE(ruinterscovil ruby ruinterscovil.i)

# CHANGE NAME OF RUBY MODULE HERE.
SWIG_LINK_LIBRARIES(ruinterscovil
   interscovil ${RUBY_LIBRARIES}
   )