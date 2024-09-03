#include "storage_automation.h"

int main() {
    CloudStorageAutomation csa;

    csa.provisionStorage();  // Step 1: Provision initial storage
    csa.monitorStorage();    // Step 2: Monitor current storage usage
    csa.scaleStorage();      // Step 3: Scale storage as needed

    return 0;
}
