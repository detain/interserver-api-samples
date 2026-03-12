<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * DirectAdmin license options available for a VPS.
 */
class VpsDAData
{
    #[DTA\Data(field: "free", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsDALicense::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsDALicense::class])]
    public \App\DTO\VpsDALicense|null $free = null;

}
