<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class LicenseClientLink
{
    /**
     * Link label
     */
    #[DTA\Data(field: "label")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $label = null;

    /**
     * Link URL
     */
    #[DTA\Data(field: "link")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $link = null;

    /**
     * Link icon
     */
    #[DTA\Data(field: "icon")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $icon = null;

    /**
     * Help text
     */
    #[DTA\Data(field: "help_text")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $help_text = null;

    /**
     * Icon text
     */
    #[DTA\Data(field: "icon_text", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $icon_text = null;

    /**
     * Other attributes
     */
    #[DTA\Data(field: "other_attr", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $other_attr = null;

}
