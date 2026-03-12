<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class VpsPlesk12Data
{
    #[DTA\Data(field: "admin", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsPleskLicense::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsPleskLicense::class])]
    public \App\DTO\VpsPleskLicense|null $admin = null;

    #[DTA\Data(field: "pro", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsPleskLicense::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsPleskLicense::class])]
    public \App\DTO\VpsPleskLicense|null $pro = null;

    #[DTA\Data(field: "host", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsPleskLicense::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsPleskLicense::class])]
    public \App\DTO\VpsPleskLicense|null $host = null;

}
