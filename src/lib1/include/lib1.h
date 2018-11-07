#pragma once

template<typename... Func>
struct Visitor : Func ...
{
    using Func::operator()...;
};

template<typename... Func>
Visitor(Func ...) -> Visitor<Func...>;

int lib1();