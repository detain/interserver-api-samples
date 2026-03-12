package io.swagger.server.model


/**
 * Platform Names
 *
 * @param kvm  for example: ''KVM''
 * @param kvmstorage  for example: ''KVM Storage''
 * @param hyperv  for example: ''HyperV''
 */
case class VpsOrder_platformNames (
  kvm: Option[String],
  kvmstorage: Option[String],
  hyperv: Option[String]
)

