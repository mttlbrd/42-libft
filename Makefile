# --- Variabili ---
# Nome della libreria statica
NAME = libft.a

# Compilatore C da utilizzare
CC = cc

# Flag di compilazione: abilita tutti i warning e li tratta come errori
CFLAGS = -Wall -Wextra -Werror

# Comando per creare archivi/librerie statiche
AR = ar

# Flag per ar: r=inserisci file, c=crea archivio, s=crea indice dei simboli
ARFLAGS = rcs

# Lista di tutti i file sorgente .c del progetto
SRCS =	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
		ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
		ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
		ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

# Converte automaticamente i nomi .c in .o
OBJS = $(SRCS:.c=.o)

# --- Regole Principali ---
# Regola di default: viene eseguita quando si digita solo "make"
all: $(NAME)

# Crea la libreria statica dai file oggetto
# Dipendenza: tutti i file .o devono esistere prima
$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

# Regola pattern: definisce come compilare qualsiasi file .c in .o
# $< = primo prerequisito (il file .c)
# $@ = target (il file .o da creare)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# --- Regole di Pulizia ---
# Rimuove solo i file oggetto (.o)
clean:
	rm -f $(OBJS)

# Pulizia completa: rimuove file oggetto E la libreria
fclean: clean
	rm -f $(NAME)

# Ricompila tutto da zero: pulisce completamente e poi ricompila
re: fclean all

# Dichiara che queste non sono file reali ma comandi
# Evita conflitti se esistessero file con questi nomi
.PHONY: all clean fclean re
