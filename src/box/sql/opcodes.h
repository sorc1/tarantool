/* Automatically generated.  Do not edit */
/* See the tool/mkopcodeh.tcl script for details */
#define OP_Savepoint       0
#define OP_AutoCommit      1
#define OP_SorterNext      2
#define OP_PrevIfOpen      3
#define OP_NextIfOpen      4
#define OP_Or              5 /* same as TK_OR, synopsis: r[P3]=(r[P1] || r[P2]) */
#define OP_And             6 /* same as TK_AND, synopsis: r[P3]=(r[P1] && r[P2]) */
#define OP_Not             7 /* same as TK_NOT, synopsis: r[P2]= !r[P1]    */
#define OP_Prev            8
#define OP_Next            9
#define OP_Goto           10
#define OP_Gosub          11
#define OP_InitCoroutine  12
#define OP_IsNull         13 /* same as TK_ISNULL, synopsis: if r[P1]==NULL goto P2 */
#define OP_NotNull        14 /* same as TK_NOTNULL, synopsis: if r[P1]!=NULL goto P2 */
#define OP_Ne             15 /* same as TK_NE, synopsis: IF r[P3]!=r[P1]   */
#define OP_Eq             16 /* same as TK_EQ, synopsis: IF r[P3]==r[P1]   */
#define OP_Gt             17 /* same as TK_GT, synopsis: IF r[P3]>r[P1]    */
#define OP_Le             18 /* same as TK_LE, synopsis: IF r[P3]<=r[P1]   */
#define OP_Lt             19 /* same as TK_LT, synopsis: IF r[P3]<r[P1]    */
#define OP_Ge             20 /* same as TK_GE, synopsis: IF r[P3]>=r[P1]   */
#define OP_ElseNotEq      21 /* same as TK_ESCAPE                          */
#define OP_BitAnd         22 /* same as TK_BITAND, synopsis: r[P3]=r[P1]&r[P2] */
#define OP_BitOr          23 /* same as TK_BITOR, synopsis: r[P3]=r[P1]|r[P2] */
#define OP_ShiftLeft      24 /* same as TK_LSHIFT, synopsis: r[P3]=r[P2]<<r[P1] */
#define OP_ShiftRight     25 /* same as TK_RSHIFT, synopsis: r[P3]=r[P2]>>r[P1] */
#define OP_Add            26 /* same as TK_PLUS, synopsis: r[P3]=r[P1]+r[P2] */
#define OP_Subtract       27 /* same as TK_MINUS, synopsis: r[P3]=r[P2]-r[P1] */
#define OP_Multiply       28 /* same as TK_STAR, synopsis: r[P3]=r[P1]*r[P2] */
#define OP_Divide         29 /* same as TK_SLASH, synopsis: r[P3]=r[P2]/r[P1] */
#define OP_Remainder      30 /* same as TK_REM, synopsis: r[P3]=r[P2]%r[P1] */
#define OP_Concat         31 /* same as TK_CONCAT, synopsis: r[P3]=r[P2]+r[P1] */
#define OP_Yield          32
#define OP_BitNot         33 /* same as TK_BITNOT, synopsis: r[P1]= ~r[P1] */
#define OP_MustBeInt      34
#define OP_Jump           35
#define OP_Once           36
#define OP_If             37
#define OP_IfNot          38
#define OP_SeekLT         39 /* synopsis: key=r[P3@P4]                     */
#define OP_SeekLE         40 /* synopsis: key=r[P3@P4]                     */
#define OP_SeekGE         41 /* synopsis: key=r[P3@P4]                     */
#define OP_SeekGT         42 /* synopsis: key=r[P3@P4]                     */
#define OP_NoConflict     43 /* synopsis: key=r[P3@P4]                     */
#define OP_NotFound       44 /* synopsis: key=r[P3@P4]                     */
#define OP_Found          45 /* synopsis: key=r[P3@P4]                     */
#define OP_Last           46
#define OP_SorterSort     47
#define OP_Sort           48
#define OP_Rewind         49
#define OP_IdxLE          50 /* synopsis: key=r[P3@P4]                     */
#define OP_IdxGT          51 /* synopsis: key=r[P3@P4]                     */
#define OP_IdxLT          52 /* synopsis: key=r[P3@P4]                     */
#define OP_IdxGE          53 /* synopsis: key=r[P3@P4]                     */
#define OP_Program        54
#define OP_FkIfZero       55 /* synopsis: if fkctr[P1]==0 goto P2          */
#define OP_IfPos          56 /* synopsis: if r[P1]>0 then r[P1]-=P3, goto P2 */
#define OP_IfNotZero      57 /* synopsis: if r[P1]!=0 then r[P1]--, goto P2 */
#define OP_DecrJumpZero   58 /* synopsis: if (--r[P1])==0 goto P2          */
#define OP_Init           59 /* synopsis: Start at P2                      */
#define OP_Return         60
#define OP_EndCoroutine   61
#define OP_HaltIfNull     62 /* synopsis: if r[P3]=null halt               */
#define OP_Halt           63
#define OP_Integer        64 /* synopsis: r[P2]=P1                         */
#define OP_Bool           65 /* synopsis: r[P2]=P1                         */
#define OP_Int64          66 /* synopsis: r[P2]=P4                         */
#define OP_LoadPtr        67 /* synopsis: r[P2] = P4                       */
#define OP_String         68 /* synopsis: r[P2]='P4' (len=P1)              */
#define OP_NextAutoincValue  69 /* synopsis: r[P2] = next value from space sequence, which pageno is r[P1] */
#define OP_Null           70 /* synopsis: r[P2..P3]=NULL                   */
#define OP_SoftNull       71 /* synopsis: r[P1]=NULL                       */
#define OP_Blob           72 /* synopsis: r[P2]=P4 (len=P1, subtype=P3)    */
#define OP_Variable       73 /* synopsis: r[P2]=parameter(P1,P4)           */
#define OP_Move           74 /* synopsis: r[P2@P3]=r[P1@P3]                */
#define OP_String8        75 /* same as TK_STRING, synopsis: r[P2]='P4'    */
#define OP_Copy           76 /* synopsis: r[P2@P3+1]=r[P1@P3+1]            */
#define OP_SCopy          77 /* synopsis: r[P2]=r[P1]                      */
#define OP_IntCopy        78 /* synopsis: r[P2]=r[P1]                      */
#define OP_ResultTuple    79 /* synopsis: output=tuple(cursor(P1))         */
#define OP_ResultRow      80 /* synopsis: output=r[P1@P2]                  */
#define OP_CollSeq        81
#define OP_Function0      82 /* synopsis: r[P3]=func(r[P2@P5])             */
#define OP_Function       83 /* synopsis: r[P3]=func(r[P2@P5])             */
#define OP_AddImm         84 /* synopsis: r[P1]=r[P1]+P2                   */
#define OP_RealAffinity   85
#define OP_Cast           86 /* synopsis: affinity(r[P1])                  */
#define OP_Permutation    87
#define OP_Compare        88 /* synopsis: r[P1@P3] <-> r[P2@P3]            */
#define OP_Column         89 /* synopsis: r[P3]=PX                         */
#define OP_Affinity       90 /* synopsis: affinity(r[P1@P2])               */
#define OP_MakeRecord     91 /* synopsis: r[P3]=mkrec(r[P1@P2])            */
#define OP_Count          92 /* synopsis: r[P2]=count()                    */
#define OP_FkCheckCommit  93
#define OP_TTransaction   94
#define OP_ReadCookie     95
#define OP_SetCookie      96
#define OP_ReopenIdx      97 /* synopsis: index id = P2, space ptr = P3    */
#define OP_OpenRead       98 /* synopsis: index id = P2, space ptr = P3    */
#define OP_OpenWrite      99 /* synopsis: index id = P2, space ptr = P3    */
#define OP_OpenTEphemeral 100 /* synopsis: nColumn = P2                     */
#define OP_SorterOpen    101
#define OP_SequenceTest  102 /* synopsis: if (cursor[P1].ctr++) pc = P2    */
#define OP_OpenPseudo    103 /* synopsis: P3 columns in r[P2]              */
#define OP_Close         104
#define OP_ColumnsUsed   105
#define OP_Sequence      106 /* synopsis: r[P2]=cursor[P1].ctr++           */
#define OP_NextSequenceId 107 /* synopsis: r[P2]=get_max(_sequence)         */
#define OP_NextIdEphemeral 108 /* synopsis: r[P3]=get_max(space_index[P1]{Column[P2]}) */
#define OP_FCopy         109 /* synopsis: reg[P2@cur_frame]= reg[P1@root_frame(OPFLAG_SAME_FRAME)] */
#define OP_Delete        110
#define OP_ResetCount    111
#define OP_SorterCompare 112 /* synopsis: if key(P1)!=trim(r[P3],P4) goto P2 */
#define OP_SorterData    113 /* synopsis: r[P2]=data                       */
#define OP_RowData       114 /* synopsis: r[P2]=data                       */
#define OP_Real          115 /* same as TK_FLOAT, synopsis: r[P2]=P4       */
#define OP_NullRow       116
#define OP_SorterInsert  117 /* synopsis: key=r[P2]                        */
#define OP_IdxReplace    118 /* synopsis: key=r[P2]                        */
#define OP_IdxInsert     119 /* synopsis: key=r[P2]                        */
#define OP_SInsert       120 /* synopsis: space id = P1, key = r[P2]       */
#define OP_SDelete       121 /* synopsis: space id = P1, key = r[P2]       */
#define OP_SIDtoPtr      122 /* synopsis: space id = P1, space[out] = r[P2] */
#define OP_IdxDelete     123 /* synopsis: key=r[P2@P3]                     */
#define OP_Clear         124 /* synopsis: space id = P1                    */
#define OP_ResetSorter   125
#define OP_ParseSchema2  126 /* synopsis: rows=r[P1@P2]                    */
#define OP_ParseSchema3  127 /* synopsis: name=r[P1] sql=r[P1+1]           */
#define OP_RenameTable   128 /* synopsis: P1 = root, P4 = name             */
#define OP_LoadAnalysis  129
#define OP_DropTable     130
#define OP_DropIndex     131
#define OP_DropTrigger   132
#define OP_Param         133
#define OP_FkCounter     134 /* synopsis: fkctr[P1]+=P2                    */
#define OP_OffsetLimit   135 /* synopsis: if r[P1]>0 then r[P2]=r[P1]+max(0,r[P3]) else r[P2]=(-1) */
#define OP_AggStep0      136 /* synopsis: accum=r[P3] step(r[P2@P5])       */
#define OP_AggStep       137 /* synopsis: accum=r[P3] step(r[P2@P5])       */
#define OP_AggFinal      138 /* synopsis: accum=r[P1] N=P2                 */
#define OP_Expire        139
#define OP_IncMaxid      140
#define OP_Noop          141
#define OP_Explain       142

/* Properties such as "out2" or "jump" that are specified in
** comments following the "case" for each opcode in the vdbe.c
** are encoded into bitvectors as follows:
*/
#define OPFLG_JUMP        0x01  /* jump:  P2 holds jmp target */
#define OPFLG_IN1         0x02  /* in1:   P1 is an input */
#define OPFLG_IN2         0x04  /* in2:   P2 is an input */
#define OPFLG_IN3         0x08  /* in3:   P3 is an input */
#define OPFLG_OUT2        0x10  /* out2:  P2 is an output */
#define OPFLG_OUT3        0x20  /* out3:  P3 is an output */
#define OPFLG_INITIALIZER {\
/*   0 */ 0x00, 0x00, 0x01, 0x01, 0x01, 0x26, 0x26, 0x12,\
/*   8 */ 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x03, 0x0b,\
/*  16 */ 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x01, 0x26, 0x26,\
/*  24 */ 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26,\
/*  32 */ 0x03, 0x12, 0x03, 0x01, 0x01, 0x03, 0x03, 0x09,\
/*  40 */ 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x01, 0x01,\
/*  48 */ 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,\
/*  56 */ 0x03, 0x03, 0x03, 0x01, 0x02, 0x02, 0x08, 0x00,\
/*  64 */ 0x10, 0x10, 0x10, 0x00, 0x10, 0x00, 0x10, 0x00,\
/*  72 */ 0x10, 0x10, 0x00, 0x10, 0x00, 0x10, 0x10, 0x00,\
/*  80 */ 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x00,\
/*  88 */ 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x10,\
/*  96 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
/* 104 */ 0x00, 0x00, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00,\
/* 112 */ 0x00, 0x00, 0x00, 0x10, 0x00, 0x04, 0x00, 0x04,\
/* 120 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
/* 128 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x1a,\
/* 136 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,}

/* The sqlite3P2Values() routine is able to run faster if it knows
** the value of the largest JUMP opcode.  The smaller the maximum
** JUMP opcode the better, so the mkopcodeh.tcl script that
** generated this include file strives to group all JUMP opcodes
** together near the beginning of the list.
*/
#define SQLITE_MX_JUMP_OPCODE  59  /* Maximum JUMP opcode */
