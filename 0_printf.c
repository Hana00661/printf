int _printf(const char *format, ...)
{

    int my_print = 0;

    va_list my_args;
    va_start(my_args, format);

    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++; // jump to the next character

            if (*format == 'c')
            {
                int char = va_arg(my_args, int);
                write(1, &char, 1);
                my_print++;
            }
            else if (*format == 's')
            {
                char *str = va_arg(my_args, char*);
                int len = strlen(str);

                write(1, str, len);
                my_print += len;
            }
            else if (*format == '%')
            {
                char c = '%';
                write(1, &c, 1);
                my_print++;
            }
        }
        else
        {
            write(1, format, 1);
            my_print++;
        }

        format++;
    }

    va_end(my_args);
    return my_print;
}
