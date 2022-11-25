#@waheed haitham waheed
CC = arm-none-eabi-
SFLAGS = -g -mcpu=arm926ej-s 
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
AS = $(wildcard *.s)
ASOBJ = $(AS:.s=.o)
Project_name=learn-in-depth

all:$(Project_name).bin
	@echo "======build is done========"

%.o: %.s
	$(CC)as.exe $(SFLAGS) $< -o $@

%.o: %.c
	$(CC)gcc.exe -c -I . $(SFLAGS) $< -o $@

$(Project_name).elf: $(OBJ) $(ASOBJ)
	$(CC)ld.exe -T linker_script.ld $(OBJ) $(ASOBj) -o $@


$(Project_name).bin: $(Project_name).elf
	
	$(CC)objcopy.exe -O binary $< $@


clean:
	rm *.elf *.bin *.o 
	@echo "everything is clean" 