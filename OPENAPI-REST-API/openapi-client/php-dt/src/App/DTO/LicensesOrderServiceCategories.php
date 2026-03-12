<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * License service categories
 */
class LicensesOrderServiceCategories
{
    #[DTA\Data(field: "LicensesOrderServiceCategories509", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\LicensesOrderServiceCategories509::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\LicensesOrderServiceCategories509::class])]
    public \App\DTO\LicensesOrderServiceCategories509|null $licenses_order_service_categories509 = null;

}
