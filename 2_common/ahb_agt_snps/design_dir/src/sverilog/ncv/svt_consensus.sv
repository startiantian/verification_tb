//=======================================================================
// COPYRIGHT (C) 2011-2017 SYNOPSYS INC.
// This software and the associated documentation are confidential and
// proprietary to Synopsys, Inc. Your use or disclosure of this software
// is subject to the terms and conditions of a written license agreement
// between you, or your company, and Synopsys, Inc. In the event of
// publications, the following notice is applicable:
//
// ALL RIGHTS RESERVED
//
// The entire notice above must be reproduced on all authorized copies.
//
//-----------------------------------------------------------------------

`ifndef GUARD_SVT_CONSENSUS_SV
`define GUARD_SVT_CONSENSUS_SV

`ifdef SVT_VMM_TECHNOLOGY

// Use vmm_consensus for the basic consensus definition
`define SVT_CONSENSUS_BASE_TYPE vmm_consensus

`else // SVT_O/UVM_TECHNOLOGY

// If not using VMM technology then create equivalent consensus functionality, relying on uvm_objection
`define SVT_CONSENSUS_BASE_TYPE svt_consensus

//svt_vcs_lic_vip_protect
//pragma protect begin_protected
//pragma protect key_keyowner=Cadence Design Systems.
//pragma protect key_keyname=CDS_KEY
//pragma protect key_method=RC5
//pragma protect key_block
bXxP8pDFABV93YhOpwY9ukipA1ljBh+xKva2mxhLshAk1wMYRvdWHxl3PSg32HPc
E+P9NEcsHQxBGct9pXy+W9koIX8LH6Sa0PeDClCSf7C1NVqrsyqM/FJkqxuM8aYe
1bRL/2VMIv58554Th21zOAISdKxeA7CTZW0UDlRAyeeN+OidUJkGBA==
//pragma protect end_key_block
//pragma protect digest_block
1WLVF5PVt4MnYArum3KB9bLEwkk=
//pragma protect end_digest_block
//pragma protect data_block
7d7vX2OGGxcexNrR4bhtZYHgF+KK6eRu1nzlm38qwxBT+ehVG+xlrDAZ/S1K7UM6
Rn7IP9yEG4fPQ+jF5RUkKjdyudnQorxWA53AlbbIoWvDKaV7Aur4U4D3Xk1o9I6X
hRaCq5s5gtQegV60yU1lM4jq3+Q3iZ2jJmvxT2gc2dh1HHDxxzQk/TNts8jOYFos
414uKKfFJxTSp9mImFzE01oahOX2UNNjtZdW5UdGR9viMIzFCIGCzad0fa9I3nQo
K+CRwaBit0y1/RA/0/5S68JxHqMsM8EZ4vlqajc4hIVsEADMu3TCJStJ91wq86T/
NmPDsxCFyCZLWCskAL1QQbTy1ALHrbTBAIoLBqGQW7w/FxfLt14eHG7M1mag2dI+
uuFGepMjDXcyJ1okq53tnJqWAN+l2CK6S6YvZ1G8qi/298uwdiJqj6tnlZQ8bqyE
oeKJx1QP02FT+cHpKA9faw==
//pragma protect end_data_block
//pragma protect digest_block
eXkOL8mNAxLgTMGGxBsQ4PPY0XM=
//pragma protect end_digest_block
//pragma protect end_protected

/**
 * Consensus implementation used to provide a basic consensus capability in UVM.
 */
class svt_consensus extends `SVT_XVM(report_object);

//svt_vcs_lic_vip_protect
//pragma protect begin_protected
//pragma protect key_keyowner=Cadence Design Systems.
//pragma protect key_keyname=CDS_KEY
//pragma protect key_method=RC5
//pragma protect key_block
7OJDxxqeyySQBQ2M09f58BRs7ADxm9C8WoN24FYOQX4AtWA51DiPzFqOxg901bAv
C50zd0Ksg+gokElicgjdfMQBpUJOR3WiA5TTcX8YDw61yEV+58unZ/JIP/6NnaOs
JEAjcng89cXghAESkdHvlUpMVTC7/zKKa+9GDuQwB/C8DPcBbVobTA==
//pragma protect end_key_block
//pragma protect digest_block
57X0Ocbn5xilWuUR6vEYdHQFmRg=
//pragma protect end_digest_block
//pragma protect data_block
9KVecq1BsZid0wemdI7qHklLiS0UYznVd21E1dljjZlBG3P+KJ/OgewJ25kEiNkJ
+43vrut8WM3D+rmosNLRmV84Mj/ZSqjRM90pHP2Ycw2Mnc6EarjQTIEWGbI5famv
ZXT7iXjfdMX584zq/0gyAeVq+DSigi7fnKLL3fTB4C8rpyVje7y9c/jFac/6RXJM
OljRwy/qy5P5u1yVPt0P3OjfNPS5HuD+BDwPbb78gYYJP/f2JIQQXyR2+li0ipR0
6vGBDTtdqerwU1GiXhyda2Lhy3VkSkZoatRf7xWLNNZq7ygq3foLPR75Vacajq43
m26b6/cnsT3nykwviL9eykZc5sqKYEn5nzWEtSAIcNHtuenc+gQ+6MH4blheO8wK
Hr4Kz/nPfpefJI5f9pmin5QJmNFtM7SoSgQDKZV5R/Jn1rAroCjiDLlo8Wd1xEdR
TfKqaDLGajdnTHnzJPlLIN1IrqXlDBTp/aEuWsgs8kRiernNZYaerVXlI0BtHqhi
flxhgVBZAkubAaPhcJFRJznpYW1gv2KBh/0oyYF5LLMR70NZF2Tkx6zwIWR2Z/cu
DtJIby70yI52cQv8MjpVdJ03/TnVtODagXqp+MumObmG3/trLDAVZzVf8uLXO/ZA
W47FLIniShdW50pwU7rb45gubP9lmHnmPY2Mf5PKC4NOeBBVpIdmWOaXjcMIWdZj
/3poBgntXJ7z/sPbbaqpljJghCzTiASGRKL9PYgwHacEum/vBO843huvPIVX7xa2
SyxKJJAywsH8pat0sssQ1Q8Wdkl0lzUBaR+5hdqfK6r630/rkEB5JI5oRapgoNU6
J8h9w/gLYRr/8V+YbmxmWr8pFRTltVomh8BmZgKRSG1SmbfEMjv8EBpfvNccfrWw
KzkkU/O6mROuQOB/asg48yWR3Xach4rCVBgU2XUoRMI4BUsd1mICRr8sufM7xkhS
R38Cw1e3kfAeoPeO3RatHm7pmIje5x0A8IpVJtMlKg4cnUkqubC3yfdkCvHBn/nW
BN6gyNhmyP+7PLNsoe3rgZz5cB+LQ8MfvWCCsRfGQg9V+sOmws345iVSEBvX/mql
8CwIVBPlq7ckmEDmIHtnjiRIf+uWTdutVfiCi4i7DKUdg0aDQoPkqEsNgkOMgbR2
wwNf3D90rIpJmSrPl9IGfKO0qQtF6UKLnknxcXEt0a3dzFGHDY1EAgOPnOOWHYhV
mQUROT0913wXNUB5ZQ2Z6fWuXERNC88Y046vvTrViz+8JLN9S2nloAmRepimXDXX
6hL654JzPxDrn8dke3mIt3PnYsFCoOu5cCy5C9iF18A94ecjlbr3hBj4cEjacYTp
OhNDGeslqwPZyhxiGztRVlpmU+9ZU7iGaXGym9yAQOpRCTPOcSXs/irgOxSDRNh5
aL5bVKimaNXJHvXE+i1LDDbh8Uobg5M0gCh4EsB4YwbKGsj6WID+aTrDQESjkQPg
Uw81+2RzsPVytWc7wQpOzUKzbBZMEtsKtqMYfFidwt9mK9AiwAJUS82CtiG6i2t2
CE7BB3/J6oZsbjUFtF76d79ku0NLRTeh5bTTEBTGZG9zNkkKq/hdKwPmy2pSHCZq
Ce34vKl/2eC1TxJfJK6jYUGGFq/cPn7lW0Jn5zP55UQ=
//pragma protect end_data_block
//pragma protect digest_block
thheD82mB+HKyTtp7ZKu4O0bNS8=
//pragma protect end_digest_block
//pragma protect end_protected

endclass

//svt_vcs_lic_vip_protect
//pragma protect begin_protected
//pragma protect key_keyowner=Cadence Design Systems.
//pragma protect key_keyname=CDS_KEY
//pragma protect key_method=RC5
//pragma protect key_block
OpICo4GnwYrZRceGAlmLan1S27sz7rdjuS7ft8W9iZO/Tv4C+BFMf3RZDDyNUe9x
9PkCKM4eRIYbECCMPBLVPuNyk8S47F4pl3zyfN4ieC2a4tkLLzEsUyJxF/LIW961
rxnVTW7cZGfxNhzdml54E6ir93wXVBNhSnMLgH3JfoTTN1gBAxqb5g==
//pragma protect end_key_block
//pragma protect digest_block
gBc5gJOz4Ui/ww98mQOFqBmFoi4=
//pragma protect end_digest_block
//pragma protect data_block
B3L0HCw/7t3oM5TQCySsnUitPC1uCpftwst1YiibM6d8UV1ipacD8Fkp+l2YTKnL
0AX4ylLt1Ipkk447cu9xH8Wih2GKMbgKPspZdqgd2eu7/mn51lO+XvtZ9+kovTSz
H9X94ri+17QfX2uFNCI9zGhA6KInX+hD5iDm5zSiNVI/pmZ11rEZ/9bNoOl60ToU
fYPeytkoaGUj1GiHPHNnidfyUMd0iof1h4w3QfludLt1CkWlyjzBSb6jug88ACNH
YLjDHHRAP8Ixu96IEu1RT0WmMcmCWfaGT+zJzKOBAK6deXJJDJ09VupiVGK+3V86
5gZ0oh6XMjoQqNSvCVW/Z0do2IaEfjvSUMTrg4K/0VS3voN9LeTWtJu0SxLuAJ15
nnztyt/1mbvjNUrPkMJX5FHZjCxCw0uRMAIANs+zJV3TFQBjF0t2BwydxcSLAb0b
Nl5btHEdJoozA+QM+IOSFSsSV+yn05lf1+19wKThi49qedRJy5AAv6P+7ZySPnzJ
Ez4/0aEhpW8GxBKhw7Rn+eBA155op9QbZ7H+IRx/nnCXuAjDZr+j/HPOa9ghT2TI
yO2+T7PkE4+C79KeYS5naUclDIfwwXiyMSByDC5njNSbgYCQ/Wep6SaZCWifvtgb
zp2mU/yIPZYj/Fd7xKVn+7b6RpY35iLOyMcuxogyA+SYWx1mbIA7QXbcQofiFZRp
/3WQxmhvacwXaOiSBu6tJw0HxlECHgnEasSWbjKMWX0PHS9UVflXr6S8f5j6eD4d
Jg5LZVtdLT9lGNWhA+duOyEKlZ38nUBUUpwxpfU0VDc4ttd2aH40WW4nZFzXZV+/
2HMVBBMsxXumc++6RuUFhokd2BoNYxXWS31h/K0LprjozV2juHOWFP4C7RKkoIMP
ERr3tEh8tUvRjkI2V1Zs2IdRehF8j1JoBAJbWPmpycRv2KVDQU7g7mfK8dpDFBGU
HKmjMQK541UiK4HQ/u7jliQJor+DHerHiVIubQpNRaQyxU4jk3ruwl0wxY3NhRUy
eFYLKwzAXCUn7uoIugDgNsWSzM3c+7QnkYiOnsdYq3ULMLdkEjEv5a30n+j6WLzv
aJv9zEeibSDQyFSUJ8KX3GrqDRzW7CcE+8KIRyalo+8x89eCoT9o4fiRc30F6rqU
vTTZfqAPACVJbJ4jZ4wzNKBvR5dJW2Pw3WF6w7xsrcPPM/4dqKcJ4aRR+HkyUOcQ
i6RVtoQgKJbuPSydLawtezLQE0qu3R0R7oh3ie9kE3L0LeuyMk1bsw8ZY9DWI9mf
pdXmv4eP1cOeGhp1fHEZ+uQvJ5Q/i+KrxI7rNBIlceMVgPohvf9VtkGseUhxC40i
pqKl0VdNLLdydsv/ndzFIc6nswCZv1Im717vKWdvVEoOR+YUwgDuJ708Dp9BP/qc
Dp3OMqEQNsptqQZbrUv+6/eqMh0wOYAQs5jFClLpbEM5OTJeiaEr1cUdRUnAryUi
d19MF8PY/9qbu4Ezs2OTIMOsox+XVy/LYh1G7NXrGOU3UG9LVVbNz8qeURFEkIj5
PlyGf0v738FfbuEZlcBXrepBwbEfB8ymEcQ3MFoe8Xx5q2JNcN/mresK1OsLj8Z7
Ccquq2THVb+5vYTd97mEFTW/xHdVmg/ortbY3d7wmM1V0dYmW0cnckmhFcNZn88h
DcN+K/96QgrKGvEO/xnGKTPle01ntyvkyQUN1dWbu0PeRLK7Yl5mi/UUV4wQXikL
V+8iQ42K+rXl1mbCKbpGIM8XeyzOZScLnbh0ayweVI6AdDCX4ZzeAmz1YX/ZZwES
BKG8sHmQqJ7DOnyAXYk97jhSUxldTVJMRiDqnkwEjNgOWrYTK05bRYuMbUcBd73t
LGnfSMGxydPUtwx3J4X3K18Z+NarpMBUuKo4CaN4mb+0NxDKMe8hWDxB5LKkSg1l
8oyrwE9g0toUeRcWXTETsVCj9LG0xr7MrjwnbXCwldD5e0v4/Wf5yLQwZeFxwo9b
Vro62oR8Gv28pyURADTNXGVSz4aPYNLdQjNXrjGYudC9q6AzMMhN20qfyKWdfx6m
IE+uXnVnEe2md8qAbeilgj6OXEK9/UlSE+6gMXeFxTfCX3mxOHDesP3tkGO2J8Ye
cENoxGQ/nmrJUTF+60IWoltc4vDutW5dHJTz2LKe8J9IatfnQ1CfxBPwbsZp5foi
sEw9EzLs8MZN/zicyua5kSQFSIDiZfMJ/gwEetxGFDrxMP/1lnHakXO/1rjn7xIn
h772H+TKjkYDeUT3pGwyt/rRnH0Mn/9HNF86x2OZy/R2BpbG7gcTAa4I/8ZB+hHD
oT1HDHCcfZnT14YVRkSU69uJTnKA1urie8XwtgP0Ux42OtyyfB8dfFvkg8z8x6z/
EHdiV7xVJg8+FcO0r7vNiYLhr2xCG3rQwk955IYzKAZy6cn3ZlWB7ZnUFZYC6+uD
Mi8SsZcqfQLnvOiaA0v1fal5UQa+x7KZb6Tg6OO5sNyZht41MWUgjVLahugrQejG
RuZ87HgyhLAmKphTHOOXprpfRmqPirExA63ISp2/81Ai3k7Hq2zxY0navJNb9eOE
4WFTqEjZqjueEbKzVarQp27LDmFieR545QFZG4BxFnG/n8Cqn+UQCWWC+V5ck6Ca
zRNg8S2ta1CIVdxKLhF81XEhmoRmuaG66uwkflcGXvWCt9Cx3mnzPtGGHZEjkBoG
2cny2kBO/c6+fEszXX2GpKWPXI3+KKC3AcJBcULZ4Jp3HFo2nknjulAHilqQ67El
JW/YLnshUGM5yPwgGl8dBbPmY4/AG3jZrQgGEuW0mk0rDyEwNncTXAIcb4g7RMpD
SOh30FKeADRQLSl1krDpMtxU/+rKt6YzLkPjFYoazbMOZTRc2kBS1Vp5/q8jEulz
Mzf47qk+aW0jYOQEiKP/TwO35XlL0DRMEwEKHn/19c2dKgCGTnyQvlKcPntXMmpl
cTA232B+5k7Y41YTgRdcqXFm+t3Q3rChT9Vs038r5tf1FGavV3oJlnuTK7WciXoq
o0W5+yZIfJ56JnQ3oLepZS07hjj/a+K5SXiNLBPMrKrhXftDEECKooTmjaJ0XE5D
e1fl+l07rcfpkFlRtIEUqsPoJTQj24G0TEekv4QROuz/cAvy/wD0qxTTW5E7Wxam
WTzd+JewGGgpiOvKATyWDePpXruQAFPqlm7bOvhVl7o+OlDFG3NoJa6auSAkgUOB
21/3CJtFSGErMjgOvNDkCPjZEGlbN/dhOoWSRaozufVa0IX6DbH9GeJpm+/Bp3UG
ca2ZxS/fe/nbvJG0RJQuZo7UZR2ABL6Kff6xtLgaTaEx1M7i1z81czhfyryU4GVb
UI/7N4yttRVHKrQ2On076spKd921jT+s+Pb2mi+iVmvqyKvbC0SObKjB/wIuccxi
52Xjp1GYQCYZRe9WElpikijgFSvml2qNj/4BQtmEzximhsYj+ddGfsTGM3g1rRKT
gVrT0Hd7zkj8V/Pk3xhbe66g+8PMsUyNTfe8FQUTJG4X/gpB7NPh4a5vnOmZu7OW
YdhyGLAhcNalq5R08iiFQP0Pzqs5dsO5eVNHlszyz9BHTLHXNKd9bQozYhv0MmUw
akoOBPEvo3rXo6U0arW5XkWAfUhHQi3fnz5HgA58qL4lyY1fdPBHeELWBU6cCVKf
P9aFcbiGRvo0hC3EM0R4bLNWgPVqgRiAXa2vyolaJlZMm+JFTNhnWZZcofdfM07/
80s8ayAPuDCJxDXyw5OZUvGTCtLu0RzfOz2mGXjMbKSNlYCeSqjAAjCqFPVXBVo3
V8cNUyotYJFBuv4rQQcGALGwvON9CJdJNSpFomNri/ycieT6ywnaO1Yq/+ie+1cx
SP0A+wO/kIrCfdGGupRWtA8fO7KAxckr5hH5PdnvFUpcpylkilhUefew/rA7JJbS
QUVEO3QP0kyAxPuCBrfCEUrGeRngX3HqtiCjo6HPfLdAjmMPYBGNu+wQeFk7Gofm
wOWbU6j2UwOx7d4sUWKlmY9NECkcX24iN1/r8E/3mjSKk9m+2ucFxzEB1kxyVPLF
U4OjV8aIPkqhFKX23CpIOLZ2uiYejuCcDRa2G+cHsyHgxlX4cIFMFOuM1p224sXl
0o5nhfcNfIe/v9Y23eUD09JrScLJEwjes/QPErqD88x0p+t89kTp06Mlx8c7BFG+
UvgUjxjH4TTveDT8y0SVCw==
//pragma protect end_data_block
//pragma protect digest_block
1BD359QZ2042+x4jwma/Hb1m8z0=
//pragma protect end_digest_block
//pragma protect end_protected

`endif // SVT_UVM_TECHNOLOGY

`endif // GUARD_SVT_CONSENSUS_SV