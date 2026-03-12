<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Schema for the packages field in WebsitesOrder
 */
class WebsitesOrderPackages
{
    /**
     * Package description
     */
    #[DTA\Data(field: "11447")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $_11447 = null;

}
