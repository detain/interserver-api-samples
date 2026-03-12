<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * The service offers data.
 */
class WebsitesOrderServiceOffers
{
    #[DTA\Data(field: "1026")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection132::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection132::class])]
    public \App\DTO\Collection132|null $_1026 = null;

}
