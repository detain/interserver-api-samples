<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Platform Packages
 */
class VpsOrderPlatformPackages
{
    #[DTA\Data(field: "kvm", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $kvm = null;

    #[DTA\Data(field: "kvmstorage", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $kvmstorage = null;

    #[DTA\Data(field: "hyperv", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $hyperv = null;

}
