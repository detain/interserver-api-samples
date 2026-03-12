<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class GetOrderDetail200ResponsePackageCosts
{
    #[DTA\Data(field: "package_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $package_id = null;

    #[DTA\Data(field: "package_cost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $package_cost = null;

    #[DTA\Data(field: "currency", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $currency = null;

    #[DTA\Data(field: "currencySymbol", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $currency_symbol = null;

}
