//=======================================================================
// COPYRIGHT (C) 2015 SYNOPSYS INC.
//
// This software and the associated documentation are confidential and
// proprietary to Synopsys, Inc. Your use or disclosure of this software
// is subject to the terms and conditions of a written license agreement
// between you, or your company, and Synopsys, Inc. In the event of
// publications, the following notice is applicable:
//
// ALL RIGHTS RESERVED
// The entire notice above must be reproduced on all authorized copies.
//
//-----------------------------------------------------------------------

`ifndef GUARD_SVT_FACTORY_1ARG_SV
`define GUARD_SVT_FACTORY_1ARG_SV

/** @cond PRIVATE */

/**
 * Named-base class factory for class hierarchies
 * whose constructor has one argument.
 * The type of the constructor argument is parameterized.
 */
virtual class  svt_factory_1arg #(type BASE_TYPE = int,
                                  type ARG_TYPE = int);

  typedef svt_factory_1arg#(BASE_TYPE, ARG_TYPE) this_type;

`ifdef SVT_VMM_TECHNOLOGY
  /** Default message reporter */
  static vmm_log log = new("svt_factory_1arg", "class");
`endif
  
  /** Class registry */
  local static this_type m_entries[string];

  /**
   * Function that does the actual object creation.
   * Must be overloaded by every type that registers
   * an entry in the factory.
   * 
   * @param arg Argument to the object's constructor
   */
  pure virtual function BASE_TYPE do_create(ARG_TYPE arg);

  /**
   * Registration function, usually called via a static initialized
   *
   * @param name  Name of the type to be created by this factory entry
   * @param entry Factory entry to create an object of the named type.
   */  
  static function void register(string name,
                                this_type entry);
    m_entries[name] = entry;
  endfunction

  /**
   * Create an instance of the requested type.
   * If not found, will suggest that the specified package be included
   *
   * @param name      Name of the type to be created
   * @param arg       Argument to the object's constructor
   * @param pkg_name  Name of the package that should contain the named type
   */
  static function BASE_TYPE create(string   name,
                                   ARG_TYPE arg,
                                   string   pkg_name);
    if (m_entries.exists(name)) begin
      create = m_entries[name].do_create(arg);
    end

    else begin
`ifndef SVT_VMM_TECHNOLOGY
      `SVT_XVM(report_object) reporter = `SVT_XVM(root)::get();
`endif
      `svt_fatal("svt_factory_1arg::create()",
                 {"Attempting to create an instance of unknown type name ",
                  name, ". Make sure the package ", pkg_name, " is loaded."});
      create = null;
    end
  endfunction
endclass

/** @endcond */

`endif
`pragma protect begin_protected
`pragma protect encrypt_agent = "Model Technology", encrypt_agent_info = "6.5b"
`pragma protect data_method = "aes128-cbc"
`pragma protect key_keyowner = "Mentor Graphics Corporation" , key_keyname = "MGC-VERIF-SIM-RSA-1" , key_method = "rsa"
`pragma protect key_block encoding = (enctype = "base64")
QYjX73Vr0Rj9RjMfY2QBQzpHkfuSZwrApsw3QZt6AQetAz80zsOIg56GSiUvKW/j
qZ5bwkObDQMDi5FEDqzvA/AlO1ht2Jd9WQZ8bEtMHWn0EOYt6LAjQSvApvpTv8Wn
PoU0MJMn/q+hNkCt7ceNwU7UKBoPgW402Ya9FtLM48Q=
`pragma protect data_block encoding = ( enctype = "base64", bytes = 83        )
Fw+S6LABJReGJcyvj9jSl/vbc7qNKAUAhU5j5plIKDVIqJ3pFYMOT1dy37szZ8MA
iXPW+erhbIlL7GU5IaEzkEQL9EyNXpXuz3tQ7qjuEGBTtNPrRTxfXi6FgwCDtj8h
`pragma protect end_protected