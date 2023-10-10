idf_component_register(SRCS "main.c"
                    INCLUDE_DIRS "."
                    REQUIRES 
                    soc 
                    mygpio 
                    myadc 
                    mypwm 
                    my_mcpwm)

