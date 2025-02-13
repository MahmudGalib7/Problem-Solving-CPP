#include <iostream>

using namespace std;

int main()
{
    // Keywprds avaiable in C++
    /*
        alignas
        alignof
        and
        and_eq
        asm
        auto
        bitand
        bitor
        bool
        break
        case
        catch
        char
        char8_t (since C++20)
        char16_t
        char32_t
        class
        compl
        concept (since C++20)
        const
        consteval (since C++20)
        constexpr
        constinit (since C++20)
        const_cast
        continue
        co_await (since C++20)
        co_return (since C++20)
        co_yield (since C++20)
        decltype
        default
        delete
        do
        double
        dynamic_cast
        else
        enum
        explicit
        export
        extern
        false
        float
        for
        friend
        goto
        if
        inline
        int
        long
        mutable
        namespace
        new
        noexcept
        not
        not_eq
        nullptr
        operator
        or
        or_eq
        private
        protected
        public
        register
        reinterpret_cast
        requires (since C++20)
        return
        short
        signed
        sizeof
        static
        static_assert
        static_cast
        struct
        switch
        template
        this
        thread_local
        throw
        true
        try
        typedef
        typeid
        typename
        union
        unsigned
        using
        virtual
        void
        volatile
        wchar_t
        while
        xor
        xor_eq
    */

    // int my_variable_name;   // conventional (separated by underscores/snake_case)
    // int my_function_name(); // conventional (separated by underscores/snake_case)

    // int myVariableName;   // conventional (intercapped/camelCase)
    // int myFunctionName(); // conventional (intercapped/camelCase)

    // int my variable name;   // invalid (whitespace not allowed)
    // int my function name(); // invalid (whitespace not allowed)

    // int MyVariableName;   // unconventional (should start with lower case letter)
    // int MyFunctionName(); // unconventional (should start with lower case letter)

    // int ccount	        Bad	        What does the c before “count” stand for?
    // int customerCount	Good	    Clear what we’re counting
    // int i	            Either	    Okay if use is trivial, bad otherwise
    // int index	        Either	    Okay if obvious what we’re indexing
    // int totalScore	    Either	    Okay if there’s only one thing being scored, otherwise too ambiguous
    // int _count	        Bad	        Do not start names with underscore
    // int count	        Either	    Okay if obvious what we’re counting
    // int data	            Bad	        What kind of data?
    // int time	            Bad	        Is this in seconds, minutes, or hours?
    // int minutesElapsed	Good	    Descriptive
    // int value1, value2	Either	    Can be hard to differentiate between the two
    // int numApples	    Good	    Descriptive
    // int monstersKilled	Good	    Descriptive
    // int x, y	            Either	    Okay if use is trivial, bad otherwise
}