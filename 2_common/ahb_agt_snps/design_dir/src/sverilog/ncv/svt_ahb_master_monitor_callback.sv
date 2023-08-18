
`ifndef GUARD_SVT_AHB_MASTER_MONITOR_CALLBACK_UVM_SV
`define GUARD_SVT_AHB_MASTER_MONITOR_CALLBACK_UVM_SV

/**
 *  Master monitor callback class contains the callback methods called by the
 *  master monitor component.
 */
`ifdef SVT_VMM_TECHNOLOGY
class svt_ahb_master_monitor_callback extends svt_xactor_callbacks;
`else
class svt_ahb_master_monitor_callback extends svt_callback;
`endif

  //----------------------------------------------------------------------------
  /** CONSTUCTOR: Create a new callback instance */
`ifdef SVT_VMM_TECHNOLOGY
  extern function new();
`else
  extern function new(string name = "svt_ahb_master_monitor_callback");
`endif

//vcs_vip_protect
//pragma protect begin_protected
//pragma protect key_keyowner=Cadence Design Systems.
//pragma protect key_keyname=CDS_KEY
//pragma protect key_method=RC5
//pragma protect key_block
EWcpgYLTaED4tB8nvrWIXCsDQuWashTnzQpGmUBRh4eAIt7Qh0eZh+b3mUumKo9n
st48pKJsWdeVLWjvriNVlUd1DsLA3maW3YlP5Y8kOtDu0QbcZfqMR3zuk5eh7yiX
dWH53wPUGzJL9MuPw9XJJKgNsfcklN+HDKd9A4MrVmiYM2cxWAODeQ==
//pragma protect end_key_block
//pragma protect digest_block
0tI1EAx0nxYo4acg6/ikaDHQAU8=
//pragma protect end_digest_block
//pragma protect data_block
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
RbOVTf+WmFP61C+jsNdxAQ==
//pragma protect end_data_block
//pragma protect digest_block
TzpfamHeIVPyQF/3oXzWw+7Tiu0=
//pragma protect end_digest_block
//pragma protect end_protected
endclass

//pragma protect begin_protected
//pragma protect key_keyowner=Cadence Design Systems.
//pragma protect key_keyname=CDS_KEY
//pragma protect key_method=RC5
//pragma protect key_block
VpthZoSnxiIi2F9shiFK8jECgK4vbRLDXZ/Y+bmy+/HXlae9Oio6spehwKAZmk41
Iuoa0hsG9lBzHanqH/7FL20zDydqsiGXtYUbWtspz5lDfXXWhS1WJPOmoP+W1LZ6
bBU+31DLtF6T7+2pfsUZkSHWMZInKPJz1oKQ3NfxJBb4IzYZ5e6VAA==
//pragma protect end_key_block
//pragma protect digest_block
YeG29wyupISh8+1SentKhlaF0XQ=
//pragma protect end_digest_block
//pragma protect data_block
+u8q/C6n0yjco5b6gJaAhezeFmC9epdeZmDD3I/fQS3aP4OXHhil2I3cBR7R50GQ
d4HZ2VbjtHbFaN+Mjnq1tt/3tgYUu0t9vHUt69czoCtUVJhpwrpaHKPgs1WPH9H1
bvKmBLexj2EPRAxF7vYrkyx/wJD9EcFkekiYs8SlZVuN/7FCCqoyTXf6Qr9oeBfA
DKl98JV3Hf8alJmsr941Urjt2ezwDVqZMtQNWiZH3QyYM8xYFg60BQ/Fhqlof+iw
x9wg1UbkLXjqT4Si2dVaFj0OfcXdM2AFtzXsI63/4q32qVN8gPPuBo2m7CHqWWuu
BAg5eJH2RKrDHqDliae2dDINChHvI90j1UbX2cPciDenP/oxwhGR8Wkumv59VXYR
aHZfyBDtOM9aFwgaXI1rRPpabdYEGRlOhnmtqmk2emlX35lfvED6H8nBC/uL5pMo
C8n4/MdA0iG95OBw+Os72hLP9MRqG+9yBw2VFRoGp8Oj4mRSS8damg24M9K0IPSb
MJOG6EChnuE75OxNBMejaubKZAoHybVRB9nD+UXMpb/slyGfFSQh70VqOFw3QlAj
00erCsIXHu8jkbN4U93u54Y9i48E5p6e8TtOWvP2Vmfe+7ty8Be9uFdeLSDRnaTX
Lc9JoD4lK0EvvAeOyxT3Wx4gJp+HMf0MY6B25TRMf3VKdLQZ0Ou//Ww0sUevDO0h
2XnUYH1VFOFwkC0C4K1bT/80E0sy3ApR3Mb1h6wGxn+fX+KTKugzIltft9v90b+A

//pragma protect end_data_block
//pragma protect digest_block
vNT8NQl6weQ19P7n2pmRydf8/AU=
//pragma protect end_digest_block
//pragma protect end_protected

`endif // GUARD_SVT_AHB_MASTER_MONITOR_CALLBACK_UVM_SV