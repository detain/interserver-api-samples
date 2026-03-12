<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * An individual package tied to one of our services.
 */
class Service
{
    #[DTA\Data(field: "services_id")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $services_id = null;

    #[DTA\Data(field: "services_name")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_name = null;

    #[DTA\Data(field: "services_cost")]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $services_cost = null;

    #[DTA\Data(field: "services_currency")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_currency = null;

    #[DTA\Data(field: "services_category")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $services_category = null;

    #[DTA\Data(field: "services_buyable")]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $services_buyable = null;

    #[DTA\Data(field: "services_type")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $services_type = null;

    #[DTA\Data(field: "services_field1")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_field1 = null;

    #[DTA\Data(field: "services_field2")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_field2 = null;

    #[DTA\Data(field: "services_module")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_module = null;

}
