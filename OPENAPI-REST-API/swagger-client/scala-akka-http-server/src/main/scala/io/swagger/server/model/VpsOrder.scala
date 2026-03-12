package io.swagger.server.model

import java.math.BigDecimal

/**
 * Pricing and configuration options for ordering a new VPS, including slice costs by platform and available OS templates.
 *
 * @param vpsSliceSsdOvzCost Cost of VPS Slice SSD OVZ for example: ''9''
 * @param vpsSliceOvzCost Cost of VPS Slice OVZ for example: ''6''
 * @param vpsSliceSsdVirtuozzoCost Cost of VPS Slice SSD Virtuozzo for example: ''9''
 * @param vpsSliceVirtuozzoCost Cost of VPS Slice Virtuozzo for example: ''6''
 * @param vpsSliceHypervCost Cost of VPS Slice HyperV for example: ''10''
 * @param vpsSliceVmwareCost Cost of VPS Slice VMware for example: ''10''
 * @param vpsSliceLxcCost Cost of VPS Slice LXC for example: ''6''
 * @param vpsSliceXenCost Cost of VPS Slice Xen for example: ''6''
 * @param vpsSliceKvmLCost Cost of VPS Slice KVM L for example: ''6''
 * @param vpsSliceKvmStorageCost Cost of VPS Slice KVM Storage for example: ''6''
 * @param vpsNyCost Cost of VPS in NY for example: ''3''
 * @param vpsSliceKvmWCost Cost of VPS Slice KVM Windows for example: ''10''
 * @param cpanelCost Cost of cPanel for example: ''22''
 * @param daCost Cost of DirectAdmin (DA) for example: ''8''
 * @param ramSlice RAM for VPS Slice for example: ''2048''
 * @param hdSlice Hard Disk for VPS Slice for example: ''30''
 * @param hdStorageSlice Storage Hard Disk for VPS Slice for example: ''1000''
 * @param bwSlice Bandwidth for VPS Slice for example: ''2000''
 * @param bwType Bandwidth Type for example: ''2''
 * @param bwTotal Total Bandwidth for example: ''2''
 * @param maxSlices Maximum Slices for example: ''16''
 * @param platformPackages 
 * @param platformNames 
 * @param packageCosts 
 * @param locationStock 
 * @param locationNames 
 * @param osNames 
 * @param templates 
 * @param serviceTypes 
 * @param currency Currency for example: ''USD''
 * @param currencySymbol Currency Symbol for example: ''$''
 */
case class VpsOrder (
  vpsSliceSsdOvzCost: BigDecimal,
  vpsSliceOvzCost: BigDecimal,
  vpsSliceSsdVirtuozzoCost: BigDecimal,
  vpsSliceVirtuozzoCost: BigDecimal,
  vpsSliceHypervCost: BigDecimal,
  vpsSliceVmwareCost: BigDecimal,
  vpsSliceLxcCost: BigDecimal,
  vpsSliceXenCost: BigDecimal,
  vpsSliceKvmLCost: BigDecimal,
  vpsSliceKvmStorageCost: BigDecimal,
  vpsNyCost: BigDecimal,
  vpsSliceKvmWCost: BigDecimal,
  cpanelCost: BigDecimal,
  daCost: BigDecimal,
  ramSlice: String,
  hdSlice: String,
  hdStorageSlice: String,
  bwSlice: String,
  bwType: String,
  bwTotal: BigDecimal,
  maxSlices: String,
  platformPackages: VpsOrder_platformPackages,
  platformNames: VpsOrder_platformNames,
  packageCosts: VpsOrder_packageCosts,
  locationStock: VpsOrder_locationStock,
  locationNames: VpsOrder_locationNames,
  osNames: VpsOrder_osNames,
  templates: VpsOrder_templates,
  serviceTypes: VpsOrder_serviceTypes,
  currency: String,
  currencySymbol: String
)

