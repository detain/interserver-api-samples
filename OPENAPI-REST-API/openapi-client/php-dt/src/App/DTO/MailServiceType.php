<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Service type definition for a mail service, including name, pricing, and category.
 */
class MailServiceType
{
    /**
     * The ID of the service type.
     */
    #[DTA\Data(field: "services_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_id = null;

    /**
     * The name of the service type.
     */
    #[DTA\Data(field: "services_name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_name = null;

    /**
     * The cost of the service type.
     */
    #[DTA\Data(field: "services_cost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_cost = null;

    /**
     * The category of the service type.
     */
    #[DTA\Data(field: "services_category", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_category = null;

    /**
     * Whether the service type is buyable.
     */
    #[DTA\Data(field: "services_buyable", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_buyable = null;

    /**
     * The type of the service type.
     */
    #[DTA\Data(field: "services_type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_type = null;

    /**
     * Additional field for the service type.
     */
    #[DTA\Data(field: "services_field1", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_field1 = null;

    /**
     * Additional field for the service type.
     */
    #[DTA\Data(field: "services_field2", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_field2 = null;

    /**
     * The module of the service type.
     */
    #[DTA\Data(field: "services_module", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_module = null;

}
