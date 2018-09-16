#pragma once

#include <pyu/test_lib.h>
#include <lsi_test.h>
#include <pyu/array.h>

class ArrayTests final : public LinearStorageInterfaceTests
{
protected:
    pyu::LinearStorageInterface<int>* createTestLSI()
    {
        return new pyu::Array<int, 10>();
    }

    void RunTests() final
    {
        LinearStorageInterfaceTests::RunTests();
        ADD_TEST(ArrayTests::StaticMemoryTest);
        ADD_TEST(ArrayTests::AssignmentTest);
        ADD_TEST(ArrayTests::CopyTest);
    }

private:
    bool StaticMemoryTest();
    bool AssignmentTest();
    bool CopyTest();

    static Test_Registrar<ArrayTests> registrar;
}; 