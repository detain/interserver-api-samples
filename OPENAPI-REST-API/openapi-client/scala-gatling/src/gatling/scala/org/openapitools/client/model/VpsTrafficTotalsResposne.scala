
package org.openapitools.client.model


case class VpsTrafficTotalsResposne (
    _day: VpsTrafficTotalsSectionResponse,
    _month: VpsTrafficTotalsSectionResponse,
    _year: VpsTrafficTotalsSectionResponse,
    _all: VpsTrafficTotalsSectionResponse
)
object VpsTrafficTotalsResposne {
    def toStringBody(var_day: Object, var_month: Object, var_year: Object, var_all: Object) =
        s"""
        | {
        | "day":$var_day,"month":$var_month,"year":$var_year,"all":$var_all
        | }
        """.stripMargin
}
