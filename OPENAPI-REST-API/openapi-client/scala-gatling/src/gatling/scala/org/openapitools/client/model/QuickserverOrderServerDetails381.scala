
package org.openapitools.client.model


case class QuickserverOrderServerDetails381 (
    /* CPU details of the server. */
    _cpu: Option[String],
    /* RAM capacity of the server. */
    _ram: Option[String],
    /* Hard disk capacity of the server. */
    _hd: Option[String],
    /* Number of CPU cores. */
    _cores: Option[Integer],
    /* Cost of the server. */
    _cost: Option[String]
)
object QuickserverOrderServerDetails381 {
    def toStringBody(var_cpu: Object, var_ram: Object, var_hd: Object, var_cores: Object, var_cost: Object) =
        s"""
        | {
        | "cpu":$var_cpu,"ram":$var_ram,"hd":$var_hd,"cores":$var_cores,"cost":$var_cost
        | }
        """.stripMargin
}
