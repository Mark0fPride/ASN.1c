/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "RRC.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -pdu=all`
 */

#ifndef	_RRCSetup_H_
#define	_RRCSetup_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "RRCSetup-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCSetup__criticalExtensions_PR {
	RRCSetup__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCSetup__criticalExtensions_PR_rrcSetup,
	RRCSetup__criticalExtensions_PR_criticalExtensionsFuture
} RRCSetup__criticalExtensions_PR;

/* RRCSetup */
typedef struct RRCSetup {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct RRCSetup__criticalExtensions {
		RRCSetup__criticalExtensions_PR present;
		union RRCSetup__criticalExtensions_u {
			RRCSetup_IEs_t	 rrcSetup;
			struct RRCSetup__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCSetup_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCSetup;

#ifdef __cplusplus
}
#endif

#endif	/* _RRCSetup_H_ */
#include <asn_internal.h>
