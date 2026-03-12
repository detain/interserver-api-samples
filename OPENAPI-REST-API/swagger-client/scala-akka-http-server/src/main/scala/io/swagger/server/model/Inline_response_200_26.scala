package io.swagger.server.model


/**
 * @param bandwidth 
 * @param ips 
 * @param os 
 * @param cp 
 * @param raid 
 */
case class Inline_response_200_26 (
  bandwidth: Option[List[inline_response_200_26_bandwidth]],
  ips: Option[List[inline_response_200_26_ips]],
  os: Option[List[inline_response_200_26_os]],
  cp: Option[List[inline_response_200_26_cp]],
  raid: Option[List[inline_response_200_26_raid]]
)

