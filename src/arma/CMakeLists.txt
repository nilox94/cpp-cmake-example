add_definitions("-DH5_PYTHON_FMT") # in case of using Python generated h5df, otherwise MATLAB is assumed

find_package(hdf5 CONFIG REQUIRED)
find_package(Armadillo CONFIG REQUIRED)

macro(COPY_FILE_IF_CHANGED in_file out_file target)
  if(${in_file} IS_NEWER_THAN ${out_file})
    add_custom_command(
      TARGET ${target}
      POST_BUILD
      COMMAND ${CMAKE_COMMAND}
      ARGS -E copy ${CMAKE_CURRENT_SOURCE_DIR}/${in_file} ${CMAKE_CURRENT_BINARY_DIR}/${out_file}
    )
	endif()
endmacro()

add_executable(save_load save_load.cc)
add_executable(load_groups load_groups.cc)
add_executable(main main.cc)

target_link_libraries(save_load PRIVATE ${ARMADILLO_LIBRARIES} hdf5::hdf5-static hdf5::hdf5_hl-static)
target_link_libraries(load_groups PRIVATE ${ARMADILLO_LIBRARIES} hdf5::hdf5-static hdf5::hdf5_hl-static)
target_link_libraries(main PRIVATE ${ARMADILLO_LIBRARIES} hdf5::hdf5-static hdf5::hdf5_hl-static)

copy_file_if_changed(matrices.h5 matrices.h5 load_groups)
copy_file_if_changed(16BCN_1024samples_2048sync_4_9221Q_44100fs.h5 16bcn.h5 16bcn)
