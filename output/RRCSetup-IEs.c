/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "RRC.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -pdu=all`
 */

#include "RRCSetup-IEs.h"

#include "RRCSetup-v1700-IEs.h"
static int
memb_masterCellGroup_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

static asn_TYPE_member_t asn_MBR_RRCSetup_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCSetup_IEs, radioBearerConfig),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioBearerConfig,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"radioBearerConfig"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCSetup_IEs, masterCellGroup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		memb_masterCellGroup_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"masterCellGroup"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCSetup_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCSetup_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCSetup_v1700_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"nonCriticalExtension"
		},
};
static const ber_tlv_tag_t asn_DEF_RRCSetup_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCSetup_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* radioBearerConfig */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* masterCellGroup */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* nonCriticalExtension */
};
static asn_SEQUENCE_specifics_t asn_SPC_RRCSetup_IEs_specs_1 = {
	sizeof(struct RRCSetup_IEs),
	offsetof(struct RRCSetup_IEs, _asn_ctx),
	asn_MAP_RRCSetup_IEs_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RRCSetup_IEs = {
	"RRCSetup-IEs",
	"RRCSetup-IEs",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_RRCSetup_IEs_tags_1,
	sizeof(asn_DEF_RRCSetup_IEs_tags_1)
		/sizeof(asn_DEF_RRCSetup_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCSetup_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCSetup_IEs_tags_1)
		/sizeof(asn_DEF_RRCSetup_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RRCSetup_IEs_1,
	4,	/* Elements count */
	&asn_SPC_RRCSetup_IEs_specs_1	/* Additional specs */
};

