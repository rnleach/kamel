#include <locale.h>

#include <glib.h> // For tests

#include "../src/kamel.h"

/*-------------------------------------------------------------------------------------------------
 *
 *                                      Main Test Runner
 *
 *-----------------------------------------------------------------------------------------------*/
int
main(int argc, char *argv[static 1])
{
    setlocale(LC_ALL, "");
    g_test_init(&argc, &argv, NULL);

//    g_test_add_func("/kamel/a_function", test_a_function);

    //
    // Run tests
    //
    return g_test_run();
}
