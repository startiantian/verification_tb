
`ifndef GUARD_SVT_AHB_BUS_INFO_SV
`define GUARD_SVT_AHB_BUS_INFO_SV

`include "svt_ahb_defines.svi"

/**
  * Defines attributes that are shared between the arbiter, decoder
  */

class svt_ahb_bus_status extends `SVT_DATA_TYPE; 

/** @cond PRIVATE */
  /**
   * Current hmaster: generated by arbiter
   *
   */
  bit [(`SVT_AHB_HMASTER_PORT_WIDTH-1):0] curr_hmaster;

  /**
   * Previous hmaster: registered version of curr_hmaster
   */
  bit [(`SVT_AHB_HMASTER_PORT_WIDTH-1):0] prev_hmaster;

  /**
   * Currently selected slave: generated by decoder
   */
  int curr_sel_slave;

  /**
   * Previously selected slave: registered version of curr_sel_slave
   */
  int prev_sel_slave;  

  /**
   * Indicates currently selected hsel index of selected slave having multiple HSEL signals: generated by decoder
   */
  int curr_slave_multi_sel_idx;

  /**
   * Indicates previously selected hsel index of selected slave having multiple HSEL signals: generated by decoder
   */
  int prev_slave_multi_sel_idx;

/** @endcond */

`ifdef SVT_VMM_TECHNOLOGY
  /**
   * CONSTUCTOR: Create a new slave address range
   *
   * @param log Instance name of the log. 
   */
`svt_vmm_data_new(svt_ahb_bus_status)
  extern function new (vmm_log log = null);
`else
  //----------------------------------------------------------------------------
  /**
   * CONSTUCTOR: Create a new slave address range
   *
   * @param name Instance name of the configuration
   */
  extern function new (string name = "svt_ahb_bus_status");
`endif

  //----------------------------------------------------------------------------
  /**
   * Returns the class name for the object used for logging.
   */
  extern function string get_mcd_class_name ();


`ifdef SVT_VMM_TECHNOLOGY
  // ---------------------------------------------------------------------------
  /**
   * Compares the object with to, based on the requested compare kind.
   * Differences are placed in diff.
   *
   * @param to vmm_data object to be compared against.
   * 
   * @param diff String indicating the differences between this and to.
   * 
   * @param kind This int indicates the type of compare to be attempted. Only
   * supported kind value is svt_data::COMPLETE, which results in comparisons of
   * the non-static configuration members. All other kind values result in a return
   * value of 1.
   */
  extern virtual function bit do_compare(vmm_data to, output string diff, input int kind = -1);

  /**
   * Returns the size (in bytes) required by the byte_pack operation based on
   * the requested byte_size kind.
   *
   * @param kind This int indicates the type of byte_size being requested.
   */
  extern virtual function int unsigned byte_size(int kind = -1);
  
  // ---------------------------------------------------------------------------
  /**
   * Packs the object into the bytes buffer, beginning at offset. based on the
   * requested byte_pack kind
   */
  extern virtual function int unsigned do_byte_pack(ref logic [7:0] bytes[], input int unsigned offset = 0, input int kind = -1);

  // ---------------------------------------------------------------------------
  /**
   * Unpacks len bytes of the object from the bytes buffer, beginning at
   * offset, based on the requested byte_unpack kind.
   */
  extern virtual function int unsigned do_byte_unpack(const ref logic [7:0] bytes[], input int unsigned    offset = 0, input int len = -1, input int kind = -1);
`endif

  //----------------------------------------------------------------------------
  /** Used to limit a copy to the static configuration members of the object. */
  extern virtual function void copy_static_data(`SVT_DATA_BASE_TYPE to);

  //----------------------------------------------------------------------------
  /** Used to limit a copy to the dynamic configuration members of the object.*/
  extern virtual function void copy_dynamic_data(`SVT_DATA_BASE_TYPE to);

  // ---------------------------------------------------------------------------
  /**
   * HDL Support: For <i>read</i> access to public configuration members of 
   * this class.
   */
  extern virtual function bit get_prop_val(string prop_name, ref bit [1023:0] prop_val, input int array_ix, ref `SVT_DATA_TYPE data_obj);

  //----------------------------------------------------------------------------
  /**
   * HDL Support: For <i>write</i> access to public configuration members of
   * this class.
   */
  extern virtual function bit set_prop_val(string prop_name, bit [1023:0] prop_val, int array_ix);

  // ---------------------------------------------------------------------------
  /**
   * This method allocates a pattern containing svt_pattern_data instances for
   * all of the primitive configuration fields in the object. The 
   * svt_pattern_data::name is set to the corresponding field name, the 
   * svt_pattern_data::value is set to 0.
   *
   * @return An svt_pattern instance containing entries for all of the 
   * configuration fields.
   */
  extern virtual function svt_pattern allocate_pattern();


  // ***************************************************************************
  //   SVT shorthand macros 
  // ***************************************************************************

  `svt_data_member_begin(svt_ahb_bus_status)
    `svt_field_int(curr_hmaster ,`SVT_HEX| `SVT_ALL_ON)
    `svt_field_int(prev_hmaster ,`SVT_HEX| `SVT_ALL_ON)
    `svt_field_int(curr_sel_slave ,`SVT_DEC | `SVT_ALL_ON)
    `svt_field_int(prev_sel_slave ,`SVT_DEC | `SVT_ALL_ON)
    `svt_field_int(curr_slave_multi_sel_idx,`SVT_DEC | `SVT_ALL_ON)
    `svt_field_int(prev_slave_multi_sel_idx,`SVT_DEC | `SVT_ALL_ON)
  `svt_data_member_end(svt_ahb_bus_status)

endclass

// -----------------------------------------------------------------------------

`protected
cDPA_7R5+dVaA<[W9Zc-UbR;N\ZO3L=>f]b4Q6IcC/bV>D_@UF);))Va@)G\4.AF
C+ab+,cMa^8\LB]aJ<^AJQCFH3=8@+d0C^:>a;Q0N<5MQ;HbYY\SZ+;d9Ra(==a(
A86LG/>eI)S+e/b=gbZ]FNS?GZEH?_2T@CO^/<b=MfI(f:Q>J1VP^gC7=T^1JZgM
[F.^?@E/RHP=Bf2cg6.@038DMJT6M=7_=^.V>Y0cF:Ka;<1IJO(9OS<).,JZHK<M
:cf56acE/&(<Q21OG<ADY/<gcfed.V73N(YM-:\/X71N\CF4,LB/1P?JcB;0@ZS[
_cYc4@6>>X3Ff4SSA?SPY)+.AOV1#+OVOK6WYSZ6Fe+Y=]#C->-XAM&a^S<\L?(;
;MKcPG0KH1II=8^LM9/7aYaX4De7H(^PJD6WRV)&N88YH=J+c1@QLg??EX<9U3,@
FfYacIM-deMLJ1,9672X+FL-A&^UO,@,9$
`endprotected


// -----------------------------------------------------------------------------
//vcs_vip_protect
`protected
gWeJJUB#P+ZH9I])\DcN5UQZOU,4[Z?aDS?AWFDY1d.9WJgA3g3Y4(P3<8--G^YV
?65?AL)(4ZbB,&Mdg@9:c8(_#3aL4VdG,L#]0KHHR_:/A+fH#R:4.VEJdT(W4]&@
Qc@C,BK8E3/[KE@@OT7Q0,DeC\S]62.&bf#:I/+)FR6+RI3SD4CHA=Z)2f<S@44c
9e+<b@g#VEP5X>3fR[)]RIe9:O4^Z]V7d>g9<R:XZ#^?8/I4=N7f)/,QVC90>CU(
?#W4E+c3_cdMfXN>Ba1NSPDKVQ9E]?&4WNf7GNELVY<7PGR5WM>;B/>EDKJJN4UG
TH1G)9[I4E[]DF;d\\<20,6.7?:dGTII,4_@@S9(;>MJB[,N>A,f?LN/Q)&c.G72
Mg)?A]-@50O@EM4.\GTJ,;4O+:.ad=HD(-?X_YI?6#f14a,^YFIHf0Q9Dg4=SVU9
NY@1>/CH,(CX)H0&\W79.N3agU7<H:(G3O2;OSG@#5==)#NJGeQQ?=Rf8e\,BO@?
a2N_]ea?/+Q_ZHW>9X5-+7@BZA\\)[35\Q[?9>@PdW9f6L2Y#gU=^Jd=F)-.Q5Ce
STc=[1LXb@)BOS)YdU@\TMRD],,A4dCQE,=<F=;dZBOTS:eBHJ)Dc[>R8F96Q^\<
4cW8Gc9G5@PF>++5R3cNf2X.+TF8MGSMHKG9eDbV/A\2F>7SX,?6FCXIgdYGJ_KC
&8eR<eVHB.WUDdeB\)e+f3DYW\fT.^TH@7YJEcY]:8R-dU150N@5^UVXHeea3=9?
SSL-.f6854TY^GAC@=BY2Ob6@.O\UQ1B5SQ);BB0-5&W(#+)M59cc^J?8)_E:cM<
CJO;:T(T+<1WFUTc(c9a@R.?T2VQYMb(-#8dRK([++Iac&IE_Y\PLZSd++9(&0ec
/M\U0L4.I9)aS56L^?6W\URfbLR>,\\=9NUVdSR0cN(?cSJF=&4)RL1M=CP;0A2U
H)M\eMX5KL&D+\C03KWJV@X=00J2EX+cX5-d3,Cdg]XA\Da;Jgf>4eZU@gL#RcDA
<4.(Kg__C^B,,W;7,M3?O3HeRSE1I8<0dTf<aERXP,W@[MAECG2Y>^=MF+&Eeg=B
\/)0M]^G1HJ_:\QVH6bAI_>:E.0WH^]08@P@LVZK8C-3)#)TS0:TC>eRH5)2J+e0
?O;0eQ.ZKRQgcT7b)LHf#gO#K()/5;+P(=,)?.HPD/4T&aTE?7\&eX.ZIL.JX>[P
8-YO[^6YY##KAL[,b#PZ#W,6eWS.HI_-@Y4#R1NYEL[]@RBB^EcIXXCd[9ANB6:3
#?G4)J\C.GPUF[#Y?WS5C9O,a<1:cQJGAUSdEgTX((&.(fAS0&(WdKMZVJY>^V25
JT4#\0a3HXHQfOf8Y3c/g5:#J9&;^.J.V,LW8JaVLH.QB(62S0L[:DfaF//W]+,I
N.J?(1_D2c/#^S1GRbT_DP(2-ac\Bd2F-d5X:(70LcH9D\@/JETE(3fg=7/E<0HH
#;bcX6N.S<B6e(4&<d)RD0PX<Yf9d^0]=0WP2\=dVVIb3J;Qd3XFR15ZEN/baeg&
:HHUP33?R=YSJ.Gd;a&7HV_SJP3,BHUOJZd.gd#GN?g8JK?[1=:5@]X[V?1SN8XW
)(e8bc2K.VB7HA)A+OL+RW+;?-b&X75@8a=1/FWIIQcBE[<WdE7gFbI13#T4#J@&
V3=UEF4=1#H+F1-<:bfQQPF#d7\GH4SXII12E<Z7C.;@KeZZ-A,V(=S.0F,#()R6
U(MB(^,e+>&/Z(-UW<Ya8,7Tc-)NfN<DY\)YK>AA@Ja,>1;F0V##\ZMPD8)fdDV#
(ZNR65MA4&N0COA0;.H<RL+VdVNfVH(fADW0a>>.0IF&S)VH]c@V2(Q@EF>e.eg6
]&[MdbN@2CQ\,]WQ1XdeT?(&3cSKg,[@#MKQfID_Pe)DNC3a)6X4225C#?KYV0?^
e-KUG(1)_U6;f)ZR8Zb<fHNNTBAKaTB.PBDT#?JJ_aaR7?b;EefCH7KPf;W_+8AO
P+DHDSU=aMNDS1g0NNX>gaX]W^)\86LC(T0.Z]GDc5#A4U4,33:Wa(1Kd]Y+VIXS
FaK3>S)SN8Ad9-,^F#Fa&[F>)P5[_+NZE1QCD-QISf?JSZ8ME17MH?^RI9U((-/.
2MUWNdWV5-_=VP^E.FX7e?NV)=6:F7PQ]#fISK)U)I+V,[NB)bA@I@#f+3]@O/Q2
dY]eTP)@fU7^dfD9[_H-U4A(E+9_^_ZQ[0<1dS0^GIXeC:QKdZL78WfREQ\#\AfD
+RR1M;Q6WfFATVdZN_.9H<ES(:0UXJKd=V?b)fJ_1^Oc<-/XQ,3dWe#[gD0S[+KK
AFW7;0+8;b2LIZ&5/>a=7FM.7\,/d8,:<\>/C9&DbCPHXJ]V[](F2TCd>EFH>(7S
>EN?<QcSUY>E(Q67>31.2>##b4[d+bOa=UZf4KeR[F=^64(KK7YEMgOUWTHKGX?@
E]=06<Y]&fbC4@O1G3RA\FDDU)ARB^-&@W(YECL.SE&gF5C)VJ;b\Q2RD.1//.@/
>@^LX>6JUg@VSG(,WX=9Q=?gDV=G8<_(2D?W/#9WV75IF2c9OF/75O_eG<D)8Lc_
A<OB.8J:VYFO,&64L<UOFTFE06<QO\2<GVVWR)E+NVE\Z^SU>>@B>?]<@dM?XDY\
(@dDL8JH[AJUcI5<MeO[0e&G#W&f0J-g]3;1;\KQ@,(b9.X83/;]RVcX=<YV1X]?
b;ZVf8Y&T&-5/?-;&/KC\X=LJ:JJ<5NgIcF[JFZ:E^-.QM(cPN?_^K[S4]5-ad/V
g12H:EF#70]X\SLU)XY[aI.OcLOINH4R2J;7\,K^.D9,2JKJ6BC=X07>1O)G.IaA
1_<>+HBPSL?6[.N@-;)(#]9>NQQe>685g@Y/-0HdOD;]7<\<)0XK?5&bG9HgA=WA
+O2>Y#-OM+fM<9QA,38IKB5JZ-K>+I>_eM+,N0.aX+7a9YY)W#BJI\1Q<cK==\HB
#PW\.a]Y;Y#SG<2U4M@0J2BeHUgJQO;0CTUd/?1NgGaHZS&(dMI2+2/7D3N:5UA(
+4F/Z=VSSF83:U?O-eS5I)6Wa90\>ZXWAH]VR?&VB.[Y60U9fQAU+.R[RO51NOe2
5)+)^-ZKBS7^(f:9f3)H?/M7:4)/R4fX2P0d0:d./WMaPMcJ3>fG0eGV_Ib6@T7N
bRCYXVHf4X(O5aSeK]Q;KYU[Ze^ZbgD\EI\B?<G)_1;_QfVNZ@]1N6O.;]^dTc)6
^N_be[@2C]SMdKbc7AYK[0S:O_];6C?f\9aD.-3L<ffQ6BVS:H89aRZd5cW<7S34
)fBROBFY()\R=215,Qcf)-4:/dBAK#85Ye?A?@LDcDgLV]:]gHMa]T-0^C&B([#J
)IEG^8/cNAO)-:6NUM[.^fUYc1>5HI<ZL?e.JLQ<9+>XA3QW@-UfZ@0L)^IFJ>Q:
ZQMA<,,RT@3[Z]g#FAV4;U0G1&Y_TE?4>-Z6(1a#CU7B60?aY]VN^)@8F#&D5UPJ
3d<?>#eHQ(364]IHT87PgRI6e\Ed.Z6U=;_XL_RQ4^4eHcLU7;QdY?cOH;^2Nag7
9J(JRB<EUH7U3-2W=:;:QQgWQ<695I\3MHQ,TOE+,Y_@UCP-/V;4RF&.(K7f3PZ6
eMV5?cC.N:&c_#_0NG)0T-F:]QQ)E#PNL<94&T-U8?Zcg:>gJD_&()SE;17f\UZG
PWRHJ72V9>MK1;,3,<LFFR6feVZ[39?eR<aG71/\_9-Ic;GU.N,;O.DOZc=+D0dR
E9LRe6U+5U_#08E_M\<8_B(1DU/AX5G+f1bZI_b]KJ^Y4eK:gbAXc@b.>=R:=Ka;
YS>aV@N9+FAVAVAV,dOUH[0V:EYcNJbC@dUgX9LD4<ZL&Z@M84]==\+bbTF3+gH#
B2\e)bJ_MVIQg?6RPD@e?g<BaY(1f8)W94\Bc#82,HB5580QgU9/a1W:UDN=abV(
-0YA]G2>497<J(;FL4W6PCPdJ3dL/NT<PHeE#SX+NPZ=BWQ#g4Pa+U&J&4,/63ZI
6Q&IM,I2.M:44g3=WHB0\95e.][.2#^420[>)10c7cEfZ+.ZIV6<8P8EUQ8LaO2N
IcNKd<&_FVZ]>4^#4SJbQFAY5K>5DJG(,]VS=.#^HBW7=UB/D1FE@gZ;>HA,Hb9J
Nf#ZFE-#9gQ8AZ9IY3+[:NQD>DfT1;PQF;OT\7VUU#H[3Id01d+dCPW-)#K0/./e
_4c>fJ4EP\YCW1_>+gIc/J_7J@V1ba38[S58e#70ecF7MUFAVZ:>Qe\#GF]5,c4K
f??(B2)E)f1;5EdP.88=:a6+@KA5Tc_00g=?9@,F):aPCJ\.TLQ8d3e]dD<a(V.2
I),AD_eW<^L,7g],ZG<XNC4N1g#<:B]N\9/R&->#2P=L11[3S)6RGW<dQM3(X(Nb
6B9]G9G5I?.F.-E/Fd1,Jd.?/PCW-(;NH>0EX)IW3\L6LD/0H?dQ&_=@+:cV9Oea
Qd&TFHI&^PL)c-+,M:K8.0LXdUPg:cNc>a]:]+fA1@BEQB^Of9W(HZNXEN21-Z#K
MY2F>1OWfPA4=)=9EBbQL?f-1JN]f0\>V(QCb6_9?ZIF<TJJ/98D4_<+51&\b4:-
X-RGY/-Tad+NS.Q>Ga88O:.II1N]=Q=B0IKU9/-8eU\8V;[/LL,[Of=W:NM-T,)U
.fW;3(8/H>M=;2O1ZP0;>E/5U+dMd_-,M.(<,_W3)7F[,g+:<C(TX(#COK7>\8CX
#O.\6CMS8E]KI1e>1&Z0fa.67R#gfWg.AcHb80+9--I;Z@.Q\KTEQVUDWMQ06d44
:,JS/S(8HSD<0H;2)P(K9YU+)#<Y>NUBb/KG35^5H1bL1E9BYJ=0^=d:3#fR?ZE7
F3f5[]?QLVZf>7[G7DMT+A9&cYfF7(0c(JCG\8SR6bUI#L:P1-,7GNCUE9+T84d&
)C:T,N,,D@-[OP=(^;+GY3L/=B\a65:1LEX,X,c]#J&5gPAP]#DCN_6/gIO0f57&
I9?A>]Zgd=Hf]6+475d2U;e]DfDZDP7b\S.fc^6f8K)1&FZ13,NL.:P6EMSE(fLG
cQd5](ePBANK3E,#^N,BL+WD#Eg.Z:61ZF1d:LJT/MF\.,M)5&a;G&,C=(E<69PU
CfA1c;g<YJc(EU:&E1FV715-]?:O/19Z9YDRa=7_S<^JVE]H6M=MXV)B</RaDD^H
d+./OZOc@0M#F,&2P;T(E&ZFD9c2(G0O<)80]X3,.ge/?48I=H7HVD\V5:&A??g]
\g]GY8;IG9@ZXW,6fM?(0AYBA0NLV\7bIPcNa#eG[H,OYOX.G&+@]4:=\OEaPaI;
:C\+eaTgH;=)>BZP3UOEGcbdRZZF>+Xe-AZ<)BWREcP+<?O2a4PTg/NBQUPKSQ;J
B6;@,[S5PgB<IEM1Oa&,MX;G=]U^NGF]1HHFM;Da.#T8]?dU0(:+(_\agXVZ#FI.
]W,Da--E=,@+WQXAQ;[6^04L@<#M2PMXD&CF1YeQC&#/XCK.eM;e<=))JH8eF9/3
^+7Xd#U;KCQb/@d:_N.)DME7,YIDdD@177.(Y9Y#AMPDWe0ba;WGM<]b\V::K@J?
0D]Ed@(^45]>53QB^?:^@E<HLG@DQDf+^8>&1cN5C:S.,BQa_ZGM.5?J</UP>2bK
G,J\\FG[F;3O&8,gcd&]4=&[V;4.cA]CZHa,-DVRW^49LN.OdT>;Ff&U@Y69&;H>
,Gb9.[]b]^UL7bC5]?@(DR&:2bEE_g(X+:/3S@KeA:,_OTT5YGQX<[X)QJ=C1IQ:
gHd7ITPN\Z@P&RVL,.D0RaH#/,ebeF>=Cc#]K\-ZED:5U342S-4DBY@K,FTEU49b
.bf/TE\[6CB#P8Ug&9XJZ<4M[YbL:0[FBZJJ-?B=(HP-K4]7G8ggAH^?+PJWD(VP
I44L^H40@HR2deVFIb_7L(:bD)aQTb0#P^.9T_[CU_83.WYAB4+Ma^53W-3W2Pa;
V/WYVFg-UKZbfA;@>55ebJAeb>N6\V?#V60:8@596dSXPgR+G;BV]M,-#-128;V]
M1X=6f>C-gW0dUJY[ZEJ1NH&>G54C:/F&[\A5fOFO#=]W7TOcdP9N&,/)P:5fa(_
]bR<042-:[[]/(_/J1ON_:/bE<WVbXFY]_YE\G9\7<#.57fZgUC,3(b=5CO,4b^@
Ffb=KWIS>[4a;QWQVM:#-KZ+SL8E_065\2LeB)9L=:LW.&NdUUQFUgUMZE-ZRSaS
#cX#@:MaQfXR&]H#-[7?#XEIPJ0Af[4:-=5H/H#:+(bNa_#&5b<1E0dI&Gb103>&
gc)BB&H,We4_DUTdNMAZSJROAL[IF6(0:/VS956JCD@g)G1P&9-H.:K#^;GE6D30
\0X_aA-_g8X6SeHb55FdH(^R6P2G>;OZI9WOaH6_@-VG=S/L_-JO&0)e7_7XYgX)
KVOGMdVbdBcRP861Q@N<71AAEf;RW)4OT\VKUWINCYE\.A^,2RN[gSTRJHG0:Q[X
G9ZZITe@f?Y>N(L00f[;@@fP/UPIN<?>1V5c=Y\QC)<3c8UL6XG+).Aa&@DTDO5/
T:LW]]A)d\FaBb-4SF>HNE(:GEZc^N474efQMJ(<1BZO(S<Wa\=Df=S:e9OU+-1<
7W27L5g-,)Va,?WE0:^J=eW06<@+<&;<F-_I,.ITU)TZf82bH8WJ@[1OWBAVRg=F
ST@gUT8dW@9.8)0;Y.EJO.<J=J1YTUSM/N7F.LeVV\YRRfbaR\H+<.1Y)-ZS&YCK
SBG\d-=NX@JK,;2HeF?\X&2L>^M[7LO&QBc8c+66,6>FNG;4GD(,0cIDc<MEG\be
)A,7]S_LFc_8aX/Y\;O@L.T<0#3;=+]NKNX1S@-Z-,?Q[D+\_XREF_AE35-=/D8K
F.AI;1Sb/B4G];b8?;B[WfBK&[ITFU-^AD?28R+CR,Y5L[T8e^cDcdKRI1#Y>XId
#>^JK9bI]3e?RF4_B7J/DdeK9([.;1AeXE1Z+_=4\FYMW6bc<W:[H8@d5F.#(\.V
1B;;A3H>>]M<WJ/(\G=bRZD_,g7ICW0B3gI30<+ZNQXBL@O@,#9Ba]-SIc8LUJTX
>f;,-^fZU0#+-VKF5)H6dd9A^0:Y4I4eE94_(TDc249BXPT518MZU=GOXWfZV#N.
T-X/,_E-W312bXBQaN\3?GIC_3JC1X@BI+>)/R9+D06UHLKFg>:@JU/V85N,a>T,
c\a[(D[7GeTbN1YRfT3-]O@9Uc.c(9BEHR<CBd_?ZX4H@N[F6HJLU7]Db[4fM+@e
&1QeRd4c>U:g<+Z=S7,H^8&-,^g(.D+2ON(4D01NG[d>U(gg>HQFKf_X9;3]@8aA
D>]:&KbT:N#;?;^XQ_b#<K@,1FEM\bgF8XdO-F2(IgR]-8::d4=<XH;,eRWF]N,4
T>T9>)^=Q]=@ge[(_K_ef>&#-B8RFLLLO<E,P:O]/-3?)1&K+MW.V5[LSAGIfCC=
C??B@d>,S8L63F83?8,(4(bN]cL7U0+V4Oa_]5GT>=H-cD<S+_[,ATLK&CA>E;gZ
-,DX7#,+Q.YM(4(KDF]M#;YaO\\IA@).4TOBMYERL:e.^b2)?\<<1V:2b(Ncb5<T
/JK4,J#+&Y2_03-L:^,;=d\Z)2b:e;Y^8=7=/@;MaAHDKQ=/J:32=#S_46P@cY@L
gS4P]F#dL#d^[54B2>E/:EEe3Ma3&:85ZC[.:,I4DM/eEUUf+8@AY<Ef3GB7Nb#e
6ABOIZP]5QQU>fb3CO@GbMcN]ccCJFNX+,9;G1BWWYI5>[\dL#P9)8[-X?NJEP6K
JANddd4gP3XY5eXC9I5X]83H0>#X:b9?ZS+aSfU:b]U)]I4d+ATQ221M94f+98X-
L(;7(,H_IHF-[/(S[7ATgE]S/W;KD^^UK[=V7VTNTTB)40,+30PcQa&8/0b:[Y@(
6)N9-4\UMTb4F=AgS38O[AI[1:O(466NAX)NH<-O,LZeHMgHAY_-8^/@/&ZR9V;M
>-^(]1[a[#;@__#.V4C?d4V]OT8@1+U0C44(0B=f91/EMe_&F+gX83,Y4KfcS[N2
M>gV3,[1;R=WTDK9ZMLI+BOeB:1VHWG&96<T3F2:^&PG(7XZ]F6@GOU/DgNdR4U-
2K75._GD+-2B&=5TEd2>36]>/1DX+,aE,dTW1cC\a,CeYb)OY0&bP^RF<e@JC1Dc
\FDAERCQJ>3QPgd?Wf2JFcDA5O[AVH>LU&/D,K,8(#R&g[@>fQ[\3D[E\F([^X7J
?=^?8#SD)e](MZf1Ic\<c\IfY2Ra/,:#;KFOMLA]Z8&6ZZg5#I(@U^K<&G?^UVTU
S\9cY3VP0,g(=D>,b&.ZGLJ60P)674K3beX=AM;Hba=^=(#ecI4R0\b&7]gL8JZL
7&8M<1HZ(Z+D(0:]JeV:-fO9].a&P/2]7,/9@e@GbN17T5.d0OH56e7C4KUNGg4N
.bA@19H&2KV@EAP8:;05KSa.AS9RNSKL3Z;C]6AW)2c(RSc(K0)aJ6#YVB2X7bHU
-Ga4N_9>cZ3&6T=?WYW0eS_NNFOV9.V:=1\+-YR6/=YfgJ0FBAYM>QC,F)5I)=@]
D?MSB?^,(0TK(_TOUQ5_,f,g9Q1g/_&2H+W>+W#aaKGOaTd3PSUBaI,.YE^=acN;
)Sdb1H1=_cJ1S@MCZMSG)2360P0)B3]dOF4LZ?QZ1D:1TF13Cga:#F>_MMC.?U-M
0Ug9V4/MFN1T^AY1#9CQ-HbAV=7@g45(F/SZ:9Q<.M82LMV/)O5?\9.^e;I[,ff_
CgaP4LP7#d>;(ZaK2,NQ#g:W)H_I_30Y)5S&B=VZIA<baeLY)<[(L#43PBAF(6UH
D]TS\TXV?=#6e@Vc4A#)=dFA9;IV+]0RaIG)E)GL2[IcFBWW3G[=;agg=>YKEO.I
>bg3_2^C)5E+Gg4F79^5_KD[&[]ccbC?(OZHX&N>=UE<P?5+0F,Ag[JHGIIaaC<c
F#6cM^03&((,Y/:0Y_O?1L.APL7=&6MW#d;B362Y^:g]IMffOTH@288XD3^?JRT5
K<5?fM(bae/P2)T_K=2,8;ITY0O3g)O@2,XUN4+N^&(>fN)-d9X[XaR4)J^/@8cB
E[>YeB3:7VD[N_Q9A6dC)KCg.=:9H-50&#UBTN]2e0-:Df9YWHX-([[D?+SL6DgH
MaL&\a4A]JX(W,@_<9KVdV>V^fVRI4.50>HF?fU<DCBf0c]=>A<.31I(]SO>W=IZ
YQ.dG[0<B)8JI?_T\Ag^F7_-96(@IW/<&(D51bId(AX5Vg:2#5CWRX:f<]b<43a2
.Y5F3beJ4?F5,=N)8+HLJ<+LF-)f=Y0KG<bVD9KH_SW@L.^Zc]VQ^X?]?2S2aC5J
eWD/NY950dPbG/?\;Z;f]34-R7C;(cK@_^)E5QE6,PVX^HX,VeFDFXJ1)^5=X8@9
>+Q1UF_WG>=CbOI\V8[]FD2cZ?+&YY^bYCgQQOaZK(K/-HTg,8A_=^6Wf-Bb5c-G
EWU>\K60>2+\^4PW<e6bd8EcJ0_Q.Z5?+\,6#e?XA,A_0(L7MO0K>Q7EF<N6<NWC
V#XEOgCXPE;gMAYcV>A@/OZb=ReP&-JXY>Q[41DWLT=JL_IF9Q\_F<-_O,WE-#HT
)6b(1F;ab5OYX8-SS1>2NEb+S8fN\CYGA+9]8STAWO3CZ8/;egM0AK>1GF:K/N5K
A,+Yg?.=IDc[c3?EDDUV-DaSV/R\.:U:GN:f6SLX9QQdLd6_OR:E8K:AHUW[IQ2N
fOX_f60M2C#?[E_G#CF;b_U:e.Q:2Q[R)M5_VV/AE#bGYE+MOY_Sb:#T-441)A72
8&g:N\M7XS>XZ[3[29.4#Qgf\N__G;+8E?HHGS>eE4=Q&O=RL&RKTI/[?@YCR(KK
D(.QCU4O\QBf(PD8I4ff6646/1DZIRSdW.J7;0S.-8fgQG4>EFHGW7@\f[7RI4SR
@,7=.U.H8aS()[#<b,=Z6HNNZC1HM)&;W:</=3NOZ_7_B7U-d&=5E;c<a<<L&XQJ
03e;d[9gc[5:X4e.-:)B0/ECG7;A@VSc4WKR.H]=S>1VNW2JYJ;0aN3UILg4<2fG
\W4AO1gH\X,D.\=4GH<[1K2c9(XNe[&EJ-DWf7<(^2PbgOQC#S(71Q5f=1?14QMc
I@;NL\bFW)^SgIH7[a@3YKfaTaK_9R2+)Z6f80bfWR-FS&6B(9YRg@DF]/XHeDW;
#9dRPKb]b0M]6(.&2C?d+-&d=5d?L.UIQaZV/IJ#I^H<_F>:c;IY-F:Wg)NcXMd@
eS?X:]8F&Y:gA+A]AG4UI&.085J]_AV/KG?)Xg4ddV4>[_D.A2c7fJ&)dbJdF10O
1W:=E+TbbF>SJG_=]FCHUSZD]@Kg9>W.I,;8bUHfA[:80BPWL:JGeN=NYDGe.aP1
U^>EDK1F&N,?3Q.O=6ZACYL1:0NP2@Cg2AAV9?Kg<OPe>Qf.2Q[0R__[.79=04:3
(/7G1#D_V60O,2E-OA:E4=,:T&IZ7<C=[b=BWH8gSP(GJgRf29_@PJ0e5MdWFfQ=
S\N)P\CQ><8KcT1&YJd8#CbV_Q7@=^C0A8=TAS</3NT.IPgf+=U1#@cG4?\caZ8#T$
`endprotected


`endif // GUARD_SVT_AHB_BUS_INFO_SV