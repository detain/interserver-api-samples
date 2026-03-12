<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * The service types data.
 */
class WebsitesOrderServiceTypes
{
    #[DTA\Data(field: "11447")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\WebsitesOrderServiceTypes::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\WebsitesOrderServiceTypes::class])]
    public \App\DTO\WebsitesOrderServiceTypes|null $_11447 = null;

}
