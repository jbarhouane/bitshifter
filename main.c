#include <stdio.h>

// Function prototypes
void set_flag(unsigned int flag_holder[], int flag_position);

void unset_flag(unsigned int flag_holder[], int flag_position);

int check_flag(unsigned int flag_holder[], int flag_position);

void display_flags_as_array(unsigned int flag_holder);

void display_flags(unsigned int flag_holder[], int size);

int main(int argc, char* argv[])
{
	// Initialize an array to hold flags, with all bits set to 0
	unsigned int flag_holder[5] = { 0 };

	// Set specific flags based on the provided positions
	set_flag(flag_holder, 3);
	set_flag(flag_holder, 16);
	set_flag(flag_holder, 31);
	set_flag(flag_holder, 87);

	// Display the current state of the flags
	display_flags(flag_holder, 5);

	printf("\n\n");

	// Unset specific flags
	unset_flag(flag_holder, 31);
	unset_flag(flag_holder, 3);
	
	// Attempting to set flags beyond the array's capacity
	set_flag(flag_holder, 99);
	set_flag(flag_holder, 100);

	// Display the current state of the flags after changes
	display_flags(flag_holder, 5);

	return 0;
}

// Set a flag at the specified position
void set_flag(unsigned int flag_holder[], int flag_position)
{
	// Set the bit at flag_position by OR-ing with a bit mask
	flag_holder[flag_position / 32] = flag_holder[flag_position / 32] | (1 << flag_position % 32);
}

// Unset a flag at the specified position
void unset_flag(unsigned int flag_holder[], int flag_position)
{
	// Clear the bit at flag_position by AND-ing with a negated bit mask
	flag_holder[flag_position / 32] = flag_holder[flag_position / 32] & ~(1 << flag_position % 32);
}

// Check if a flag at the specified position is set
int check_flag(unsigned int flag_holder[], int flag_position)
{
	// Return the bit value at flag_position
	return (flag_holder[flag_position / 32] >> (flag_position % 32)) & 1;
}

// Display the flags of a single unsigned int as an array of bits
void display_flags_as_array(unsigned int flag_holder)
{
	// Iterate over each bit position
	for (int i = 0; i < 32; i++)
	{
		// Print each bit using the check_flag function
		printf("%d", check_flag(&flag_holder, i));
		// Insert a space every 4 bits for readability
		if (i % 4 == 3)
		{
			printf(" ");
		}
	}
	printf("\n");
}

// Display the flags for each unsigned int in the array
void display_flags(unsigned int flag_holder[], int size)
{
	// Iterate over the flag_holder array and display each element as an array of bits
	for (int i = 0; i < size; ++i)
	{
		display_flags_as_array(flag_holder[i]);
	}

}
