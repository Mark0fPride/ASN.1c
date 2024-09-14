/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "RRC.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -pdu=all`
 */

#ifndef	_RRCSetupComplete_v1700_IEs_H_
#define	_RRCSetupComplete_v1700_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCSetupComplete_v1700_IEs__onboardingRequest_r17 {
	RRCSetupComplete_v1700_IEs__onboardingRequest_r17_true	= 0
} e_RRCSetupComplete_v1700_IEs__onboardingRequest_r17;

/* Forward declarations */
struct RRCSetupComplete_v1800_IEs;

/* RRCSetupComplete-v1700-IEs */
typedef struct RRCSetupComplete_v1700_IEs {
	long	*onboardingRequest_r17	/* OPTIONAL */;
	struct RRCSetupComplete_v1800_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCSetupComplete_v1700_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_onboardingRequest_r17_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCSetupComplete_v1700_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _RRCSetupComplete_v1700_IEs_H_ */
#include <asn_internal.h>
