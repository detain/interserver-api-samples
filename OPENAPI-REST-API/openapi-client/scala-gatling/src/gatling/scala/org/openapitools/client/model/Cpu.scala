
package org.openapitools.client.model


case class Cpu (
    _id: Option[Integer],
    _short_desc: Option[String],
    _long_desc: Option[String],
    _type: Option[String],
    _speed: Option[String],
    _num_cores: Option[String],
    _num_cpus: Option[String],
    _benchmark: Option[String],
    _monthly_price: Option[Number],
    _monthly_price_display: Option[String],
    _max_ram: Option[String],
    _min_ram: Option[String],
    _max_lff: Option[String],
    _max_sff: Option[String],
    _max_nve: Option[String],
    _visible: Option[String],
    _active: Option[String]
)
object Cpu {
    def toStringBody(var_id: Object, var_short_desc: Object, var_long_desc: Object, var_type: Object, var_speed: Object, var_num_cores: Object, var_num_cpus: Object, var_benchmark: Object, var_monthly_price: Object, var_monthly_price_display: Object, var_max_ram: Object, var_min_ram: Object, var_max_lff: Object, var_max_sff: Object, var_max_nve: Object, var_visible: Object, var_active: Object) =
        s"""
        | {
        | "id":$var_id,"short_desc":$var_short_desc,"long_desc":$var_long_desc,"type":$var_type,"speed":$var_speed,"num_cores":$var_num_cores,"num_cpus":$var_num_cpus,"benchmark":$var_benchmark,"monthly_price":$var_monthly_price,"monthly_price_display":$var_monthly_price_display,"max_ram":$var_max_ram,"min_ram":$var_min_ram,"max_lff":$var_max_lff,"max_sff":$var_max_sff,"max_nve":$var_max_nve,"visible":$var_visible,"active":$var_active
        | }
        """.stripMargin
}
