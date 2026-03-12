<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class VpsOrderServiceTypes32
{
    #[DTA\Data(field: "services_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_id = null;

    #[DTA\Data(field: "services_name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_name = null;

    #[DTA\Data(field: "services_cost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_cost = null;

    #[DTA\Data(field: "services_category", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_category = null;

    #[DTA\Data(field: "services_buyable", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_buyable = null;

    #[DTA\Data(field: "services_type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_type = null;

    #[DTA\Data(field: "services_field1", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_field1 = null;

    #[DTA\Data(field: "services_field2", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_field2 = null;

    #[DTA\Data(field: "services_module", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_module = null;

}
