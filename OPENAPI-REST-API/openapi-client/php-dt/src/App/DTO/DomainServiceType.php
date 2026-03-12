<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Service type definition for a domain registration, including name, pricing, and category.
 */
class DomainServiceType
{
    /**
     * Service type ID.
     */
    #[DTA\Data(field: "services_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_id = null;

    /**
     * Service type name (e.g., .com Registration).
     */
    #[DTA\Data(field: "services_name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_name = null;

    /**
     * Service cost per billing period.
     */
    #[DTA\Data(field: "services_cost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_cost = null;

    /**
     * Service category ID.
     */
    #[DTA\Data(field: "services_category", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_category = null;

    /**
     * Whether this service type is available for purchase.
     */
    #[DTA\Data(field: "services_buyable", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_buyable = null;

    /**
     * Internal service type identifier.
     */
    #[DTA\Data(field: "services_type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_type = null;

    /**
     * TLD or first configurable field for the service type.
     */
    #[DTA\Data(field: "services_field1", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_field1 = null;

    /**
     * Second configurable field for the service type.
     */
    #[DTA\Data(field: "services_field2", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_field2 = null;

    /**
     * Backend module handling this service type.
     */
    #[DTA\Data(field: "services_module", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_module = null;

}
