
package org.openapitools.client.model


case class DomainDnssecRequest (
    /* List of DNSSEC algorithm IDs for each record. */
    _algorithm: Option[List[Integer]],
    /* List of digest type IDs for each record. */
    _digest_type: Option[List[Integer]],
    /* List of hex digests for each record. */
    _digest: Option[List[String]],
    /* List of key tag values corresponding to each record. */
    _key_tag: Option[List[Integer]]
)
object DomainDnssecRequest {
    def toStringBody(var_algorithm: Object, var_digest_type: Object, var_digest: Object, var_key_tag: Object) =
        s"""
        | {
        | "algorithm":$var_algorithm,"digest_type":$var_digest_type,"digest":$var_digest,"key_tag":$var_key_tag
        | }
        """.stripMargin
}
