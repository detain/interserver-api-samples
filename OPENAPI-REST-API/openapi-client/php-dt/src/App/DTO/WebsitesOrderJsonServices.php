<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Schema for the jsonServices field in WebsitesOrder
 */
class WebsitesOrderJsonServices
{
    /**
     * JSON services description
     */
    #[DTA\Data(field: "11447")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $_11447 = null;

}
