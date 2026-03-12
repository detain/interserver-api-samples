<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Dashboard module configuration for VPS services.
 */
class HomeDetailsModulesVps
{
    /**
     * The icon for VPS.
     */
    #[DTA\Data(field: "icon", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $icon = null;

    /**
     * Link to view VPS.
     */
    #[DTA\Data(field: "view_link", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $view_link = null;

    /**
     * Heading for VPS.
     */
    #[DTA\Data(field: "heading", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $heading = null;

    /**
     * Link to order VPS.
     */
    #[DTA\Data(field: "buy_link", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $buy_link = null;

    /**
     * Link to view VPS list.
     */
    #[DTA\Data(field: "list_link", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $list_link = null;

}
