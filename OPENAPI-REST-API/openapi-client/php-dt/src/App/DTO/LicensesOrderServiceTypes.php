<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Types of license services
 */
class LicensesOrderServiceTypes
{
    #[DTA\Data(field: "LicensesOrderServiceTypes11482", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\LicensesOrderServiceTypes11482::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\LicensesOrderServiceTypes11482::class])]
    public \App\DTO\LicensesOrderServiceTypes11482|null $licenses_order_service_types11482 = null;

}
