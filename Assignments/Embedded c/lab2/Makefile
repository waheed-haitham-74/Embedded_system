#@waheed haitham waheed
CC = arm-none-eabi-
CFLAGS = -mcpu=cortex-m3 -gdwarf-2 
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
AS = $(wildcard *.s)
ASOBJ = $(AS:.s=.o)
Project_name=learn-in-depth_cortex_m3
all:$(Project_name).hex


%.o:%.c
	$(CC)gcc.exe -c -I . $(SFLAGS) $< -o $@

$(Project_name).elf:$(OBJ) $(ASOBJ)
	$(CC)ld.exe -T linker_script.ld $(OBJ) $(ASOBj) -o $@ -Map=Map_file.map


$(Project_name).hex: $(Project_name).elf
	
	$(CC)objcopy.exe -O binary $< $@


clean:
	rm -rf *.o *~ *.elf *.hex
	@echo "Everything clean"  