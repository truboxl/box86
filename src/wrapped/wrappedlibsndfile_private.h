#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error Meh....
#endif

GO(sf_close, iFp)
GO(sf_command, iFpipi)
GO(sf_current_byterate, iFp)
GO(sf_error, iFp)
GO(sf_error_number, pFi)
GO(sf_error_str, pFpi)
GO(sf_format_check, iFp)
GO(sf_get_chunk_data, iFpp)
GO(sf_get_chunk_iterator, pFpp)
GO(sf_get_chunk_size, iFpp)
GO(sf_get_string, pFpi)
GO(sf_next_chunk_iterator, pFp)
GO(sf_open, pFpip)
GO(sf_open_fd, pFiipi)
GO(sf_open_virtual, pFpipp)  // False, 1st pointer is a structure with 5 callbacks!
GO(sf_perror, iFp)
GO(sf_read_double, IFppI)
GO(sf_readf_double, IFppI)
GO(sf_readf_float, IFppI)
GO(sf_readf_int, IFppI)
GO(sf_read_float, IFppI)
GO(sf_readf_short, IFppI)
GO(sf_read_int, IFppI)
GO(sf_read_raw, IFppI)
GO(sf_read_short, IFppI)
GO(sf_seek, IFpIi)
GO(sf_set_chunk, iFpp)
GO(sf_set_string, iFpip)
GO(sf_strerror, pFp)
GO(sf_version_string, pFv)
GO(sf_write_double, IFppI)
GO(sf_writef_double, IFppI)
GO(sf_writef_float, IFppI)
GO(sf_writef_int, IFppI)
GO(sf_write_float, IFppI)
GO(sf_writef_short, IFppI)
GO(sf_write_int, IFppI)
GO(sf_write_raw, IFppI)
GO(sf_write_short, IFppI)
GO(sf_write_sync, vFp)
