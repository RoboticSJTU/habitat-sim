#include "esp/bindings/Bindings.h"
#include <Magnum/PythonBindings.h>
#include "esp/assets/MeshData.h"

namespace py = pybind11;

namespace esp {
namespace assets {

void initAssetsBindings(pybind11::module& m) {
    // Bindings for MeshData
    py::class_<MeshData, MeshData::ptr>(m, "MeshData")
        .def(py::init<>())
        .def_readwrite("vbo", &MeshData::vbo, "Vertex positions")
        .def_readwrite("nbo", &MeshData::nbo, "Vertex normals")
        .def_readwrite("tbo", &MeshData::tbo, "Texture coordinates")
        .def_readwrite("cbo", &MeshData::cbo, "Vertex colors")
        .def_readwrite("ibo", &MeshData::ibo, "Index buffer");

    
}
}  // namespace assets
}  // namespace esp

