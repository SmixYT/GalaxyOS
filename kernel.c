/*
* Copyright (C) 2024 Semen Scherbakov
* License: GPL version 2 or higher http://www.gnu.org/licenses/gpl.html
*/

void clearscreen(unsigned int screensize, char *vidptr) {
	unsigned int j = 0;
	while (j < screensize) {
		/* blank character */
		vidptr[j] = ' ';
		/* attribute-byte */
		vidptr[j+1] = 0x07;
		j = j + 2;
	}
}

void println(const char *str, unsigned int screensize, char *vidptr) {
	unsigned int j = 0;
	unsigned int i = 0;
	while (str[j] != '\0') {
		/* the character's ascii */
		vidptr[i] = str[j];
		/* attribute-byte: give character black bg and light grey fg */
		vidptr[i+1] = 0x07;
		++j;
		i = i + 2;
	}
}

void kmain(void)
{
	char *str = "Hello from GalaxyOS!";
	/* video memory begins at address 0xb8000 */
	char *vidptr = (char*)0xb8000;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int screensize;

	screensize = 80 * 25 * 2;

	clearscreen(screensize, vidptr);

	println(str, screensize, vidptr);

	return;
}

