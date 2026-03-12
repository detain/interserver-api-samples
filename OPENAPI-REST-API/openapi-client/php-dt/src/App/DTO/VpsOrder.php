<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Pricing and configuration options for ordering a new VPS, including slice costs by platform and available OS templates.
 */
class VpsOrder
{
    /**
     * Cost of VPS Slice SSD OVZ
     */
    #[DTA\Data(field: "vpsSliceSsdOvzCost")]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $vps_slice_ssd_ovz_cost = null;

    /**
     * Cost of VPS Slice OVZ
     */
    #[DTA\Data(field: "vpsSliceOvzCost")]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $vps_slice_ovz_cost = null;

    /**
     * Cost of VPS Slice SSD Virtuozzo
     */
    #[DTA\Data(field: "vpsSliceSsdVirtuozzoCost")]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $vps_slice_ssd_virtuozzo_cost = null;

    /**
     * Cost of VPS Slice Virtuozzo
     */
    #[DTA\Data(field: "vpsSliceVirtuozzoCost")]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $vps_slice_virtuozzo_cost = null;

    /**
     * Cost of VPS Slice HyperV
     */
    #[DTA\Data(field: "vpsSliceHypervCost")]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $vps_slice_hyperv_cost = null;

    /**
     * Cost of VPS Slice VMware
     */
    #[DTA\Data(field: "vpsSliceVmwareCost")]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $vps_slice_vmware_cost = null;

    /**
     * Cost of VPS Slice LXC
     */
    #[DTA\Data(field: "vpsSliceLxcCost")]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $vps_slice_lxc_cost = null;

    /**
     * Cost of VPS Slice Xen
     */
    #[DTA\Data(field: "vpsSliceXenCost")]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $vps_slice_xen_cost = null;

    /**
     * Cost of VPS Slice KVM L
     */
    #[DTA\Data(field: "vpsSliceKvmLCost")]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $vps_slice_kvm_l_cost = null;

    /**
     * Cost of VPS Slice KVM Storage
     */
    #[DTA\Data(field: "vpsSliceKvmStorageCost")]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $vps_slice_kvm_storage_cost = null;

    /**
     * Cost of VPS in NY
     */
    #[DTA\Data(field: "vpsNyCost")]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $vps_ny_cost = null;

    /**
     * Cost of VPS Slice KVM Windows
     */
    #[DTA\Data(field: "vpsSliceKvmWCost")]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $vps_slice_kvm_w_cost = null;

    /**
     * Cost of cPanel
     */
    #[DTA\Data(field: "cpanelCost")]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $cpanel_cost = null;

    /**
     * Cost of DirectAdmin (DA)
     */
    #[DTA\Data(field: "daCost")]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $da_cost = null;

    /**
     * RAM for VPS Slice
     */
    #[DTA\Data(field: "ramSlice")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ram_slice = null;

    /**
     * Hard Disk for VPS Slice
     */
    #[DTA\Data(field: "hdSlice")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $hd_slice = null;

    /**
     * Storage Hard Disk for VPS Slice
     */
    #[DTA\Data(field: "hdStorageSlice")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $hd_storage_slice = null;

    /**
     * Bandwidth for VPS Slice
     */
    #[DTA\Data(field: "bwSlice")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $bw_slice = null;

    /**
     * Bandwidth Type
     */
    #[DTA\Data(field: "bwType")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $bw_type = null;

    /**
     * Total Bandwidth
     */
    #[DTA\Data(field: "bwTotal")]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $bw_total = null;

    /**
     * Maximum Slices
     */
    #[DTA\Data(field: "maxSlices")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $max_slices = null;

    #[DTA\Data(field: "platformPackages")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsOrderPlatformPackages::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsOrderPlatformPackages::class])]
    public \App\DTO\VpsOrderPlatformPackages|null $platform_packages = null;

    #[DTA\Data(field: "platformNames")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsOrderPlatformNames::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsOrderPlatformNames::class])]
    public \App\DTO\VpsOrderPlatformNames|null $platform_names = null;

    #[DTA\Data(field: "packageCosts")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsOrderPackageCosts::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsOrderPackageCosts::class])]
    public \App\DTO\VpsOrderPackageCosts|null $package_costs = null;

    #[DTA\Data(field: "locationStock")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsOrderLocationStock::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsOrderLocationStock::class])]
    public \App\DTO\VpsOrderLocationStock|null $location_stock = null;

    #[DTA\Data(field: "locationNames")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsOrderLocationNames::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsOrderLocationNames::class])]
    public \App\DTO\VpsOrderLocationNames|null $location_names = null;

    #[DTA\Data(field: "osNames")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsOrderOsNames::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsOrderOsNames::class])]
    public \App\DTO\VpsOrderOsNames|null $os_names = null;

    #[DTA\Data(field: "templates")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsOrderTemplates::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsOrderTemplates::class])]
    public \App\DTO\VpsOrderTemplates|null $templates = null;

    #[DTA\Data(field: "serviceTypes")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsOrderServiceTypes::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsOrderServiceTypes::class])]
    public \App\DTO\VpsOrderServiceTypes|null $service_types = null;

    /**
     * Currency
     */
    #[DTA\Data(field: "currency")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $currency = null;

    /**
     * Currency Symbol
     */
    #[DTA\Data(field: "currencySymbol")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $currency_symbol = null;

}
