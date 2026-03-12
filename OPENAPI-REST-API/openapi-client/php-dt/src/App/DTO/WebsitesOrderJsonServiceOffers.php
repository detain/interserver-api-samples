<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Schema for the jsonServiceOffers field in WebsitesOrder
 */
class WebsitesOrderJsonServiceOffers
{
    /**
     * Array of service offers
     */
    #[DTA\Data(field: "1026")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection131::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection131::class])]
    public \App\DTO\Collection131|null $_1026 = null;

}
