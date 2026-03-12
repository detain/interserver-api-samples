<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Dashboard module configuration for webhosting services.
 */
class HomeDetailsModulesWebhosting
{
    /**
     * The icon for web hosting.
     */
    #[DTA\Data(field: "icon", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $icon = null;

    /**
     * Link to view website.
     */
    #[DTA\Data(field: "view_link", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $view_link = null;

    /**
     * Heading for web hosting.
     */
    #[DTA\Data(field: "heading", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $heading = null;

    /**
     * Link to order website.
     */
    #[DTA\Data(field: "buy_link", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $buy_link = null;

    /**
     * Link to view websites list.
     */
    #[DTA\Data(field: "list_link", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $list_link = null;

}
