#include <stdio.h>
#include <stdlib.h>
#include "ft_check.h"
#include "ft_mem.h"
#include "ft_reg.h"
#include "ft_read.h"
#include "ft_ff.h"
#include "ft_exec.h"
#include "ft_print_result.h"

//1) declare hardware;
unsigned int	*inst_mem;
unsigned int	*data_mem;
unsigned int	*reg;
unsigned int	pc = 0;
unsigned int	branch = 0;

//1-1) need to make instance for IF_ID, etc by using structure;
IF_ID			*if_id;
ID_EX			*id_ex;
EX_MEM			*ex_mem;
MEM_WB			*mem_wb;

int	main(int argc, char **argv)
{
	ft_arg_check(argc, argv);
	inst_mem = ft_inst_mem();
	data_mem = ft_data_mem();
	reg = ft_reg();

	if_id = ft_if_id();
	id_ex = ft_id_ex();
	ex_mem = ft_ex_mem();
	mem_wb = ft_mem_wb();

	ft_read(argv[1]);
	ft_exec(atoi(argv[2]));
	ft_print_result(argc, argv);
}
