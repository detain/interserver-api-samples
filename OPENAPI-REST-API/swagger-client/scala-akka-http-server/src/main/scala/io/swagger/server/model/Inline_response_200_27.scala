package io.swagger.server.model


/**
 * @param bandwidth 
 * @param ips 
 * @param os 
 * @param cp 
 * @param raid 
 */
case class Inline_response_200_27 (
  bandwidth: Option[List[inline_response_200_27_bandwidth]],
  ips: Option[List[inline_response_200_27_ips]],
  os: Option[List[inline_response_200_27_os]],
  cp: Option[List[inline_response_200_27_cp]],
  raid: Option[List[inline_response_200_27_raid]]
)

