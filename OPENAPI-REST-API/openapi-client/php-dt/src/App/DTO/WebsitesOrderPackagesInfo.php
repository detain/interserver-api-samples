<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class WebsitesOrderPackagesInfo
{
    /**
     * The ID of the package.
     */
    #[DTA\Data(field: "services_id")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_id = null;

    /**
     * The name of the package.
     */
    #[DTA\Data(field: "services_name")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_name = null;

    /**
     * The cost of the package.
     */
    #[DTA\Data(field: "services_cost")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_cost = null;

    /**
     * The category of the package.
     */
    #[DTA\Data(field: "services_category")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_category = null;

    /**
     * Indicates if the package is buyable (1 for yes, 0 for no).
     */
    #[DTA\Data(field: "services_buyable")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_buyable = null;

    /**
     * The type of the package.
     */
    #[DTA\Data(field: "services_type")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_type = null;

    /**
     * The module of the package.
     */
    #[DTA\Data(field: "services_module")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_module = null;

    /**
     * Description of the package.
     */
    #[DTA\Data(field: "services_description")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_description = null;

    /**
     * Additional field 1 for the package.
     */
    #[DTA\Data(field: "services_field1", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_field1 = null;

    /**
     * Additional field 2 for the package.
     */
    #[DTA\Data(field: "services_field2", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_field2 = null;

    /**
     * HTML content for the package.
     */
    #[DTA\Data(field: "services_html", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_html = null;

    /**
     * URL for more information about the package.
     */
    #[DTA\Data(field: "services_moreinfo_url", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_moreinfo_url = null;

    /**
     * Indicates if the package is hidden (1 for yes, 0 for no).
     */
    #[DTA\Data(field: "services_hidden", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_hidden = null;

}
