<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Dashboard module configuration for domain registration services.
 */
class HomeDetailsModulesDomains
{
    /**
     * The icon for domains.
     */
    #[DTA\Data(field: "icon", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $icon = null;

    /**
     * Link to view domain.
     */
    #[DTA\Data(field: "view_link", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $view_link = null;

    /**
     * Heading for domains.
     */
    #[DTA\Data(field: "heading", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $heading = null;

    /**
     * Link to order domain.
     */
    #[DTA\Data(field: "buy_link", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $buy_link = null;

    /**
     * Link to view domains list.
     */
    #[DTA\Data(field: "list_link", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $list_link = null;

}
