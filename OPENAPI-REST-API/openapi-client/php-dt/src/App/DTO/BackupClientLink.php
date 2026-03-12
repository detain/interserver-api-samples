<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A navigation link for backup service actions in the client portal.
 */
class BackupClientLink
{
    /**
     * Label of the client link.
     */
    #[DTA\Data(field: "label", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $label = null;

    /**
     * Link URL of the client link.
     */
    #[DTA\Data(field: "link", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $link = null;

    /**
     * Icon of the client link.
     */
    #[DTA\Data(field: "icon", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $icon = null;

    /**
     * Icon text of the client link.
     */
    #[DTA\Data(field: "icon_text", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $icon_text = null;

    /**
     * Help text of the client link.
     */
    #[DTA\Data(field: "help_text", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $help_text = null;

    /**
     * Other attributes of the client link.
     */
    #[DTA\Data(field: "other_attr", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $other_attr = null;

}
