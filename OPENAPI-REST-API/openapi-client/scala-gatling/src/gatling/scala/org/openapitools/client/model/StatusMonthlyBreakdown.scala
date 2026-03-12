
package org.openapitools.client.model


case class StatusMonthlyBreakdown (
    _default: MonthlyCounts,
    _failed: MonthlyCounts,
    _rejected: MonthlyCounts,
    _pending: MonthlyCounts,
    _locked: MonthlyCounts,
    _paid: MonthlyCounts
)
object StatusMonthlyBreakdown {
    def toStringBody(var_default: Object, var_failed: Object, var_rejected: Object, var_pending: Object, var_locked: Object, var_paid: Object) =
        s"""
        | {
        | "default":$var_default,"failed":$var_failed,"rejected":$var_rejected,"pending":$var_pending,"locked":$var_locked,"paid":$var_paid
        | }
        """.stripMargin
}
