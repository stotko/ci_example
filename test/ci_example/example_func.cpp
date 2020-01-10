/*
 *  Copyright 2020 Patrick Stotko
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#include <gtest/gtest.h>

#include <ci_example/example_func.h>



class ci_example_example_func : public ::testing::Test
{
    protected:
        // Called before each test
        virtual void SetUp()
        {

        }

        // Called after each test
        virtual void TearDown()
        {

        }

};


// Explicit template instantiations
namespace ci_example
{

template
int
unused_func<int>(int);

}


TEST_F(ci_example_example_func, covered_func)
{
    EXPECT_EQ(3, ci_example::covered_func(3.14f));
}


TEST_F(ci_example_example_func, new_covered_func)
{
    EXPECT_EQ(16, ci_example::new_covered_func(4));
}


TEST_F(ci_example_example_func, yet_another_covered_func)
{
    EXPECT_EQ(8, ci_example::yet_another_covered_func(2));
}

