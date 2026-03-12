
package org.openapitools.client.model


case class DomainDnssecRecordsInner (
    _algorithm: Option[String],
    _digest_type: Option[String],
    _digest: Option[String],
    _key_tag: Option[String]
)
object DomainDnssecRecordsInner {
    def toStringBody(var_algorithm: Object, var_digest_type: Object, var_digest: Object, var_key_tag: Object) =
        s"""
        | {
        | "algorithm":$var_algorithm,"digest_type":$var_digest_type,"digest":$var_digest,"key_tag":$var_key_tag
        | }
        """.stripMargin
}
