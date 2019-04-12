#ifdef DECLARE_INSN
DECLARE_INSN(ss_cfg, 0xb, 0x7fff)
DECLARE_INSN(ss_cfg_port, 0x100b, 0x707f)
DECLARE_INSN(ss_ctx, 0x200b, 0x707f)
DECLARE_INSN(ss_fill_mode, 0x300b, 0x707f)
DECLARE_INSN(ss_stride, 0x7b, 0x707f)
DECLARE_INSN(ss_add_port, 0x2b, 0x707f)
DECLARE_INSN(ss_scr_rd, 0x102b, 0x707f)
DECLARE_INSN(ss_dma_rd, 0x202b, 0x707f)
DECLARE_INSN(ss_set_iter, 0x207b, 0xfff07fff)
DECLARE_INSN(ss_const, 0x402b, 0x707f)
DECLARE_INSN(ss_recv, 0x502b, 0x707f)
DECLARE_INSN(ss_garb, 0x305b, 0x707f)
DECLARE_INSN(ss_wr_scr, 0x105b, 0x707f)
DECLARE_INSN(ss_wr_dma, 0x405b, 0x707f)
DECLARE_INSN(ss_wr_rd, 0x505b, 0x707f)
DECLARE_INSN(ss_rem_port, 0x205b, 0x707f)
DECLARE_INSN(ss_ind, 0x507b, 0x707f)
DECLARE_INSN(ss_ind_wr, 0x607b, 0x707f)
DECLARE_INSN(ss_atom_op, 0x602b, 0x707f)
DECLARE_INSN(ss_const_scr, 0x605b, 0x707f)
DECLARE_INSN(ss_cfg_ind, 0x707b, 0x707f)
DECLARE_INSN(ss_cfg_atom_op, 0x705b, 0x707f)
DECLARE_INSN(ss_wait_df, 0x307b, 0x7fff)
DECLARE_INSN(ss_wait, 0x407b, 0x707f)
#endif //DECLARE_INSN
