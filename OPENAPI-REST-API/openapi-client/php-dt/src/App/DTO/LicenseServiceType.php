<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Service type definition for a software license, including name, pricing, and category.
 */
class LicenseServiceType
{
    /**
     * Service ID
     */
    #[DTA\Data(field: "services_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_id = null;

    /**
     * Service name
     */
    #[DTA\Data(field: "services_name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_name = null;

    /**
     * Service cost
     */
    #[DTA\Data(field: "services_cost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_cost = null;

    /**
     * Service category
     */
    #[DTA\Data(field: "services_category", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_category = null;

    /**
     * Buyable status
     */
    #[DTA\Data(field: "services_buyable", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_buyable = null;

    /**
     * Service type
     */
    #[DTA\Data(field: "services_type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_type = null;

    /**
     * Service field 1
     */
    #[DTA\Data(field: "services_field1", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_field1 = null;

    /**
     * Service field 2
     */
    #[DTA\Data(field: "services_field2", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_field2 = null;

    /**
     * Service module
     */
    #[DTA\Data(field: "services_module", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_module = null;

}
