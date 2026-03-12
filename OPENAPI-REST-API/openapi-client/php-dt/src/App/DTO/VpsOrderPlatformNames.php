<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Platform Names
 */
class VpsOrderPlatformNames
{
    #[DTA\Data(field: "kvm", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $kvm = null;

    #[DTA\Data(field: "kvmstorage", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $kvmstorage = null;

    #[DTA\Data(field: "hyperv", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $hyperv = null;

}
