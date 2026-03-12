<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Example schema for a domain service catalog entry.
 */
class DomainOrderServices10001
{
    /**
     * Service ID
     */
    #[DTA\Data(field: "services_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_id = null;

    /**
     * Service Name
     */
    #[DTA\Data(field: "services_name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_name = null;

    /**
     * Service Cost
     */
    #[DTA\Data(field: "services_cost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_cost = null;

    /**
     * Currency of Service Cost
     */
    #[DTA\Data(field: "services_currency", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_currency = null;

    /**
     * Service Category
     */
    #[DTA\Data(field: "services_category", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_category = null;

    /**
     * Buyable flag for Service
     */
    #[DTA\Data(field: "services_buyable", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_buyable = null;

    /**
     * Service Type
     */
    #[DTA\Data(field: "services_type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_type = null;

    /**
     * Field 1 of Service
     */
    #[DTA\Data(field: "services_field1", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_field1 = null;

    /**
     * Field 2 of Service
     */
    #[DTA\Data(field: "services_field2", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_field2 = null;

    /**
     * Module of Service
     */
    #[DTA\Data(field: "services_module", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_module = null;

    /**
     * Hidden flag for Service
     */
    #[DTA\Data(field: "services_hidden", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_hidden = null;

}
