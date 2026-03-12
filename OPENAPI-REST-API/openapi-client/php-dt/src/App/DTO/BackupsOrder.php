<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Available backup storage packages and pricing for ordering a new backup service.
 */
class BackupsOrder
{
    #[DTA\Data(field: "packageCosts")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\BackupsOrderPackageCosts::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\BackupsOrderPackageCosts::class])]
    public \App\DTO\BackupsOrderPackageCosts|null $package_costs = null;

    #[DTA\Data(field: "serviceTypes")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\BackupsOrderServiceTypes::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\BackupsOrderServiceTypes::class])]
    public \App\DTO\BackupsOrderServiceTypes|null $service_types = null;

}
