<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A navigation link for VPS-related actions in the client portal.
 */
class VpsClientLink
{
    /**
     * Display label for the link.
     */
    #[DTA\Data(field: "label", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $label = null;

    /**
     * URL or route for the action.
     */
    #[DTA\Data(field: "link", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $link = null;

    /**
     * Icon class for the link.
     */
    #[DTA\Data(field: "icon", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $icon = null;

    /**
     * Icon text label.
     */
    #[DTA\Data(field: "icon_text", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $icon_text = null;

    /**
     * Help tooltip text for the link.
     */
    #[DTA\Data(field: "help_text", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $help_text = null;

}
