<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class VpsOrderLocationStock1
{
    #[DTA\Data(field: "kvm", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $kvm = null;

    #[DTA\Data(field: "kvmstorage", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $kvmstorage = null;

    #[DTA\Data(field: "hyperv", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $hyperv = null;

}
