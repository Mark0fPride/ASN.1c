/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "RRC.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -pdu=all`
 */

#ifndef	_RRCSetup_IEs_H_
#define	_RRCSetup_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RadioBearerConfig.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RRCSetup_v1700_IEs;

/* RRCSetup-IEs */
typedef struct RRCSetup_IEs {
	RadioBearerConfig_t	 radioBearerConfig;
	OCTET_STRING_t	 masterCellGroup;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct RRCSetup_v1700_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCSetup_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCSetup_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _RRCSetup_IEs_H_ */
#include <asn_internal.h>