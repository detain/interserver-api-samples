<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A general grouping of services within a category.
 */
class ServiceType
{
    #[DTA\Data(field: "st_id")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $st_id = null;

    #[DTA\Data(field: "st_name")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $st_name = null;

    #[DTA\Data(field: "st_category")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $st_category = null;

    #[DTA\Data(field: "st_module")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $st_module = null;

}
