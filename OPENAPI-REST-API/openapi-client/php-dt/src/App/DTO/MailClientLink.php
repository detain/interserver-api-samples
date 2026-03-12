<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A navigation link for mail service actions in the client portal.
 */
class MailClientLink
{
    /**
     * The label of the client link.
     */
    #[DTA\Data(field: "label", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $label = null;

    /**
     * The link URL of the client link.
     */
    #[DTA\Data(field: "link", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $link = null;

    /**
     * The icon class of the client link.
     */
    #[DTA\Data(field: "icon", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $icon = null;

    /**
     * The text for the icon of the client link.
     */
    #[DTA\Data(field: "icon_text", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $icon_text = null;

    /**
     * Help text for the client link.
     */
    #[DTA\Data(field: "help_text", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $help_text = null;

    /**
     * Additional attributes for the client link.
     */
    #[DTA\Data(field: "other_attr", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $other_attr = null;

}
