#include <cstdio>
#include <cstdlib>

#include "etl/algorithm.h"
//#include "etl/bitset.h" // trouble maker in C++03 mode
#include "etl/deque.h"
#include "etl/flat_map.h"
#include "etl/forward_list.h"
#include "etl/list.h"
#include "etl/memory.h"
#include "etl/scheduler.h"
#include "etl/vector.h"
#include "etl/version.h"

int main() {

#ifdef ETL_NO_NULLPTR_SUPPORT

    std::printf("%s\n", "ETL_NO_NULLPTR_SUPPORT is defined");

#   if ETL_NO_NULLPTR_SUPPORT

    std::printf("%s\n", "ETL_NO_NULLPTR_SUPPORT is true");

#   else

    std::printf("%s\n", "ETL_NO_NULLPTR_SUPPORT is false");

#   endif

#else // ETL_NO_NULLPTR_SUPPORT

    std::printf("%s\n", "*No* ETL_NO_NULLPTR_SUPPORT defined");

#endif

    etl::vector<int, 10> v10;
    int const mc = static_cast<int>(v10.capacity());
    for (int i = 0; i < mc; i++)
        v10.push_back(i);
    etl::sort(v10.rbegin(), v10.rend());
    for (int i = 0, e = static_cast<int>(v10.size()); i < e; ++i)
        std::printf("%d ", v10[i]);
    std::printf("\n");
    std::fflush(stdout);
    return EXIT_SUCCESS;
}
