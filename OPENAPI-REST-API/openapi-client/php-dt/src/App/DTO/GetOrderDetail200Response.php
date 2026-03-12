<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class GetOrderDetail200Response
{
    #[DTA\Data(field: "packageCosts", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\GetOrderDetail200ResponsePackageCosts::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\GetOrderDetail200ResponsePackageCosts::class])]
    public \App\DTO\GetOrderDetail200ResponsePackageCosts|null $package_costs = null;

    #[DTA\Data(field: "serviceTypes", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection88::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection88::class])]
    public \App\DTO\Collection88|null $service_types = null;

    #[DTA\Data(field: "ips", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection89::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection89::class])]
    public \App\DTO\Collection89|null $ips = null;

}
