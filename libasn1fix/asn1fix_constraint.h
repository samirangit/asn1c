#ifndef	_ASN1FIX_CONSTRAINT_H_
#define	_ASN1FIX_CONSTRAINT_H_

/*
 * Resolve referenced values inside constraints.
 */
int asn1constraint_resolve(arg_t *arg, asn1p_module_t *module,
	asn1p_constraint_t *ct,
	asn1p_expr_type_e topmost_parent_expression_type,
	enum asn1p_constraint_type_e effective_constraint_type);

/*
 * Collect all subtype constraints from all parents of this type and
 * the type itself, forming a full constraint structure.
 * Honors the constraints extensibility rules (46.8)
 * and does other useful transformations.
 */
int asn1constraint_pullup(arg_t *arg);

#endif	/* _ASN1FIX_CONSTRAINT_H_ */
