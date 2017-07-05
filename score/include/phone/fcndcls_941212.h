/* file fcndcls.h              */
/* local function declarations */

#ifndef FCNDCLS_HEADER
#define FCNDCLS_HEADER

extern void           add_add_file(pcodeset *p1, char *full_fname, int *perr);
extern int            add_pcode_element(pcodeset *p1, pcode_element *px, int *perr);
extern ARC_LIST_ATOM *add_to_arc_list(ARC_LIST_ATOM *list_atom, ARC *arc, int *perr);
extern int            add_to_auxtab(int i, int j, ALIGNMENT_INT *pal);
extern char          *adjust_type_case(char *s, pcodeset *pcode);
extern int            aldist_static(ALIGNMENT_INT *pal, int *perr);
extern int            aldist2(ALIGNMENT_INT *pt1, int (*w) (int, int, pcodeset *, int *), int return_alignment, ALIGNMENT_INT *pt2, int *perr);
extern int            aldistsm(ALIGNMENT_INT *aln_in, int (*w) (int, int, pcodeset *, int *), int return_alignment, double fom_threshold, ALIGNMENT_INT *aln_out, int *perr);
extern int            aldistn1(NODE *node, ALIGNMENT_INT *aln_base, int (*wod) (int, int, pcodeset *, int *), int return_alignment, ALIGNMENT_INT *aln_best, int *pathn, int *perr);
extern double         aldistt1(ALIGNMENT_INT *pt1, WTOKE_STR1 *ref_segs, WTOKE_STR1 *hyp_segs, int return_alignment, ALIGNMENT_INT *pt2, int *perr);
extern int            aldist2l(char *astr, char *bstr);
extern boolean        aleq1(ALIGNMENT_INT *p1, ALIGNMENT_INT *p2);
extern void           alignment_i_to_s(ALIGNMENT_INT *pia1, ALIGNMENT_CHR *psa1, int *perr);
extern void           aln_i_to_s_fancy(ALIGNMENT_INT *pia1, ALIGNMENT_CHR *psa1, int *perr);
extern void           aln_i_to_s_fancy2(ALIGNMENT_INT *pia1, ALIGNMENT_CHR *psa1, int *perr);
extern void           align_and_tally(ALIGNMENT_INT *pn1, int wb, TALLY_STR *tally_table, int *perr);
extern void           alignment_s_to_i(ALIGNMENT_INT *pia1, ALIGNMENT_CHR *psa1, pcodeset *pcode1, int *perr);
extern void           alignment_s_to_i3(void (*encode) (char*,pcodeset*,int*,int*,int*),ALIGNMENT_INT *pia1, ALIGNMENT_CHR *psa1, pcodeset *pcode1, int *perr);
extern boolean        all_caps(char *sx);
extern boolean        all_lower(char *sx);
extern char          *apply_rules1(char *pb, char *pa, RULESET1 *rset, int *perr);
extern boolean        arcs_equal(ARC *arc1, ARC *arc2);
extern char          *ascii_str(char *sx, PCIND_T ichr, pcodeset *pcode, ALIGNMENT_INT *pal);
extern boolean        atobool(char *s);
extern char          *bits(long int x, int nbits, char *sx);
extern char          *bool_print(boolean x);
boolean               bound(char c);
extern void           calc_aln_errs1(ALIGNMENT_INT *al1, int *sub, int *ins, int *del);
extern void          *calloc_safe(size_t nobj, size_t size, char *calling_proc);
extern void           chunk_out(FILE *fp, char *s, int line_width, char continuation_chr);
extern void           chunk_out2(FILE *fp, char *s, int line_width, char *cc1, char continuation_chr);
extern char          *clean_up2(char *w, char *allowed);
extern void           compact(ALIGNMENT_INT *pal, int *ndel);
extern ALIGNMENT_INT *copy_int_al(ALIGNMENT_INT *p2, ALIGNMENT_INT *p1);
extern boolean        coronal(char c);
extern void           db_enter_msg(char *proc, int level);
extern void           db_leave_msg(char *proc, int level);
extern char          *dealt2(char *sy, char *sx, boolean zap_if_null, boolean zap_if_nonlex,boolean dont_pick_null, boolean dont_pick_nonlex,int *perr);
extern void           decode2(char *psex, int lpsex, pcodeset *pc1, int *psinin, int *plinin, int *perr);
extern void           deflag1_node_r(NODE *node);
extern void           deflag2_node_r(NODE *node);
extern ARC_LIST_ATOM *del_from_arc_list(ARC_LIST_ATOM **plist, ARC *arc, int *perr);
extern char          *del_eol(char *ps);
extern void           dump_arc(ARC *arc);
extern void           dump_arc_list(ARC_LIST_ATOM *p);
extern void           dump_arc_list2(ARC *arcs[MAX_ARCS], int n_arcs);
extern void           dump_auxtab(ALIGNMENT_INT *pal);
extern void           dump_chr_alignment(ALIGNMENT_CHR *p1);
extern void           dump_code_table(TABLE_OF_CODESETS *ps1);
extern void           dump_hash_pars(HASH_PARAMETERS *hpars);
extern void           dump_int_alignment(ALIGNMENT_INT *p1);
extern void           dump_int_alignment3(ALIGNMENT_INT *p1, pcodeset *pcode);
extern void           dump_network(NETWORK *net);
extern void           dump_network_arcs(NETWORK *net);
extern void           dump_node(NODE *node);
extern void           dump_node_r(NODE *node);
extern void           dump_node_arcs_r(NODE *node);
extern void           dump_node_list2(NODE *nodes[MAX_NODES], int n_nodes);
extern void           dump_nstr(int *nstr);
extern void           dump_pcode2(pcodeset *p1);
extern void           dump_pcode3(pcodeset *p1);
extern void           dump_ppf1(pcodeset *pcode);
extern void           dump_ppf2(pcodeset *pcode);
extern void           dump_rules1(RULESET1 *rset);
extern void           dump_smtab(SM_TAB_STR2 *smtab);
extern void           dump_tally1(TALLY_STR *table);
extern void           dump_word_tokens(WTOKE_STR1 *word_tokens, int lim);
extern void           encode_arcs_r(NODE *node, pcodeset *pcode, int *perr);
extern void           encode_lcs(pcodeset *p1, int *perr);
extern void           encode2(char *psex_in, pcodeset *pcstr, int *psinin, int *plinin, int *perr);
extern boolean        end_comment(char *sp);
extern boolean        end_crosstalk(char *sp);
extern boolean        end_mispron(char *sp);
extern boolean        end_overlap(char *sp);
extern boolean        end_unsure(char *sp);
extern char          *expenv(char *s, int slength);
extern char          *extract_fname_base(char *fname, char *fname_base);
extern void           fatal_error(char *reporting_procedure, char *msg, int error_level);
extern void           find_next_token(SUBSTRING *x, SUBSTRING *y);
extern void           find_next_token2(SUBSTRING *x, SUBSTRING *y);
extern void           find_next_token3(SUBSTRING *x, SUBSTRING *y);
extern float          float_n_choose_r(int n, int r);
extern void           find_sm2(ALIGNMENT_INT *pal, double fom_threshold, SM_TAB_STR2 *smtab);
extern void           free_al_chr(ALIGNMENT_CHR *p);
extern void           free_al_int(ALIGNMENT_INT *p);
extern void           free_code_table(TABLE_OF_CODESETS *p);
extern void           free_mark_file(WTOKE_STR1 *word_tokens);
extern void           free_network(NETWORK *net);
extern void           free_pcode(pcodeset *p);
extern void           free_rules1(RULESET1 *rset);
extern void           free_str(char *s);
boolean               fric1(char *p);
extern void           gct_analyze_line(char *pline, TABLE_OF_CODESETS *ps1, int *perr);
extern void           gct_analyze_line2(char *pline, TABLE_OF_CODESETS *ps1, int use_add_file, int *perr);
extern void           get_code_table(TABLE_OF_CODESETS *ps1, char *fname, int *perr);
extern void           get_code_table2(TABLE_OF_CODESETS *ps1, char *fname, int use_add_file, int *perr);
extern void           get_comment_flag(char *s, char *comment_flag);
extern char          *get_conv_id(char *conv_id,char *mark_file_name);
extern int            getline(char *line, int lmax);
extern void           get_mark_file(char *fname, WTOKE_STR1 *word_tokens, int *perr);
extern void           get_next_alignment_chr(FILE *cfp, ALIGNMENT_CHR *palc1, int *p_at_end);
extern void           get_next_aln_chr2(FILE *fp_ref, FILE *fp_hyp, ALIGNMENT_CHR *palc1, int *p_at_end);
extern void           get_pcode3(pcodeset *p1, char *path, char *fname, int *perr);
extern void           get_pcode4(pcodeset *p1, char *path, char *fname, int use_add_file, int *perr);
extern void           get_pcode_element(char *pline, int compositional, pcode_element *px, int *perr);
extern void           get_ppfcn2(ppfcn *ppf, char *fname, pcodeset *pcode, int *perr);
extern void           get_rules1(RULESET1 *rset, char *path, char *fname, int *perr);
extern int            hash(char *key, HASH_PARAMETERS *hpars, int table_length);
extern void           hash_init(HASH_PARAMETERS *hpars);
extern void           init_al_chr(ALIGNMENT_CHR *palc1);
extern void           init_al_int(ALIGNMENT_INT *paln1, pcodeset *pcode1);
extern NETWORK       *init_network2(char *name, char *s0, int *perr);
extern void           init_pc_table(pcodeset *p1);
extern void           interchange_entries(SM_TAB_STR2 *table, int i, int j);
extern void           interchange_tallies(TALLY_STR *table, int i, int j);
extern boolean        isvowel1(char c);
extern boolean        isvowel2(char c);
extern boolean        iscons1(char c);
extern boolean        iscons2(char c);
extern boolean        is_front_vowel(char c);
extern void           kill_arc(ARC *arc1);
extern void           kill_node2(NODE *node1);
extern char          *lc_astr(char *sx, int ichr, pcodeset *pcode, ALIGNMENT_INT *pal);
extern int           *lc_istr(int *sx, int ichr, pcodeset *pcode, ALIGNMENT_INT *pal);
extern struct INTERVAL1  limits(SM_ELEMENT2 *smrep);
extern void           literalize_network(NETWORK *net, NODE *node, int *perr);
extern ALIGNMENT_CHR *make_al_chr(void);
extern ALIGNMENT_INT *make_al_int(pcodeset *pcode1);
extern ARC           *make_arc(char *symbol, NODE *from_node, NODE *to_node, int *perr);
extern pcode_element *make_element(pcode_element *px, char *symb, pcodeset *pc1);
extern char          *make_full_fname(char *sx, char *path, char *fname);
extern char          *make_lower(char *s);
extern char          *make_upper(char *s);
extern void           make_zap_lists_r(NODE *node1, NODE *nodes[MAX_NODES], int *n_nodes, ARC *arcs[MAX_ARCS], int *n_arcs, int *perr);
extern NODE          *make_node(char *name, ARC *from_arc, ARC *to_arc, int *highest_nnode_name, int *perr);
extern void           make_pc_table(pcodeset *p1);
extern void          *malloc_safe(size_t size, char *calling_proc);
extern boolean        mispron(char *sp);
extern long int       n_choose_r(int n, int r);
extern double         normprob(double z);
extern int            nselected(int *iselect, int *jselect, pcodeset *pcode);
extern int           *nstrcpy(int *pn_to, int *pn_from);
extern int           *nstrcpyn(int *pn_to, int *pn_from, int nmax);
extern int           *nstrcat(int *pn_to, int *pn_from);
extern int           *nstrdup(int *pn);
extern int           *nstrdup_safe(int *pn, char *calling_proc);
extern boolean        nstreq(int *pn1, int *pn2);
extern int            nstrcmp(int *pn1, int *pn2);
extern int            nsylbs1(int iword, pcodeset *pcode_word, int *perr);
extern int            number_of_insertions(ALIGNMENT_INT *pn1);
extern int            number_of_deletions(ALIGNMENT_INT *pn1);
extern int            number_of_substitutions(ALIGNMENT_INT *pn1);
extern int            overlap1(struct INTERVAL1 a, struct INTERVAL1 b);
extern void           parse_alts(SUBSTRING *ss_alts, int *nalts, char *alt[MAX_ALTS]);
extern int            pc_htab_store(pcodeset *pc1, pcode_element *element, int *duplicate_key, int *table_full);
extern int            pcindex_htab_lookup(char *symb, pcodeset *pc1, int *found);
extern char          *pcext1(int iphone, pcodeset *pcstr);
extern PCIND_T        pcindex2(char *phone, pcodeset *pc1);
extern PCIND_T        pcindex_bsearch(char *astr, pcodeset *pc1);
extern PCIND_T        pcindex5(char *symb, pcodeset *pc1, int add_to_core, int add_to_file);
extern void           pcsort1(pcodeset *p1);
extern int            pick_alt(int nalts, char *alt[MAX_ALTS],boolean zap_if_null,boolean zap_if_nonlex,boolean dont_pick_null, boolean dont_pick_nonlex);
extern char          *pltrim(char *s);
extern char          *pltrimf(char *s);
extern char          *prtrim(char *s);
extern char          *prtrim2(char *s);
extern void           process_pcode_aux_line(pcodeset *p1, char *pline, int *perr);
extern void           process_pcode_data_line(pcodeset *p1, char *pline, int *perr);
extern void           process_ppf_aux_line(ppfcn *ppf, char *pline, int *plno, int *perr);
extern void           process_ppf_data_line(ppfcn *ppf, char *pline, int *plno, int *perr);
extern void           put_sm_into_aln(ALIGNMENT_INT *pal, SM_TAB_STR2 *smtab, int *perr);
extern void           rate_sm(SM_ELEMENT2 *smrep, ALIGNMENT_INT *pal1);
extern char          *regularize_spacing(char *s);
extern char          *remove_comments(char *s, char *comment_flag);
extern void           remove_symb(int *s, char *symb, pcodeset *pcode);
extern void           remove_zeros(WCHAR_T *s);
extern void           report_lex_add2(int i, pcodeset *pc1, int *perr);
extern double         rnormal(double m, double sd);
extern char          *safe_print(char *s);
extern boolean        same_except_stress(int i, int j, pcodeset *pcode_ph);
extern void           save_sm(SM_ELEMENT2 *smrep, SM_TAB_STR2 *smtab);
boolean               short_env(char *p);
extern char          *simplify_null_reps(char *s);
extern int            sm_overlap(int i, int j, SM_TAB_STR2 *smtab);
extern int            sm_correction2(ALIGNMENT_INT *pt1, double fom_threshold, SM_TAB_STR2 *smtab, int *perr);
extern char          *snor1(char *s);
extern void           sort_pcodeset_a(pcodeset *p1);
extern void           sort_sm_by_fom(SM_TAB_STR2 *smtab);
extern void           sort_sm_by_iloc(SM_TAB_STR2 *smtab);
extern void           sort_tally1(TALLY_STR *table);
extern SUBSTRING      sstok(SUBSTRING *ssx, char *delimiters);
extern SUBSTRING      sstok2(char *sx, char *delimiters);
extern SUBSTRING      sstok2b(char *sx, char *delimiters);
extern SUBSTRING      sstok2c(char *sx, char *delimiters);
extern SUBSTRING      sstok3(SUBSTRING *ssx, char *delimiters);
extern SUBSTRING      sstok4(char *x);
extern boolean        start_comment(char *sp);
extern boolean        start_crosstalk(char *sp);
extern boolean        start_mispron(char *sp);
extern boolean        start_overlap(char *sp);
extern boolean        start_unsure(char *sp);
extern char          *strdup_safe(char *ps, char *calling_proc);
extern int            substr_length(SUBSTRING *substr);
extern char          *substr_to_str(SUBSTRING *substr, char *str, int lmax);
extern boolean        string_equal(char *cs, char *ct, int ignore_case);
extern int            strcmpi(char *ps1, char *ps2);  /* BCD 4.2; not TURBO C */
extern char          *strcutl(char *ps, int n);
extern char          *strcutr(char *ps, int n);
extern char          *strmap1(char *s, char *x, char *y);
extern short int      swap_short(short int s);
extern void           tally2(int i, int j, TALLY_STR *table);
extern int            textlen(char *s);
extern char          *trans(char *s2, char *s1, char *outmap, char *inmap);
extern char          *ttp1(char *stx, char *sp, int *perr);
extern char          *ttp1s(char *stx, char *sp, int *perr);
extern char          *ttpj1(char *stx, char *sp, int *perr);
extern char          *ttpspan2(char *stx, char *sp, char *path, int *perr);
extern boolean        valid_data_line(char *s, char *comment_flag);
boolean               velar(char c);
boolean               voiced(char *p);
extern void           warn_if_add_file(char *fname, char *time);
extern char          *wbtrim(char *s);
extern int            wod1(int i, int j, pcodeset *pcij);
extern int            wod1f(int i, int j, pcodeset *pcij);
extern int            wod2(int i, int j, pcodeset *pcij, int *perr);
extern int            wod2t(int i, int j, pcodeset *pcij, TALLY_STR *tally, int *perr);
extern void           write_phon_ins_del(TALLY_STR *table, pcodeset *pcode);
extern void           write_phon_tally2(TALLY_STR *table, pcodeset *pcode, int *iselect, int *jselect, int ndigits, int style);
extern void           write_phon_tally3(TALLY_STR *table, pcodeset *pcode, int *iselect, int *jselect, int ndigits, int style);
extern void           write_ppf2(TABLE_OF_CODESETS *pctab, int ipc, char *fname, int *perr);
extern void           write_word_tally2(TALLY_STR *table, pcodeset *pcode);

#endif
/* end file fcndcls.h        */
