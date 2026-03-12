package io.swagger.server.model


/**
 * Monthly mail delivery status breakdown, showing counts per status category.
 *
 * @param default 
 * @param failed 
 * @param rejected 
 * @param pending 
 * @param locked 
 * @param paid 
 */
case class StatusMonthlyBreakdown (
  default: MonthlyCounts,
  failed: MonthlyCounts,
  rejected: MonthlyCounts,
  pending: MonthlyCounts,
  locked: MonthlyCounts,
  paid: MonthlyCounts
)

