<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class LicensesOrderServiceCategories509
{
    /**
     * Category ID
     */
    #[DTA\Data(field: "category_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $category_id = null;

    /**
     * Category Name
     */
    #[DTA\Data(field: "category_name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $category_name = null;

    /**
     * Category Tag
     */
    #[DTA\Data(field: "category_tag", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $category_tag = null;

    /**
     * Category Module
     */
    #[DTA\Data(field: "category_module", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $category_module = null;

}
