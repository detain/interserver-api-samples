
package org.openapitools.client.model


case class IpLimitRange (
    /* The begining (or first) IP address in the range. */
    _start: String,
    /* The ending (or last) IP address in the range. */
    _end: String
)
object IpLimitRange {
    def toStringBody(var_start: Object, var_end: Object) =
        s"""
        | {
        | "start":$var_start,"end":$var_end
        | }
        """.stripMargin
}
