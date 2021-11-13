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

//    g_test_add_func("/courier/create_destroy", test_create_destroy);
//    g_test_add_func("/courier/single_threaded", test_single_threaded);
//    g_test_add_func("/courier/single_producer_multiple_consumer",
//                    test_single_producer_multiple_consumer);
//    g_test_add_func("/courier/multiple_producer_single_consumer",
//                    test_multiple_producer_single_consumer);
//    g_test_add_func("/courier/multiple_producer_multiple_consumer",
//                    test_multiple_producer_multiple_consumer);
//    g_test_add_func("/courier/test_abort_sending_when_no_senders_registered",
//                    test_abort_sending_when_no_senders_registered);

    //
    // Run tests
    //
    return g_test_run();
}
