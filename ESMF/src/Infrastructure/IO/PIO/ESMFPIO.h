#include "ESMF_Conf.inc"

#if defined (ESMF_NETCDF)
#if !defined (_NETCDF)
#define _NETCDF
#endif
#endif

#if defined (ESMF_PNETCDF)
#if !defined (_PNETCDF)
#define _PNETCDF
#endif
#endif

#if !defined (NO_C_SIZEOF)
#define NO_C_SIZEOF
#endif

#if !defined (USEMPIIO)
#define USEMPIIO
#endif

#if defined (ESMF_NAG_UNIX_MODULE)
#define CPRNAG
#endif

#define alloc_mod	esmfalloc_mod
#define box_rearrange	esmfbox_rearrange
#define calcdecomp	esmfcalcdecomp
#define calcdisplace_mod	esmfcalcdisplace_mod
#define iompi_mod	esmfiompi_mod
#define ionf_mod	esmfionf_mod
#define nf_mod	esmfnf_mod
#define pio	esmfpio
#define pio_cpp_utils	esmfpio_cpp_utils
#define pio_kinds	esmfpio_kinds
#define pio_mpi_utils	esmfpio_mpi_utils
#define pio_msg_mod	esmfpio_msg_mod
#define pio_nf_utils	esmfpio_nf_utils
#define pio_spmd_utils	esmfpio_spmd_utils
#define pio_support	esmf_pio_support
#define pio_types	esmfpio_types
#define pio_utils	esmfpio_utils
#define piodarray	esmfpiodarray
#define piolib_mod	esmfpiolib_mod
#define pionfatt_mod	esmfpionfatt_mod
#define pionfget_mod	esmfpionfget_mod
#define pionfput_mod	esmfpionfput_mod
#define pionfread_mod	esmfpionfread_mod
#define pionfwrite_mod	esmfpionfwrite_mod

#define pio_cpp_init_intracom	esmcpio_cpp_init_intracom
#define pio_cpp_init_intercom	esmcpio_cpp_init_intercom
#define pio_cpp_finalize	esmcpio_cpp_finalize
#define pio_cpp_initdecomp_dof_io	esmcpio_cpp_initdecomp_dof_io
#define pio_cpp_initdecomp_dof	esmcpio_cpp_initdecomp_dof
#if 0
#define pio_cpp_initdecomp_dof_dof	esmcpio_cpp_initdecomp_dof_dof
#endif
#define pio_cpp_openfile	esmcpio_cpp_openfile
#define pio_cpp_syncfile	esmcpio_cpp_syncfile
#define pio_cpp_createfile	esmcpio_cpp_createfile
#define pio_cpp_closefile	esmcpio_cpp_closefile
#define pio_cpp_setiotype	esmcpio_cpp_setiotype
#define pio_cpp_numtoread	esmcpio_cpp_numtoread
#define pio_cpp_numtowrite	esmcpio_cpp_numtowrite
#define pio_cpp_setframe	esmcpio_cpp_setframe
#define pio_cpp_advanceframe	esmcpio_cpp_advanceframe
#define pio_cpp_setdebuglevel	esmcpio_cpp_setdebuglevel
#define pio_cpp_seterrorhandlingf	esmcpio_cpp_seterrorhandlingf
#define pio_cpp_seterrorhandlingi	esmcpio_cpp_seterrorhandlingi
#define pio_cpp_get_local_array_size	esmcpio_cpp_get_local_array_size
#define pio_cpp_freedecomp_ios	esmcpio_cpp_freedecomp_ios
#define pio_cpp_freedecomp_file	esmcpio_cpp_freedecomp_file
#define pio_cpp_dupiodesc	esmcpio_cpp_dupiodesc
#define pio_cpp_getnumiotasks	esmcpio_cpp_getnumiotasks
#define pio_cpp_set_hint	esmcpio_cpp_set_hint
#define pio_cpp_getnum_ost	esmcpio_cpp_getnum_ost
#define pio_cpp_setnum_ost	esmcpio_cpp_setnum_ost
#define pio_cpp_file_is_open	esmcpio_cpp_file_is_open
#define pio_cpp_inquire	esmcpio_cpp_inquire
#define pio_cpp_inq_att_vid	esmcpio_cpp_inq_att_vid
#define pio_cpp_inq_att_vdesc	esmcpio_cpp_inq_att_vdesc
#define pio_cpp_inq_attlen_vid	esmcpio_cpp_inq_attlen_vid
#define pio_cpp_inq_attlen_vdesc	esmcpio_cpp_inq_attlen_vdesc
#define pio_cpp_inq_attname_vid	esmcpio_cpp_inq_attname_vid
#define pio_cpp_inq_attname_vdesc	esmcpio_cpp_inq_attname_vdesc
#define pio_cpp_inq_varid_vid	esmcpio_cpp_inq_varid_vid
#define pio_cpp_inq_varid_vdesc	esmcpio_cpp_inq_varid_vdesc
#define pio_cpp_inq_varname_vid	esmcpio_cpp_inq_varname_vid
#define pio_cpp_inq_varname_vdesc	esmcpio_cpp_inq_varname_vdesc
#define pio_cpp_inq_varndims_vid	esmcpio_cpp_inq_varndims_vid
#define pio_cpp_inq_varndims_vdesc	esmcpio_cpp_inq_varndims_vdesc
#define pio_cpp_inq_vartype_vid	esmcpio_cpp_inq_vartype_vid
#define pio_cpp_inq_vartype_vdesc	esmcpio_cpp_inq_vartype_vdesc
#define pio_cpp_inq_vardimid_vid	esmcpio_cpp_inq_vardimid_vid
#define pio_cpp_inq_vardimid_vdesc	esmcpio_cpp_inq_vardimid_vdesc
#define pio_cpp_inq_varnatts_vid	esmcpio_cpp_inq_varnatts_vid
#define pio_cpp_inq_varnatts_vdesc	esmcpio_cpp_inq_varnatts_vdesc
#define pio_cpp_inq_dimid	esmcpio_cpp_inq_dimid
#define pio_cpp_inq_dimname	esmcpio_cpp_inq_dimname
#define pio_cpp_inq_dimlen	esmcpio_cpp_inq_dimlen
#define pio_cpp_def_dim	esmcpio_cpp_def_dim
#define pio_cpp_enddef	esmcpio_cpp_enddef
#define pio_cpp_redef	esmcpio_cpp_redef
#define pio_cpp_def_var_0d	esmcpio_cpp_def_var_0d
#define pio_cpp_def_var_md	esmcpio_cpp_def_var_md
#define pio_cpp_copy_att	esmcpio_cpp_copy_att
#define pio_cpp_inquire_variable_vid	esmcpio_cpp_inquire_variable_vid
#define pio_cpp_inquire_variable_vdesc	esmcpio_cpp_inquire_variable_vdesc
#define pio_cpp_inquire_dimension	esmcpio_cpp_inquire_dimension
#define pio_cpp_read_darray_int	esmcpio_cpp_read_darray_int
#define pio_cpp_read_darray_real	esmcpio_cpp_read_darray_real
#define pio_cpp_read_darray_double	esmcpio_cpp_read_darray_double
#define pio_cpp_write_darray_int	esmcpio_cpp_write_darray_int
#define pio_cpp_write_darray_int_fill	esmcpio_cpp_write_darray_int_fill
#define pio_cpp_write_darray_real	esmcpio_cpp_write_darray_real
#define pio_cpp_write_darray_real_fill	esmcpio_cpp_write_darray_real_fill
#define pio_cpp_write_darray_double	esmcpio_cpp_write_darray_double
#define pio_cpp_write_darray_double_fill	esmcpio_cpp_write_darray_double_fill

#define rearrange esmfrearrange
