# Structures, typedef

# structures

A structure is a composite data type that allows you to group together variables of different data types under a single name. 
Structures are used to represent a collection of related data elements, much like a record in other programming languages. 
Each variable in a structure is referred to as a "member" or "field."

struct struct_name {
    // Member declarations
    data_type member1;
    data_type member2;
    // ...
};

# typedef

used to create custom type aliases, allowing you to define new names for existing data types, including structures, pointers, and more. 
This feature enhances code readability and can make code maintenance easier by giving descriptive names to complex data types or simplifying their usage.

typedef existing_data_type new_data_type_name;
