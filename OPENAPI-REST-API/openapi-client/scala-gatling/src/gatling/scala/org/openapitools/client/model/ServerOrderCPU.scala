
package org.openapitools.client.model


case class ServerOrderCPU (
    /* CPU ID. */
    _id: Option[String],
    /* CPU price. */
    _price: Option[Integer],
    /* CPU image. */
    _img: Option[String],
    /* Short description of the CPU. */
    _short_desc: Option[String],
    /* Long description of the CPU. */
    _long_desc: Option[String],
    /* Location of the CPU. */
    _location: Option[String],
    /* Front Side Bus information. */
    _fsb: Option[String],
    /* Manufacturer information. */
    _manu: Option[String],
    /* CPU type. */
    _type: Option[String],
    /* CPU speed. */
    _speed: Option[String],
    /* Cache information. */
    _cache: Option[String],
    /* Active status. */
    _active: Option[String],
    /* Number of cores. */
    _num_cores: Option[String],
    /* Number of CPUs. */
    _num_cpus: Option[String],
    /* CPU benchmark. */
    _benchmark: Option[String],
    /* Monthly price. */
    _monthly_price: Option[Integer],
    /* Maximum RAM supported. */
    _max_ram: Option[String],
    /* Minimum RAM required. */
    _min_ram: Option[String],
    /* Maximum LFF (Large Form Factor) supported. */
    _max_lff: Option[String],
    /* Maximum SFF (Small Form Factor) supported. */
    _max_sff: Option[String],
    /* Maximum NVMe drives supported. */
    _max_nve: Option[String],
    /* Visibility status. */
    _visible: Option[String],
    /* Hard drive IDs. */
    _hd_ids: Option[String],
    /* Display of CPU price. */
    _price_display: Option[String],
    /* Display of monthly CPU price. */
    _monthly_price_display: Option[String]
)
object ServerOrderCPU {
    def toStringBody(var_id: Object, var_price: Object, var_img: Object, var_short_desc: Object, var_long_desc: Object, var_location: Object, var_fsb: Object, var_manu: Object, var_type: Object, var_speed: Object, var_cache: Object, var_active: Object, var_num_cores: Object, var_num_cpus: Object, var_benchmark: Object, var_monthly_price: Object, var_max_ram: Object, var_min_ram: Object, var_max_lff: Object, var_max_sff: Object, var_max_nve: Object, var_visible: Object, var_hd_ids: Object, var_price_display: Object, var_monthly_price_display: Object) =
        s"""
        | {
        | "id":$var_id,"price":$var_price,"img":$var_img,"short_desc":$var_short_desc,"long_desc":$var_long_desc,"location":$var_location,"fsb":$var_fsb,"manu":$var_manu,"type":$var_type,"speed":$var_speed,"cache":$var_cache,"active":$var_active,"num_cores":$var_num_cores,"num_cpus":$var_num_cpus,"benchmark":$var_benchmark,"monthly_price":$var_monthly_price,"max_ram":$var_max_ram,"min_ram":$var_min_ram,"max_lff":$var_max_lff,"max_sff":$var_max_sff,"max_nve":$var_max_nve,"visible":$var_visible,"hd_ids":$var_hd_ids,"price_display":$var_price_display,"monthly_price_display":$var_monthly_price_display
        | }
        """.stripMargin
}
