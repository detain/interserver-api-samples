<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A navigation link for webhosting-related actions in the client portal.
 */
class WebsiteClientLink
{
    /**
     * Label for the link
     */
    #[DTA\Data(field: "label", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $label = null;

    /**
     * Link URL
     */
    #[DTA\Data(field: "link", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $link = null;

    /**
     * Icon for the link
     */
    #[DTA\Data(field: "icon", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $icon = null;

    /**
     * Icon text for the link
     */
    #[DTA\Data(field: "icon_text", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $icon_text = null;

    /**
     * Help text for the link
     */
    #[DTA\Data(field: "help_text", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $help_text = null;

    /**
     * Other attributes for the link
     */
    #[DTA\Data(field: "other_attr", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $other_attr = null;

}
