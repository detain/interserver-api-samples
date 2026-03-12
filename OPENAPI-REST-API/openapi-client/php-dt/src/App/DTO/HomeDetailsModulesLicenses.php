<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Dashboard module configuration for software license services.
 */
class HomeDetailsModulesLicenses
{
    /**
     * The icon for licenses.
     */
    #[DTA\Data(field: "icon", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $icon = null;

    /**
     * Link to view license.
     */
    #[DTA\Data(field: "view_link", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $view_link = null;

    /**
     * Heading for licenses.
     */
    #[DTA\Data(field: "heading", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $heading = null;

    /**
     * Link to order license.
     */
    #[DTA\Data(field: "buy_link", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $buy_link = null;

    /**
     * Link to view licenses list.
     */
    #[DTA\Data(field: "list_link", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $list_link = null;

}
