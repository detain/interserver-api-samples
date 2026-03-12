<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A Category of Services.  This is the broadest grouping within a module.
 */
class ServiceCategory
{
    #[DTA\Data(field: "category_id")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $category_id = null;

    #[DTA\Data(field: "category_name")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $category_name = null;

    #[DTA\Data(field: "category_tag")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $category_tag = null;

    #[DTA\Data(field: "category_module")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $category_module = null;

}
