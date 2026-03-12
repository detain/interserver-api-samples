package io.swagger.server.model

import java.util.Date

/**
 * = VpsTrafficResponse =
 *
 * VPS Traffic Information
 *
 * @param name 
 * @param target 
 * @param interval 
 * @param history 
 * @param last 
 * @param times 
 * @param totals 
 * @param usage 
 * @param data 
 */
case class VpsTrafficResponse (
  name: String,
  target: String,
  interval: Int,
  history: VpsTrafficHistoryResponse,
  last: Date,
  times: List[Date],
  totals: VpsTrafficTotalsResposne,
  usage: VpsTrafficUsageResponse,
  data: List[VpsTrafficDataSectionResponse]
)

