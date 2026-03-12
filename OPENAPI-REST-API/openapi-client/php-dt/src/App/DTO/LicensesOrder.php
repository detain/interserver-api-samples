<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Available license packages and pricing for ordering a new software license.
 */
class LicensesOrder
{
    #[DTA\Data(field: "serviceCategories", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\LicensesOrderServiceCategories::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\LicensesOrderServiceCategories::class])]
    public \App\DTO\LicensesOrderServiceCategories|null $service_categories = null;

    #[DTA\Data(field: "packageCosts", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\LicensesOrderPackageCosts::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\LicensesOrderPackageCosts::class])]
    public \App\DTO\LicensesOrderPackageCosts|null $package_costs = null;

    #[DTA\Data(field: "serviceTypes", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\LicensesOrderServiceTypes::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\LicensesOrderServiceTypes::class])]
    public \App\DTO\LicensesOrderServiceTypes|null $service_types = null;

}
