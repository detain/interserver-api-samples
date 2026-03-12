
package org.openapitools.client.model


case class VpsOrderLocationStock1 (
    _kvm: Option[Boolean],
    _kvmstorage: Option[Boolean],
    _hyperv: Option[Boolean]
)
object VpsOrderLocationStock1 {
    def toStringBody(var_kvm: Object, var_kvmstorage: Object, var_hyperv: Object) =
        s"""
        | {
        | "kvm":$var_kvm,"kvmstorage":$var_kvmstorage,"hyperv":$var_hyperv
        | }
        """.stripMargin
}
