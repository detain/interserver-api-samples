
package org.openapitools.client.model


case class VpsOrderPlatformNames (
    _kvm: Option[String],
    _kvmstorage: Option[String],
    _hyperv: Option[String]
)
object VpsOrderPlatformNames {
    def toStringBody(var_kvm: Object, var_kvmstorage: Object, var_hyperv: Object) =
        s"""
        | {
        | "kvm":$var_kvm,"kvmstorage":$var_kvmstorage,"hyperv":$var_hyperv
        | }
        """.stripMargin
}
