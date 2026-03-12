
package org.openapitools.client.model


case class VpsOrderPlatformPackages (
    _kvm: Option[Number],
    _kvmstorage: Option[Number],
    _hyperv: Option[Number]
)
object VpsOrderPlatformPackages {
    def toStringBody(var_kvm: Object, var_kvmstorage: Object, var_hyperv: Object) =
        s"""
        | {
        | "kvm":$var_kvm,"kvmstorage":$var_kvmstorage,"hyperv":$var_hyperv
        | }
        """.stripMargin
}
