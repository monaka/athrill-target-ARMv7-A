#include "arm_pseudo_code_func.h"

int arm_op_exec_arm_add_imm(struct TargetCore *core,  arm_add_imm_input_type *in, arm_add_imm_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_add_reg(struct TargetCore *core,  arm_add_reg_input_type *in, arm_add_reg_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_mla(struct TargetCore *core,  arm_mla_input_type *in, arm_mla_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_adc_reg(struct TargetCore *core,  arm_adc_reg_input_type *in, arm_adc_reg_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_sub_imm(struct TargetCore *core,  arm_sub_imm_input_type *in, arm_sub_imm_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_sub_reg(struct TargetCore *core,  arm_sub_reg_input_type *in, arm_sub_reg_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_cmp_imm(struct TargetCore *core,  arm_cmp_imm_input_type *in, arm_cmp_imm_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_cmn_imm(struct TargetCore *core,  arm_cmn_imm_input_type *in, arm_cmn_imm_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_cmp_reg(struct TargetCore *core,  arm_cmp_reg_input_type *in, arm_cmp_reg_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_adr_imm(struct TargetCore *core,  arm_adr_imm_input_type *in, arm_adr_imm_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_add_spimm(struct TargetCore *core,  arm_add_spimm_input_type *in, arm_add_spimm_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_subs_pclr(struct TargetCore *core,  arm_subs_pclr_input_type *in, arm_subs_pclr_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_mov_imm(struct TargetCore *core,  arm_mov_imm_input_type *in, arm_mov_imm_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_mvn_imm(struct TargetCore *core,  arm_mvn_imm_input_type *in, arm_mvn_imm_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_mov_reg(struct TargetCore *core,  arm_mov_reg_input_type *in, arm_mov_reg_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_mvn_reg(struct TargetCore *core,  arm_mvn_reg_input_type *in, arm_mvn_reg_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_bl_imm(struct TargetCore *core,  arm_bl_imm_input_type *in, arm_bl_imm_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_b_imm(struct TargetCore *core,  arm_b_imm_input_type *in, arm_b_imm_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_bx_reg(struct TargetCore *core,  arm_bx_reg_input_type *in, arm_bx_reg_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_bl_reg(struct TargetCore *core,  arm_bl_reg_input_type *in, arm_bl_reg_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_ldr_imm(struct TargetCore *core,  arm_ldr_imm_input_type *in, arm_ldr_imm_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_ldr_literal(struct TargetCore *core,  arm_ldr_literal_input_type *in, arm_ldr_literal_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_ldrh_imm(struct TargetCore *core,  arm_ldrh_imm_input_type *in, arm_ldrh_imm_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_ldrsh_imm(struct TargetCore *core,  arm_ldrsh_imm_input_type *in, arm_ldrsh_imm_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_ldrd_imm(struct TargetCore *core,  arm_ldrd_imm_input_type *in, arm_ldrd_imm_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_ldr_reg(struct TargetCore *core,  arm_ldr_reg_input_type *in, arm_ldr_reg_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_push(struct TargetCore *core,  arm_push_input_type *in, arm_push_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_stmfd(struct TargetCore *core,  arm_stmfd_input_type *in, arm_stmfd_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_stm(struct TargetCore *core,  arm_stm_input_type *in, arm_stm_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_pop(struct TargetCore *core,  arm_pop_input_type *in, arm_pop_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_ldm(struct TargetCore *core,  arm_ldm_input_type *in, arm_ldm_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_str_imm(struct TargetCore *core,  arm_str_imm_input_type *in, arm_str_imm_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_strd_imm(struct TargetCore *core,  arm_strd_imm_input_type *in, arm_strd_imm_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_str_reg(struct TargetCore *core,  arm_str_reg_input_type *in, arm_str_reg_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_nop(struct TargetCore *core,  arm_nop_input_type *in, arm_nop_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_msr_imm(struct TargetCore *core,  arm_msr_imm_input_type *in, arm_msr_imm_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_msr2_imm(struct TargetCore *core,  arm_msr2_imm_input_type *in, arm_msr2_imm_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_msr2_reg(struct TargetCore *core,  arm_msr2_reg_input_type *in, arm_msr2_reg_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_mrs(struct TargetCore *core,  arm_mrs_input_type *in, arm_mrs_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_mcr(struct TargetCore *core,  arm_mcr_input_type *in, arm_mcr_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_mrc(struct TargetCore *core,  arm_mrc_input_type *in, arm_mrc_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_bic_imm(struct TargetCore *core,  arm_bic_imm_input_type *in, arm_bic_imm_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_bic_reg(struct TargetCore *core,  arm_bic_reg_input_type *in, arm_bic_reg_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_bic_shift_reg(struct TargetCore *core,  arm_bic_shift_reg_input_type *in, arm_bic_shift_reg_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_orr_imm(struct TargetCore *core,  arm_orr_imm_input_type *in, arm_orr_imm_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_eor_imm(struct TargetCore *core,  arm_eor_imm_input_type *in, arm_eor_imm_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_orr_reg(struct TargetCore *core,  arm_orr_reg_input_type *in, arm_orr_reg_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_eor_reg(struct TargetCore *core,  arm_eor_reg_input_type *in, arm_eor_reg_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_movt(struct TargetCore *core,  arm_movt_input_type *in, arm_movt_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_lsl_imm(struct TargetCore *core,  arm_lsl_imm_input_type *in, arm_lsl_imm_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_lsl_reg(struct TargetCore *core,  arm_lsl_reg_input_type *in, arm_lsl_reg_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_lsr_imm(struct TargetCore *core,  arm_lsr_imm_input_type *in, arm_lsr_imm_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_lsr_reg(struct TargetCore *core,  arm_lsr_reg_input_type *in, arm_lsr_reg_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_bfc(struct TargetCore *core,  arm_bfc_input_type *in, arm_bfc_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_and_imm(struct TargetCore *core,  arm_and_imm_input_type *in, arm_and_imm_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_and_reg(struct TargetCore *core,  arm_and_reg_input_type *in, arm_and_reg_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_uxt(struct TargetCore *core,  arm_uxt_input_type *in, arm_uxt_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_rsb_reg(struct TargetCore *core,  arm_rsb_reg_input_type *in, arm_rsb_reg_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_rsb_imm(struct TargetCore *core,  arm_rsb_imm_input_type *in, arm_rsb_imm_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_sbc_reg(struct TargetCore *core,  arm_sbc_reg_input_type *in, arm_sbc_reg_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_mul(struct TargetCore *core,  arm_mul_input_type *in, arm_mul_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_smmul(struct TargetCore *core,  arm_smmul_input_type *in, arm_smmul_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_smull(struct TargetCore *core,  arm_smull_input_type *in, arm_smull_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_tst_imm(struct TargetCore *core,  arm_tst_imm_input_type *in, arm_tst_imm_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_tst_reg(struct TargetCore *core,  arm_tst_reg_input_type *in, arm_tst_reg_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_sxtb(struct TargetCore *core,  arm_sxtb_input_type *in, arm_sxtb_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_sxth(struct TargetCore *core,  arm_sxth_input_type *in, arm_sxth_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_asr_imm(struct TargetCore *core,  arm_asr_imm_input_type *in, arm_asr_imm_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_srs(struct TargetCore *core,  arm_srs_input_type *in, arm_srs_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_clz(struct TargetCore *core,  arm_clz_input_type *in, arm_clz_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_rfe(struct TargetCore *core,  arm_rfe_input_type *in, arm_rfe_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_wfi(struct TargetCore *core,  arm_wfi_input_type *in, arm_wfi_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_vadd_freg(struct TargetCore *core,  arm_vadd_freg_input_type *in, arm_vadd_freg_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_vsub_freg(struct TargetCore *core,  arm_vsub_freg_input_type *in, arm_vsub_freg_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_vmul_freg(struct TargetCore *core,  arm_vmul_freg_input_type *in, arm_vmul_freg_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_vdiv_freg(struct TargetCore *core,  arm_vdiv_freg_input_type *in, arm_vdiv_freg_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_vldr(struct TargetCore *core,  arm_vldr_input_type *in, arm_vldr_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_vcvt_df(struct TargetCore *core,  arm_vcvt_df_input_type *in, arm_vcvt_df_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_vcvt_fi(struct TargetCore *core,  arm_vcvt_fi_input_type *in, arm_vcvt_fi_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_vstr(struct TargetCore *core,  arm_vstr_input_type *in, arm_vstr_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_vcmp(struct TargetCore *core,  arm_vcmp_input_type *in, arm_vcmp_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_vmrs(struct TargetCore *core,  arm_vmrs_input_type *in, arm_vmrs_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_vmov_imm(struct TargetCore *core,  arm_vmov_imm_input_type *in, arm_vmov_imm_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_vmov_reg(struct TargetCore *core,  arm_vmov_reg_input_type *in, arm_vmov_reg_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_vneg(struct TargetCore *core,  arm_vneg_input_type *in, arm_vneg_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_vmov_sreg(struct TargetCore *core,  arm_vmov_sreg_input_type *in, arm_vmov_sreg_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_vpush(struct TargetCore *core,  arm_vpush_input_type *in, arm_vpush_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
int arm_op_exec_arm_vpop(struct TargetCore *core,  arm_vpop_input_type *in, arm_vpop_output_type *out)
{
	int ret = 0;
	uint32 result;
	uint32 *status = cpu_get_status(core);
	out->next_address = core->pc + INST_ARM_SIZE;
	out->passed = ConditionPassed(in->cond, *status);
	if (out->passed != FALSE) {
        result = in->Rm.regData;
		cpu_set_reg(core, in->Rd.regId, result);
		if (in->Rd.regId != CpuRegId_PC) {
            ret = 0;
		}
		else {
			ret = ALUWritePC(&out->next_address, status, result);
		}
		out->Rd.regData = result;
	}
	out->status = *status;
	return ret;
}
