// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#include "test.h"
struct CustomOpsTestsApi
{
    SetupTest CustomOpsScenarioTestsClassSetup;
    SetupTest CustomOpsScenarioTestsGpuMethodSetup;
    VoidTest CustomOperatorFusion;
    VoidTest CustomKernelWithBuiltInSchema;
    VoidTest CustomKernelWithCustomSchema;
};
const CustomOpsTestsApi& getapi();

WINML_TEST_CLASS_BEGIN(CustomOpsScenarioTests)
WINML_TEST_CLASS_SETUP_CLASS(CustomOpsScenarioTestsClassSetup)
WINML_TEST_CLASS_BEGIN_TESTS
WINML_TEST(CustomOpsScenarioTests, CustomKernelWithBuiltInSchema)
WINML_TEST(CustomOpsScenarioTests, CustomKernelWithCustomSchema)
WINML_TEST_CLASS_END()

WINML_TEST_CLASS_BEGIN(CustomOpsScenarioGpuTests)
WINML_TEST_CLASS_SETUP_CLASS(CustomOpsScenarioTestsClassSetup)
WINML_TEST_CLASS_SETUP_METHOD(CustomOpsScenarioTestsGpuMethodSetup)
WINML_TEST_CLASS_BEGIN_TESTS
WINML_TEST(CustomOpsScenarioGpuTests, CustomOperatorFusion)
WINML_TEST_CLASS_END()