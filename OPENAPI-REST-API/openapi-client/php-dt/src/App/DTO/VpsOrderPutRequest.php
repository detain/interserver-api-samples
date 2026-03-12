<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * request to validate a vps order
 */
class VpsOrderPutRequest
{
    /**
     * OS Distribution
     */
    #[DTA\Data(field: "osDistro")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $os_distro = null;

    /**
     * Number of slices
     */
    #[DTA\Data(field: "slices")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    #[DTA\Validator("Range", ["min" => 1, "max" => 32])]
    public int|null $slices = null;

    /**
     * VPS Platform
     */
    #[DTA\Data(field: "vpsPlatform")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_platform = null;

    /**
     * Billing Period or Frequency
     */
    #[DTA\Data(field: "period")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    #[DTA\Validator("Range", ["min" => 1, "max" => 12])]
    public int|null $period = null;

    /**
     * Location
     */
    #[DTA\Data(field: "location")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    #[DTA\Validator("Range", ["min" => 1, "max" => 3])]
    public int|null $location = null;

    /**
     * OS Version
     */
    #[DTA\Data(field: "osVersion")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $os_version = null;

    /**
     * The hostname to assign to the VPS
     */
    #[DTA\Data(field: "hostname")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $hostname = null;

    /**
     * Root password to assign to the VVPS
     */
    #[DTA\Data(field: "rootpass")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $rootpass = null;

    /**
     * Control Panel
     */
    #[DTA\Data(field: "controlpanel", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $controlpanel = null;

    /**
     * Coupon
     */
    #[DTA\Data(field: "coupon", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $coupon = null;

    /**
     * Order comments or notes
     */
    #[DTA\Data(field: "comment", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $comment = null;

}
