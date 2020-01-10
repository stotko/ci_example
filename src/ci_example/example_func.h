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

#ifndef CI_EXAMPLE_FUNC_H
#define CI_EXAMPLE_FUNC_H



namespace ci_example
{

inline int
covered_func(float x)
{
    return static_cast<int>(x);
}

inline int
new_covered_func(int x)
{
    return x * x;
}

inline int
yet_another_covered_func(int x)
{
    return x * x * x;
}

template <typename T>
T
unused_func(T t)
{
    return t;
}

}



#endif // CI_EXAMPLE_FUNC_H
