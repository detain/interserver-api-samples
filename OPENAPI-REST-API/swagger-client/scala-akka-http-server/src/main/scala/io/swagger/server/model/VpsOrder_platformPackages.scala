package io.swagger.server.model

import java.math.BigDecimal

/**
 * Platform Packages
 *
 * @param kvm  for example: ''32''
 * @param kvmstorage  for example: ''57''
 * @param hyperv  for example: ''54''
 */
case class VpsOrder_platformPackages (
  kvm: Option[BigDecimal],
  kvmstorage: Option[BigDecimal],
  hyperv: Option[BigDecimal]
)

