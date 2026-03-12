<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class ServerClientLink
{
    #[DTA\Data(field: "label")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $label = null;

    #[DTA\Data(field: "link")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $link = null;

    #[DTA\Data(field: "icon", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $icon = null;

    #[DTA\Data(field: "icon_text", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $icon_text = null;

    #[DTA\Data(field: "help_text", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $help_text = null;

}
