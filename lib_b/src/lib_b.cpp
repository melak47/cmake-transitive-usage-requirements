#include <lib_b/lib_b.hpp>
#include <lib_a/lib_a.hpp>

namespace lib_b {

void b() {
	lib_a::a();
}

} // namespace lib_a
