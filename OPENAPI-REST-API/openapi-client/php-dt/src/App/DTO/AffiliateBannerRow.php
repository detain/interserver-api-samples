<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * An affiliate banner image details.
 */
class AffiliateBannerRow
{
    #[DTA\Data(field: "image", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $image = null;

    #[DTA\Data(field: "width", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $width = null;

    #[DTA\Data(field: "height", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $height = null;

}
