package io.swagger.server.model


/**
 * @param kvm  for example: ''true''
 * @param kvmstorage  for example: ''true''
 * @param hyperv  for example: ''true''
 */
case class VpsOrder_locationStock_1 (
  kvm: Option[Boolean],
  kvmstorage: Option[Boolean],
  hyperv: Option[Boolean]
)

