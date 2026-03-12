package io.swagger.server.model

import java.util.Date

/**
 * = VpsTrafficHistorySectionResponse =
 *
 * VPS Traffic History Hour and Day Sections
 *
 * @param data 
 * @param times 
 */
case class VpsTrafficHistorySectionResponse (
  data: List[VpsTrafficHistorySectionDataResponse],
  times: List[Date]
)

