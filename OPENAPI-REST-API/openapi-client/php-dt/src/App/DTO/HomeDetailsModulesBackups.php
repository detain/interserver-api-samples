<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Dashboard module configuration for backup storage services.
 */
class HomeDetailsModulesBackups
{
    /**
     * The icon for storages.
     */
    #[DTA\Data(field: "icon", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $icon = null;

    /**
     * Link to view backup.
     */
    #[DTA\Data(field: "view_link", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $view_link = null;

    /**
     * Heading for storages.
     */
    #[DTA\Data(field: "heading", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $heading = null;

    /**
     * Link to order storage.
     */
    #[DTA\Data(field: "buy_link", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $buy_link = null;

    /**
     * Link to view backups list.
     */
    #[DTA\Data(field: "list_link", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $list_link = null;

}
