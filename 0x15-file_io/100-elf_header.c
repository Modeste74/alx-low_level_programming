#include "main.h"

void print_error(const char* message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

void print_elf_header(const Elf64_Ehdr* header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             %s\n", (header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n", (header->e_ident[EI_DATA] == ELFDATA2MSB) ? "big-endian" : "little-endian");
	printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n", (header->e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX - System V" : "Other");
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n", (header->e_type == ET_EXEC) ? "EXEC (Executable file)" : "Other");
	printf("  Entry point address:               0x%lx\n", header->e_entry);
}

int main(int argc, char* argv[])
{
	const char* filename;
	int fd;
	ssize_t read_bytes;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}
	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		print_error("Error: could not open file");
	}

	read_bytes = read(fd, &header, sizeof(header));
	if (read_bytes == -1)
	{
		print_error("Error: could not read ELF header");
	}
	if (read_bytes != sizeof(header) || header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 || header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("Error: not an ELF file");
	}
	
	print_elf_header(&header);
	
	close(fd);
	return (0);
}
