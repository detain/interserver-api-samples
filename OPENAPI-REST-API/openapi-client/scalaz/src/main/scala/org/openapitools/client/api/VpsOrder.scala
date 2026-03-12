package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsOrder._

case class VpsOrder (
  /* Cost of VPS Slice SSD OVZ */
  vpsSliceSsdOvzCost: BigDecimal,
/* Cost of VPS Slice OVZ */
  vpsSliceOvzCost: BigDecimal,
/* Cost of VPS Slice SSD Virtuozzo */
  vpsSliceSsdVirtuozzoCost: BigDecimal,
/* Cost of VPS Slice Virtuozzo */
  vpsSliceVirtuozzoCost: BigDecimal,
/* Cost of VPS Slice HyperV */
  vpsSliceHypervCost: BigDecimal,
/* Cost of VPS Slice VMware */
  vpsSliceVmwareCost: BigDecimal,
/* Cost of VPS Slice LXC */
  vpsSliceLxcCost: BigDecimal,
/* Cost of VPS Slice Xen */
  vpsSliceXenCost: BigDecimal,
/* Cost of VPS Slice KVM L */
  vpsSliceKvmLCost: BigDecimal,
/* Cost of VPS Slice KVM Storage */
  vpsSliceKvmStorageCost: BigDecimal,
/* Cost of VPS in NY */
  vpsNyCost: BigDecimal,
/* Cost of VPS Slice KVM Windows */
  vpsSliceKvmWCost: BigDecimal,
/* Cost of cPanel */
  cpanelCost: BigDecimal,
/* Cost of DirectAdmin (DA) */
  daCost: BigDecimal,
/* RAM for VPS Slice */
  ramSlice: String,
/* Hard Disk for VPS Slice */
  hdSlice: String,
/* Storage Hard Disk for VPS Slice */
  hdStorageSlice: String,
/* Bandwidth for VPS Slice */
  bwSlice: String,
/* Bandwidth Type */
  bwType: String,
/* Total Bandwidth */
  bwTotal: BigDecimal,
/* Maximum Slices */
  maxSlices: String,
platformPackages: VpsOrderPlatformPackages,
platformNames: VpsOrderPlatformNames,
packageCosts: VpsOrderPackageCosts,
locationStock: VpsOrderLocationStock,
locationNames: VpsOrderLocationNames,
osNames: VpsOrderOsNames,
templates: VpsOrderTemplates,
serviceTypes: VpsOrderServiceTypes,
/* Currency */
  currency: String,
/* Currency Symbol */
  currencySymbol: String)

object VpsOrder {
  import DateTimeCodecs._

  implicit val VpsOrderCodecJson: CodecJson[VpsOrder] = CodecJson.derive[VpsOrder]
  implicit val VpsOrderDecoder: EntityDecoder[VpsOrder] = jsonOf[VpsOrder]
  implicit val VpsOrderEncoder: EntityEncoder[VpsOrder] = jsonEncoderOf[VpsOrder]
}
