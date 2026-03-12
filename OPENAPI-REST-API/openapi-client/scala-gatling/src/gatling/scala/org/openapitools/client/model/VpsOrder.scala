
package org.openapitools.client.model


case class VpsOrder (
    /* Cost of VPS Slice SSD OVZ */
    _vpsSliceSsdOvzCost: Number,
    /* Cost of VPS Slice OVZ */
    _vpsSliceOvzCost: Number,
    /* Cost of VPS Slice SSD Virtuozzo */
    _vpsSliceSsdVirtuozzoCost: Number,
    /* Cost of VPS Slice Virtuozzo */
    _vpsSliceVirtuozzoCost: Number,
    /* Cost of VPS Slice HyperV */
    _vpsSliceHypervCost: Number,
    /* Cost of VPS Slice VMware */
    _vpsSliceVmwareCost: Number,
    /* Cost of VPS Slice LXC */
    _vpsSliceLxcCost: Number,
    /* Cost of VPS Slice Xen */
    _vpsSliceXenCost: Number,
    /* Cost of VPS Slice KVM L */
    _vpsSliceKvmLCost: Number,
    /* Cost of VPS Slice KVM Storage */
    _vpsSliceKvmStorageCost: Number,
    /* Cost of VPS in NY */
    _vpsNyCost: Number,
    /* Cost of VPS Slice KVM Windows */
    _vpsSliceKvmWCost: Number,
    /* Cost of cPanel */
    _cpanelCost: Number,
    /* Cost of DirectAdmin (DA) */
    _daCost: Number,
    /* RAM for VPS Slice */
    _ramSlice: String,
    /* Hard Disk for VPS Slice */
    _hdSlice: String,
    /* Storage Hard Disk for VPS Slice */
    _hdStorageSlice: String,
    /* Bandwidth for VPS Slice */
    _bwSlice: String,
    /* Bandwidth Type */
    _bwType: String,
    /* Total Bandwidth */
    _bwTotal: Number,
    /* Maximum Slices */
    _maxSlices: String,
    _platformPackages: VpsOrderPlatformPackages,
    _platformNames: VpsOrderPlatformNames,
    _packageCosts: VpsOrderPackageCosts,
    _locationStock: VpsOrderLocationStock,
    _locationNames: VpsOrderLocationNames,
    _osNames: VpsOrderOsNames,
    _templates: VpsOrderTemplates,
    _serviceTypes: VpsOrderServiceTypes,
    /* Currency */
    _currency: String,
    /* Currency Symbol */
    _currencySymbol: String
)
object VpsOrder {
    def toStringBody(var_vpsSliceSsdOvzCost: Object, var_vpsSliceOvzCost: Object, var_vpsSliceSsdVirtuozzoCost: Object, var_vpsSliceVirtuozzoCost: Object, var_vpsSliceHypervCost: Object, var_vpsSliceVmwareCost: Object, var_vpsSliceLxcCost: Object, var_vpsSliceXenCost: Object, var_vpsSliceKvmLCost: Object, var_vpsSliceKvmStorageCost: Object, var_vpsNyCost: Object, var_vpsSliceKvmWCost: Object, var_cpanelCost: Object, var_daCost: Object, var_ramSlice: Object, var_hdSlice: Object, var_hdStorageSlice: Object, var_bwSlice: Object, var_bwType: Object, var_bwTotal: Object, var_maxSlices: Object, var_platformPackages: Object, var_platformNames: Object, var_packageCosts: Object, var_locationStock: Object, var_locationNames: Object, var_osNames: Object, var_templates: Object, var_serviceTypes: Object, var_currency: Object, var_currencySymbol: Object) =
        s"""
        | {
        | "vpsSliceSsdOvzCost":$var_vpsSliceSsdOvzCost,"vpsSliceOvzCost":$var_vpsSliceOvzCost,"vpsSliceSsdVirtuozzoCost":$var_vpsSliceSsdVirtuozzoCost,"vpsSliceVirtuozzoCost":$var_vpsSliceVirtuozzoCost,"vpsSliceHypervCost":$var_vpsSliceHypervCost,"vpsSliceVmwareCost":$var_vpsSliceVmwareCost,"vpsSliceLxcCost":$var_vpsSliceLxcCost,"vpsSliceXenCost":$var_vpsSliceXenCost,"vpsSliceKvmLCost":$var_vpsSliceKvmLCost,"vpsSliceKvmStorageCost":$var_vpsSliceKvmStorageCost,"vpsNyCost":$var_vpsNyCost,"vpsSliceKvmWCost":$var_vpsSliceKvmWCost,"cpanelCost":$var_cpanelCost,"daCost":$var_daCost,"ramSlice":$var_ramSlice,"hdSlice":$var_hdSlice,"hdStorageSlice":$var_hdStorageSlice,"bwSlice":$var_bwSlice,"bwType":$var_bwType,"bwTotal":$var_bwTotal,"maxSlices":$var_maxSlices,"platformPackages":$var_platformPackages,"platformNames":$var_platformNames,"packageCosts":$var_packageCosts,"locationStock":$var_locationStock,"locationNames":$var_locationNames,"osNames":$var_osNames,"templates":$var_templates,"serviceTypes":$var_serviceTypes,"currency":$var_currency,"currencySymbol":$var_currencySymbol
        | }
        """.stripMargin
}
