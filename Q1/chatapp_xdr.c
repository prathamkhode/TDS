/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "chatapp.h"

bool_t
xdr_data (XDR *xdrs, data *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->msg, 80,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}
