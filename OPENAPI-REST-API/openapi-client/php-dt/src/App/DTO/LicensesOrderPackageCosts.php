<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Costs of license packages
 */
class LicensesOrderPackageCosts
{
    /**
     * Cost of package with ID 11468
     */
    #[DTA\Data(field: "LicensesOrderPackageCosts11468", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $licenses_order_package_costs11468 = null;

}
