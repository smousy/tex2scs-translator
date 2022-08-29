#include "format/sc_scn_tex_textit_command.h"
#include "format/sc_scn_tex_textbf_command.h"
#include "format/sc_scn_tex_uline_command.h"
#include "format/sc_scn_tex_newline_command.h"
#include "format/sc_scn_tex_begin_list_command.h"
#include "format/sc_scn_tex_list_item_command.h"
#include "format/sc_scn_tex_end_list_command.h"
#include "format/sc_scn_tex_qq_command.h"
#include "format/sc_scn_tex_qqi_command.h"

#include "header/sc_scn_tex_current_name_command.h"
#include "header/sc_scn_tex_header_command.h"
#include "header/sc_scn_tex_header_local_command.h"
#include "header/sc_scn_tex_keyword_command.h"
#include "header/sc_scn_tex_section_header_command.h"
#include "header/sc_scn_tex_segment_header_command.h"
#include "header/sc_scn_tex_struct_header_command.h"
#include "header/sc_scn_tex_struct_header_local_command.h"
#include "header/sc_scn_tex_structidtf_command.h"

#include "idtf/sc_scn_tex_explanation_command.h"
#include "idtf/sc_scn_tex_idtf_command.h"
#include "idtf/sc_scn_tex_idtf_text_command.h"
#include "idtf/sc_scn_tex_note_command.h"
#include "idtf/sc_scn_tex_text_relation_command.h"

#include "set/sc_scn_tex_is_element_command.h"
#include "set/sc_scn_tex_is_element_role_command.h"
#include "set/sc_scn_tex_has_element_command.h"
#include "set/sc_scn_tex_has_element_role_command.h"
#include "set/sc_scn_tex_has_element_set_command.h"
#include "set/sc_scn_tex_has_element_list_command.h"
#include "set/sc_scn_tex_sd_main_class_command.h"
#include "set/sc_scn_tex_sd_class_command.h"
#include "set/sc_scn_tex_sd_relation_command.h"
#include "set/sc_scn_tex_nrel_to_command.h"
#include "set/sc_scn_tex_superset_command.h"
#include "set/sc_scn_tex_nrel_from_command.h"
#include "set/sc_scn_tex_subset_command.h"
#include "set/sc_scn_tex_nrel_from_set_command.h"
#include "set/sc_scn_tex_subdividing_command.h"
#include "set/sc_scn_tex_nrel_from_list_command.h"
#include "set/sc_scn_tex_nrel_from_vector_command.h"
#include "set/sc_scn_tex_nrel_both_command.h"
#include "set/sc_scn_tex_start_set_command.h"
#include "set/sc_scn_tex_start_set_local_command.h"
#include "set/sc_scn_tex_start_substruct_command.h"
#include "set/sc_scn_tex_end_struct_command.h"
#include "set/sc_scn_tex_is_var_element_command.h"
#include "set/sc_scn_tex_has_var_element_command.h"
#include "set/sc_scn_tex_has_var_element_role_command.h"
#include "set/sc_scn_tex_nrel_var_to_command.h"
#include "set/sc_scn_tex_nrel_var_from_command.h"
#include "set/sc_scn_tex_not_subset_command.h"

#include "file/sc_scn_tex_file_item_command.h"
#include "file/sc_scn_tex_file_scg_item_command.h"
#include "file/sc_scn_tex_file_image_command.h"
#include "file/sc_scn_tex_include_graphics_command.h"
#include "file/sc_scn_tex_file_long_command.h"

#include "sign/sc_scn_tex_nonamed_node_command.h"
#include "sign/sc_scn_tex_role_sign_command.h"
#include "sign/sc_scn_tex_supergroup_sign_command.h"
