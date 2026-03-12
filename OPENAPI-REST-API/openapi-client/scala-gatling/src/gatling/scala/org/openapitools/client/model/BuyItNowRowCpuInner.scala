
package org.openapitools.client.model


case class BuyItNowRowCpuInner (
    _img: Option[String],
    _type: Option[String],
    _speed: Option[String],
    _num_cpus: Option[String],
    _num_cores: Option[String]
)
object BuyItNowRowCpuInner {
    def toStringBody(var_img: Object, var_type: Object, var_speed: Object, var_num_cpus: Object, var_num_cores: Object) =
        s"""
        | {
        | "img":$var_img,"type":$var_type,"speed":$var_speed,"num_cpus":$var_num_cpus,"num_cores":$var_num_cores
        | }
        """.stripMargin
}
