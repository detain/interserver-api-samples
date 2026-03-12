<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class ServerLocation1
{
    #[DTA\Data(field: "location_id")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $location_id = null;

    #[DTA\Data(field: "location_name")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $location_name = null;

    #[DTA\Data(field: "location_lat")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $location_lat = null;

    #[DTA\Data(field: "location_long")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $location_long = null;

    #[DTA\Data(field: "location_description", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $location_description = null;

    #[DTA\Data(field: "location_ipmi_group", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $location_ipmi_group = null;

}
